#ifndef BINIMAGEFUNCTIONS
#define BINIMAGEFUNCTIONS

#include <cstdlib>
#include "Pixel.h"
#include <iostream>
#include <fstream>
#include <vector>

//Declared constants
const int MAXWIDTH(5);    //max digits allowed for width
const int MAXLEN(100);    //char array size
const char newline('\n');
const char nullChar('\0');

//Function prototypes
void openIOFiles(ifstream& fin, ofstream& fout, 
                 char filename[]);
void convertP6ToP3(ifstream& bin, ofstream& out, 
                   vector<vector<Pixel> > &image, 
                   int info[]);
void readAndWriteImageData(ifstream& fin, ofstream& fout, 
                           vector<vector<Pixel> > &image, 
                           int w, int h);
void readHeader(ifstream& fin, ofstream &fout, 
                int imageInfo[]);
void writeP3Image(ofstream& out, 
                  vector<vector<Pixel> > image, 
                  char comment[], int maxColor);
void writeHeader(ofstream& out, char magicNumber[], 
                 char comment[], int w, int h, int 
                 maxPixelVal);
void smooth(vector< vector<Pixel> > &image);

#endif

