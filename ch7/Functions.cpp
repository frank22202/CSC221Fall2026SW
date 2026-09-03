//
//  Functions.cpp
//  Chapter7-9VegetationMaps
//
//  Created by Jeanine Ingber on 7/23/15.
//  Copyright (c) 2015 Jeanine Ingber. All rights reserved.
//

#include "Functions.h"

void calculateAverages(const VegetationSample theSamples[],int sampleSize,double averagePlantCount[])
{
    //for each sample
    for(int i=0; i<sampleSize; ++i){
        //for each plant
        for(int j=0; j<NUMBERofPLANTS; ++j){
            //accumulate sums for each plant
            averagePlantCount[j] = averagePlantCount[j]+theSamples[i].getPlantCount(j);
        }
    }
    //calculate the average plant count for each plant
    for(int i=0; i<NUMBERofPLANTS; ++i){
        averagePlantCount[i] /= sampleSize;
    }
}//end calculate

void getHeader(istream& in, string& sc, string& sdate, double& sRadius, string names[])
{
    //input and report file header
    in >> sc >> sdate >> sRadius;
    //input plant names
    for(int i=0; i<NUMBERofPLANTS; ++i){
        in>>names[i];
    }
}//end getHeader

void getData(istream& fin,VegetationSample samples[], int& size)
{
    fin >> size;
    if(size > MAXSampleSIZE){
        cerr << "number of samples: " << size << ", is too large" << endl;
        cout << "number of samples: " << size << ", is too large" << endl;
        exit(1);
    }
    //for each sample, input data
    for(int i=0; i<size; ++i){
        samples[i].inputSampleData(fin);
        //cout << samples[i].getPlantCount(1)<<endl;
    }
}//end getData
void reportBelowAverage(ostream& out, const VegetationSample theSamples[],int numSamples,
                        const double avgPlantCnt[], const string plantNames[])
{
    //Find below average samples
    double count, average;
    bool first;
    out << "Below average plant samples occurred in the following geographical locations:" << endl<<endl;
    for(int i=0;i<numSamples;++i){
        first=true;
        out << endl;
        for(int j=0; j<NUMBERofPLANTS; ++j){
            count = theSamples[i].getPlantCount(j);
            average = avgPlantCnt[j];
            if( count < average ){
                if(first){ //output heading
                    out << "Lat:" << theSamples[i].getLatitude() << endl;
                    out << "Long:" << theSamples[i].getLongitude() << endl;
                    out << "Elevation:" << theSamples[i].getElevation() << endl;
                    first = false;
                }//end if first
                out << plantNames[j] << ":\t\t" << (1.0 - count/average)*100.0 << "% below average" << endl;
            }//endif count
        }//end for plants
    }
}
void report20PBelowAverage(ostream& out, const VegetationSample theSamples[],int numSamples,
                        const double avgPlantCnt[], const string plantNames[])
{
    //Find below average samples
    double count, average;
    bool first;
    out << "Below average plant samples occurred in the following geographical locations:" << endl<<endl;
    for(int i=0;i<numSamples;++i){
        first=true;
        out << endl;
        for(int j=0; j<NUMBERofPLANTS; ++j){
            count = theSamples[i].getPlantCount(j);
            average = avgPlantCnt[j];
            if( count <= 0.8*average ){
                if(first){ //output heading
                    out << "Lat:" << theSamples[i].getLatitude() << endl;
                    out << "Long:" << theSamples[i].getLongitude() << endl;
                    out << "Elevation:" << theSamples[i].getElevation() << endl;
                    first = false;
                }//end if first
                out << plantNames[j] << ":\t\t" << (1.0 - count/average)*100.0 << "% below average" << endl;
            }//endif count
        }//end for plants
    }
}


