//
//  ImageFunctions.cpp
//  ImageGeneration
//
//  Created by Jeanine Ingber on 10/10/15.
//  Copyright (c) 2015 Jeanine Ingber. All rights reserved.
//

#include "ImageFunctions.h"

void convertP6ToP3(ifstream& bin, ofstream& out)
{
    int width, height, maxColor;
    readHeader(bin,out, width, height, maxColor);
    readImageData(bin,out,width, height, maxColor);
}
void readImageData(ifstream& fin, ofstream& fout, int w, int h, int maxC)
{
    //Read and write image data
    int charCnt=0;
    //Define input variables
    char colorByte;
    unsigned char aByte;
    for (int i = 0; i < w; i++)
        for (int j = 0; j < h; ++j)
        {
            
            //red byte
            //read one char
            fin.read(&colorByte, 1);
            //convert to unsigned char
            aByte = (unsigned char)colorByte;
            //write as int
            fout << (unsigned int)aByte << ' ';
            
            //green byte
            fin.read(&colorByte, 1);
            aByte = (unsigned char)colorByte;
            fout << (unsigned int)aByte << ' ';
            
            //blue byte
            fin.read(&colorByte, 1);
            aByte = (unsigned char)colorByte;
            fout << (unsigned int)aByte;
            
            //CR printed ever 32 pixels, space otherwise
            ++charCnt;
            if(charCnt == 32)
            {
                fout << '\n';
                charCnt=0;
            }
            else
            {
                fout << ' ';
            }
        }
   
}
void readHeader(ifstream& fin, ofstream &fout, int& w, int& h, int& maxC )
{
    //Define input variables
    char bData[MAXLEN]={0}, magicNumber[MAXWIDTH], comment[MAXLEN]={"#"};
    int imageInfo[3];  //width, height, maximum color value
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
    //Input image information: width, height, maxcolor
    //Look for optional comment
    
    //Input next line of text header
    fin.getline(bData,MAXLEN);
    bIndex =0;
    do
    {
        //look at next charcter
        //is this the beginning of a comment
        ch = bData[bIndex];
        if(ch == '#')
        {
            //Comment has been read.
            //Comments are terminated with a newline
            //Get all characters until a newline is found
            charCount=0;
            while(ch != '\n')
            {
                comment[charCount] = ch;
                ++bIndex;
                ++charCount;
                ch = bData[bIndex];
                cout << bIndex << "," << charCount << "," << ch << endl;
            }
            //strcpy(comment,bData);
            //Get the next line of data
            fin.getline(bData,MAXLEN);
            bIndex = 0;
        }
        else
        {
            //This is not a comment
            //parse bData for image information
            charCount = 0;
            //look past whitespace
            while( bIndex < MAXLEN && !isdigit(bData[bIndex]) )
            {
                ++bIndex;
            }
            //may be the beginning of a decimal value..
            while( bIndex < MAXLEN && isdigit(bData[bIndex]) )
            {  //save the digits
                aNumber[charCount] = bData[bIndex];
                ++bIndex;
                ++charCount;
                if(charCount == MAXWIDTH)
                {
                    cerr << "Maximum width of " << MAXWIDTH << " digits was exceeded.." << endl;
                    exit(1);
                }
            }
            //look at size of aNumber...
            if(charCount > 0)
            {
                //we have image information, terminate string
                aNumber[charCount] = '\0';
                //convert from ascii to integer
                imageInfo[infoCount] = atoi(aNumber);
                switch(infoCount)
                {
                    case 0:
                        cout << "a width of " << imageInfo[infoCount] << " has been read." << endl;
                        break;
                    case 1:
                        cout << "a height of " << imageInfo[infoCount] << " has been read." << endl;
                        break;
                    case 3:
                        cout << "a maximum color of " << imageInfo[infoCount] << " has been read." << endl;
                        break;
                }
                ++infoCount;
            }
            else if(infoCount < 3)
            {
                //aNumber has 0 digits and infoCount is < 3
                //We need more image information
                //Get next line of data and parse for image information
                fin.getline(bData,MAXLEN);
                bIndex = 0;
            }//end else if
        }//end else parse
    } while(infoCount<3 && !fin.eof());
    
    if(infoCount < 3)
    {
        cerr << "image information could not be found" << endl;
        exit(1);
    }
    //We have all of the information
    //Write magic number and comment to ascii file
    fout << "P3\n";
    fout << comment << " Converted from P6 to P3 by ConvertP6ToP3\n";
    
    //Write width, height and maximum color to output file
    fout << imageInfo[0] << " " << imageInfo[1] << " " <<  imageInfo[2] << '\n';
    //return image information to calling program
    w = imageInfo[0];
    h = imageInfo[1];
    maxC = imageInfo[2];
    return;
}

