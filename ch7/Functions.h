//
//  Functions.h
//  Chapter7-9VegetationMaps
//
//  Created by Jeanine Ingber on 7/23/15.
//  Copyright (c) 2015 Jeanine Ingber. All rights reserved.
//

#ifndef __Chapter7_9VegetationMaps__Functions__
#define __Chapter7_9VegetationMaps__Functions__

const int MAXSampleSIZE(100);
const int NUMBERofPLANTS(5);

#include <stdio.h>
#include <iostream>
#include "VegetationSample.h"
using namespace std;
void getHeader(istream&, string& sc, string& sdate, double& sRadius, string[]);
void getData(istream&, VegetationSample[], int&);
void calculateAverages(const VegetationSample[],int,double[]);
void report20PBelowAverage(ostream&,const VegetationSample[],int, const double[], const string[]);
void reportBelowAverage(ostream&,const VegetationSample[],int, const double[], const string[]);


#endif /* defined(__Chapter7_9VegetationMaps__Functions__) */
