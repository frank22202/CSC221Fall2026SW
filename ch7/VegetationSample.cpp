//
//  VegetationSample.cpp
//  Chapter7-9VegetationMaps
//
//  Created by Jeanine Ingber on 7/23/15.
//  Copyright (c) 2015 Jeanine Ingber. All rights reserved.
//

#include "VegetationSample.h"

//Default Constructor
VegetationSample::VegetationSample()
{
    //Five plants per sample
    //initial all plant counts
    for(int i=0; i<5; ++i)
    {
        //plantCounts.push_back(0);
        plantCounts[i] = 0;
    }
    latitude = 0.0;
    longitude = 0.0;
    elevation = 0.0;
}
//Parameterized Constructor
VegetationSample::VegetationSample(int size)
{
    //Parameterized constructor
    //initial all plant counts
    for(int i=0; i<size; ++i)
    {
        //plantCounts.push_back(0);
        plantCounts[i] = 0;
    }
    latitude = 0.0;
    longitude = 0.0;
    elevation = 0.0;
}

void VegetationSample::inputSampleData(istream& in)
{
    in >> latitude >> longitude >> elevation;
    for(int i=0; i<MAXPLANTS; ++i){
        in >> plantCounts[i];
        //cout << plantCounts[i] << ' ';
    }
    cout << endl;
}

