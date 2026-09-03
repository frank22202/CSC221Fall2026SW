//  main.cpp
//  Created by Jeanine Ingber on 6/4/15.
//  Copyright (c) 2015 Jeanine Ingber. All rights reserved.
/*******************************************************************/
/* Program chapter5_9                                              */
/* This program counts days that had an average temperature        */
/* above 50 degree F                                               */

#include <iostream>
#include<fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream fin;
    ofstream fout;
    string filename;
    const int HEADERLINES(5);
    cout << "enter input file name ";
    cin >> filename;
    fin.open(filename);
    if(fin.fail()){
            cout << "error opening file..."<< endl;
            exit(1);
    }
    //successful open
    //read and print header
    char ch, newline('\n');
    for(int i=0; i<HEADERLINES; ++i){
        fin.get(ch);
        while(!fin.eof() && ch != newline)
        {
            cout << ch;
            fin.get(ch);
        }
        if(fin.eof())
            exit(1);  //unexpected end of data
        else
            cout << ch;  //print newline
    }//get next header
    //read and discard all non numeric data
    fin.get(ch);
    while(!fin.eof() && !isdigit(ch)){
        fin.get(ch);
    }
    //Check for unexpected end of file
    if(fin.eof()) exit(1);
    
    //Not eof, ch must be a digit
    //put the digit back on the input stream
    fin.putback(ch);
    //get numeric data
    int day, above50(0);
    double wMax, wMin, wAvg;
    string rain, snow;
    fin >> day >> wMax >> wMin >> wAvg >> rain >> snow;
    while(!fin.eof()){
        if(wAvg > 50) ++above50;
        fin >> day >> wMax >> wMin >> wAvg >> rain >> snow;
    }
    cout << above50 << " days had an average temperature above 50" << endl;
        return 0;
}