void createYellowBox(int width, int height)
{
    cout << "inside createYellowBox" << endl;
    const Pixel RED{maxPixelVal,0,0},YELLOW{maxPixelVal,maxPixelVal,0};
    const double P25{0.25}, P75{0.75};
    
    //Declare objects.
    string filename = "YellowBox.ppm";
    
    //build an image using 2D vector of Pixels
    vector< vector< Pixel > > box;
    
    box.resize(height);
    for(int i=0; i<height; ++i)
    {
        box[i].resize(width);
        for(int j=0; j<width; ++j)
        {
            if((i > height*P25 && i < height*P75) &&
               (j > width*P25 && j < width*P75) ) box[i][j] = YELLOW;
            else box[i][j] = RED;
        }
    }
    //write image to file
    writeImage(box, filename);
    
}
void writeImage(vector<vector<Pixel > > &image, string filename)
{
    ofstream fout;
    fout.open(filename);
    //const int TEN{10}; //write 10 pixels per line
    if(fout.fail())
    {
        cout << "error opening output file" << endl;
        exit(1);
    }
    int h,w;
    h = (int)image.size();
    w = (int)image[0].size();
    writeHeader(fout,h,w,filename);
    
    for(int i=0; i<h; ++i)
    {
        for(int j=0;j<w; ++j)
        {
            fout << image[i][j] << " ";
            //if( (j+1)%TEN == 0 ) fout << endl;
            //else fout << " ";
        }
    }
    cout << "Image writen to " << system("pwd")<< " " << filename << "\nGoodbye." << endl;
    fout.close();
}
void writeHeader(ofstream& out, int h, int w, string comment)
{
    out << magicNumber << endl;
    out << "#"<<comment<<endl;
    out << h << " " << w << endl;
    out << maxPixelVal << endl;
}




void createYellowCircle(vector<vector<Pixel>> &image, int w, int h)
{
    int radius = 22;
    cout << "inside createCircleBox" << endl;
    const Pixel RED{maxPixelVal,0,0},YELLOW{maxPixelVal,maxPixelVal,0};
    const Pixel GRAY{100,100,100};
    
    image.resize(h);
    for(int i=0; i<h; ++i)
    {
        image[i].resize(w);
        for(int j=0; j<w; ++j)
        {
            if( sqrt(pow((i-h/2),2) + pow((j-w/2),2) ) < radius )
                image[i][j] = GRAY;
            else
                image[i][j] = RED;
        }
    }
}
void createRandomBox(vector<vector<Pixel>> &image, int w, int h)
{
    cout << "inside createRandombowBox" << endl;
    const int NUMColorBLOCKS = 5;
    //const Pixel colors[] = { {maxPixelVal,0,0},{maxPixelVal,maxPixelVal,0},{0,maxPixelVal,0},{maxPixelVal,200,200},{0,0,maxPixelVal} };
    int blockSize;
    
    image.resize(h);
    blockSize = h/NUMColorBLOCKS;
    unsigned int randomRed, randomGreen, randomBlue;
    srand(w*h);
    randomRed = rand()%maxPixelVal + 1;
    randomGreen = rand()%maxPixelVal + 1;
    randomBlue = rand()%maxPixelVal + 1;
    Pixel currentColor(randomRed, randomGreen, randomBlue);
    for(int i=0; i<h; ++i)
    {
        image[i].resize(w);
        for(Pixel& p:image[i])
        {
            p = currentColor;
        }
        if( (i+1) % blockSize == 0)
        {
            randomRed = rand()%maxPixelVal + 1;
            randomGreen = rand()%maxPixelVal + 1;
            randomBlue = rand()%maxPixelVal + 1;
            currentColor.setPixel(randomRed, randomGreen, randomRed);
        }
    }
}


void createRainbowBox(vector<vector<Pixel>> &image, int w, int h)
{
    cout << "inside createRainbowBox" << endl;
    const int NUMColorBLOCKS = 5;
    const Pixel colors[] = { {maxPixelVal,0,0},{maxPixelVal,maxPixelVal,0},{0,maxPixelVal,0},{maxPixelVal,200,200},{0,0,maxPixelVal} };
    int blockSize, currentColor;
    
    image.resize(h);
    blockSize = h/NUMColorBLOCKS;
    currentColor = 0;
    for(int i=0; i<h; ++i)
    {
        image[i].resize(w);
        for(Pixel& p:image[i])
        {
            p = colors[currentColor];
        }
        if( (i+1) % blockSize == 0)
        {
            ++currentColor;
        }
    }
}

