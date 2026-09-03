//
//  VegetationSample.h
//  Chapter7-9VegetationMaps
//
//  Created by Jeanine Ingber on 7/23/15.
//  Copyright (c) 2015 Jeanine Ingber. All rights reserved.
//

#ifndef __Chapter7_9VegetationMaps__VegetationSample__
#define __Chapter7_9VegetationMaps__VegetationSample__

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
/***************************************************************/
/* VegetationSample Class Declaration                          */

class VegetationSample
{
private:
    //data members
    static const int MAXPLANTS = 5;
    double latitude,longitude,elevation;
    int plantCounts[MAXPLANTS];
    
public:
    //Methods to support public interface
    
    //Default Constructor
    VegetationSample();
    VegetationSample(int size);
    
    //Accssor Methods
    int getNumberOfPlants() const {return MAXPLANTS;}
    double getLatitude() const {return latitude;}
    double getLongitude() const {return longitude;}
    double getElevation() const {return elevation;}
    int getPlantCount(int p) const {return plantCounts[p];}
       
    //Mutator Methods
    void inputSampleData(istream&in);
};
/***************************************************************/

#endif /* defined(__Chapter7_9VegetationMaps__VegetationSample__) */
