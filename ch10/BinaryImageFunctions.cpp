#include "BinaryImageFunctions.h"
//filename BinaryImageFunctions.cpp

void openIOFiles(ifstream& fin, ofstream& fout, char 
                 inputFilename[])
{
    //Define filestreams
    //char inputFilename[MAXLEN], outputFilename[MAXLEN];
    char outputFilename[MAXLEN];
    int i;

    //Prompt user for input file
    cout << "enter file name ";
    cin >> inputFilename;

    //Open .ppm binary file for input
    fin.open(inputFilename, ios::binary);
    if(!fin)
    {
        cout << "can not open input file: goodbye";
        exit(1);
    }

    //Generate meaningful output filename
    strcpy(outputFilename,inputFilename);
    //Terminate output filename at .
    char * loc = strchr(outputFilename,'.');
    *loc = '\0';

    //Add extention to name
    strcat(outputFilename,"P3.ppm");

    //Open .ppm ascii file for output
    fout.open(outputFilename);
    if(!fout)
    {
        cout << "can not open output file: goodbye";
        exit(1);
    }
}
void convertP6ToP3(ifstream& bin, ofstream& out, 
                   vector<vector<Pixel> > &image, int info[])
{
    readHeader(bin,out, info);
    int width=info[0], height=info[1];
    readAndWriteImageData(bin,out,image,width,height);
}
void smooth(vector< vector<Pixel> > &image)
{
   int h = image.size();
   int w = image[0].size();
   Pixel sum;
   for(int i=1; i< (h-1); i++)
   {
    for(int j=1; j< (w-1); j++)
    {
      sum = image[i+1][j] + image[i-1][j]
          + image[i][j+1] + image[i][j-1];
      sum = sum/4;
      image[i][j] = sum;
    }
   }
}
void writeP3Image(ofstream& out, vector<vector<Pixel> > 
                  image, char comment[], int maxColor)
{
    int h,w,pCount(0);;
    char magicNumber[3] = "P3";
    h = (int)image.size();
    w = (int)image[0].size();
    writeHeader(out,magicNumber,comment,w,h,maxColor);
    for(int i=0; i<h; ++i)
    {
        for(int j=0;j<w; ++j)
        {
            out << image[i][j];
            ++pCount;
            if( pCount == 10)
            {
                out << newline;  //'\n';
                pCount = 0;
            }
            else
                out << ' ';
        }
    }
}
void readAndWriteImageData(ifstream& fin, ofstream& fout, vector<vector<Pixel> > &image, int w, int h)  
{
    //Read and write image data
    //Define input variables
    int charCnt=0;
    char colorByte;
    unsigned char aChar;
    unsigned int triple[3];  //red, green, blue;

    //Allocate memory
    image.resize(h); //allocate h rows
    for (int i = 0; i < h; i++)
    {
        image[i].resize(w);  //for each row, allocate w columns
        for (int j = 0; j < w; ++j)
        {

            for(int k=0; k<3; ++k)
            {
               //read one byte
               fin.read(&colorByte, 1);
               //convert to unsigned char
               aChar = (unsigned char)colorByte;
               //save as unsigned int
               triple[k] = (unsigned int)aChar;
               //write as int
               fout << triple[k] << ' ';
            }//end for k
            //CR printed ever 32 pixels
            ++charCnt;
            if(charCnt == 32)
            {
              fout << newline;
              charCnt=0;
            }
            image[i][j].setPixel(triple[0],triple[1],triple[2]);
        }
    }
  
}
void readHeader(ifstream& fin, ofstream &fout, int imageInfo[])
{
    //Define input variables
    char bData[MAXLEN]={0},magicNumber[MAXWIDTH],
         comment[MAXLEN]={"#"};
    int bIndex=0, charCount=0, infoCount=0;
    char ch, aNumber[MAXWIDTH];
    //Input first line of text header(magic number)
    //If the magic number is not P6, exit program
    fin.getline(magicNumber,3);
    if (strcmp(magicNumber, "P6") != 0)
    {
        cout << "Unexpected file format\n";
        exit(1);
    }
    //Clear bData array and reset bIndex
    //Input next line of text header
    strcpy(bData," ");
    bIndex=0;
    fin.getline(bData,MAXLEN);
    do
    {
        //is this the beginning of a comment
        ch = bData[bIndex];
        if(ch == '#')
        {
            //Comment has been read.
            //Get all characters until a newline is found
            charCount=0;
            while(ch != newline && charCount < MAXLEN)
            {
                comment[charCount] = ch;
                ++bIndex;
                ++charCount;
                ch = bData[bIndex];
            }
            //Get the next line of data
            strcpy(bData," ");
            bIndex = 0;
            fin.getline(bData,MAXLEN);
        }
        else
        {
            //This is not a comment
            //parse bData for image information
            charCount = 0;
            //look past whitespace
            while( bIndex < MAXLEN && isspace(bData[bIndex]) )
            {
                ++bIndex;
            }
            //may be the beginning of a decimal value..
while( bIndex < MAXLEN && isdigit(bData[bIndex]) )
            {  
                aNumber[charCount] = bData[bIndex];
                ++bIndex;
                ++charCount;
                if(charCount == MAXWIDTH)
                {
                    cerr << "Maximum width of " << MAXWIDTH 
                         << " digits was exceeded.." << endl;
                    exit(1);
                }
            }//end while
            //look at size of aNumber...
            if(charCount > 0)
            {
                //we have image information, terminate string
                aNumber[charCount] = nullChar; 
                //convert from ascii to integer
                imageInfo[infoCount] = atoi(aNumber);
                ++infoCount;
                //verify input
                switch(infoCount)
                {
                   case 1:
                      cout<<"a width of "<<imageInfo[infoCount-1] 
                          << " has been read." << endl;
                      break;
                   case 2:
                     cout<<"a height of "<<imageInfo[infoCount-1]
                         << " has been read." << endl;
                     break;
                   case 3:
                     cout<<"maxcolor of "<< imageInfo[infoCount-1] 
                         <<" has been read."<<endl;
                     break;
                }//end switch
            }//end if
            else if(infoCount < 3)
            {
             //aNumber has 0 digits and infoCount is < 3
             //We need more image information
             //Get next line of data and parse for image information
             strcpy(bData," ");
             bIndex = 0;
             fin.getline(bData,MAXLEN);
            }//end else if
        }//end else parse
    } while(infoCount<3 && !fin.eof());
    if(infoCount < 3)
    {
        cerr << "image information could not be found" << endl;
        exit(1);
    }
    //We have all of the information
    //Write header to ascii file
    strcpy(magicNumber,"P3");
    strcat(comment," Converted from P6 to P3 by ConvertP6ToP3");
    writeHeader(fout, magicNumber, comment, imageInfo[0], 
                imageInfo[1], imageInfo[2]);
}
void writeHeader(ofstream& fout, char magicNumber[], 
                 char comment[], int w, int h, 
                 int maxPixelVal)
{
    //Write image information to output file
    fout << magicNumber << newline;
    fout << comment << newline;
    fout << w << ' ' << h << ' ' << maxPixelVal << newline;  
}
//end file BinaryImageFunctions.cpp

