/*--------------------------------------------------------*/
/* filename main.cpp                                      */
/* Program chapter10_4                                    */
/*                                                        */
/* This program converts a PPM file from a P6 format      */
/* to a P3 format.  A smoothing operation is performed    */
/* on the converted image and the smoothed image          */
/* is written to a new file.                              */

#include "BinaryImageFunctions.h"
#include "Pixel.h"
using namespace std;

int main()
{
    //Define objects
    char filename[MAXLEN];
    ifstream fin;
    ofstream fout,sout;
    int imageInfo[3];  				//w,h,maxColor
    vector< vector<Pixel> > image;  	//pixel grid
    char comment[MAXLEN] = "#";
   
    //Open files
    openIOFiles(fin,fout,filename);

    //Convert binary file
    convertP6ToP3(fin, fout, image, imageInfo);

    //Perform smoothing operation on image
    smooth(image);

    //Generate a meaningful filename and comment
    //Terminate input file name at .
    char * loc = strchr(filename,'.');
    *loc = '\0';

    //Add extention to name
    strcat(filename,"P3Smoothed.ppm");

    //Open file for output
    sout.open(filename);

    //Create a comment for the smoothed image
    strcat(comment,filename);

    writeP3Image(sout, image, comment, imageInfo[2]);
    cout << "P3 Image writen to "<< filename 
         << "\nGoodbye." << endl;

    //close all files
    fout.close();
    sout.close();
    fin.close();
    return 0;
}

