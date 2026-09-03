/* Program chapter7_11                                    */
#include <iostream>
#include <fstream>
#include "VegetationSample.h"
#include "Functions.h"

int main(int argc, const char * argv[]) {
    //Define input variables
    VegetationSample theSamples[MAXSampleSIZE];
    string stationCode, sampleDate, plantNames[NUMBERofPLANTS];
    double sampleRadius;
    int numberOfSamples(0);
    
    //Define file streams and report variables
    ifstream fin;
    ofstream fout;
    string filename;
    double averagePlantCount[NUMBERofPLANTS]={0};
    
    //Get file name from standard input
    cout << "enter file name:";
    cin >> filename;

    //Attempt to open input file
    fin.open(filename);
    if(fin.fail()){
        cerr << "could not open input file";
        cout << "could not open input file";
        exit(1);
    }
    //fin has been defined - open report file
    fout.open(filename+"report");
    
    //input header data
    getHeader(fin, stationCode, sampleDate, sampleRadius, plantNames);
    
    
    //input sample data
    getData(fin,theSamples,numberOfSamples);
    
    cout << "in main..." << numberOfSamples << " samples read.." << endl;
    cout << "sample 1 long:" << theSamples[1].getLongitude() << endl;
    cout << "plant count is" << theSamples[1].getPlantCount(1);
    
    calculateAverages(theSamples,numberOfSamples,averagePlantCount);
    
    
    //Generate Report Header
    fout << stationCode << endl << sampleDate << endl;
    fout << "Samples taken within a "<< sampleRadius << " mile radius" << endl;
    
    //report below average plant populations
    report20PBelowAverage(cout,theSamples,numberOfSamples,averagePlantCount,plantNames);
    
    //cout << system("pwd") << "report written..." <<endl;
    return 0;
}//end main
