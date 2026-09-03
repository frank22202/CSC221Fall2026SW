//
//  ImageFunctions.h
//  ImageGeneration
//
//  Created by Jeanine Ingber on 10/10/15.
//  Copyright (c) 2015 Jeanine Ingber. All rights reserved.
//

#ifndef __ImageGeneration__ImageFunctions__
#define __ImageGeneration__ImageFunctions__

#include <stdio.h>
#include "Pixel.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

const string magicNumber{"P3"};
const int maxPixelVal{255};

const int MAXWIDTH{8};  //maxmum number of digit allowed for width
const int MAXLEN{1000};

void convertP6ToP3(ifstream& bin, ofstream& out);

void readImageData(ifstream& fin, ofstream& fout, int w, int h, int maxC);

void readHeader(ifstream& fin, ofstream &fout, int& w, int& h, int& maxC);

void createYellowCircle(vector<vector<Pixel>> &image, int w, int h);

void createYellowBox(int w, int h);

void writeImage(vector<vector<Pixel> > &image, string c);

void writeHeader(ofstream& out, int h, int w, string comment);

void createRainbowBox(vector<vector<Pixel>> &image, int w, int h);

void createRandomBox(vector<vector<Pixel>> &image, int w, int h);


#endif /* defined(__ImageGeneration__ImageFunctions__) */
