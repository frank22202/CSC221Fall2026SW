/*---------------------------------------------------------------*/
/* Program chapter5_6                                            */
/* This program reads an html file, and writes the text          */
/* without the tags to a new file.                               */
#include<iostream> //Required for cin, cout, cerr.
#include<fstream> //Required for ifstream, ofstream.
#include<string> //Required for string.
using namespace std;
int main()
{
  // Declare objects.
  char character;
  bool text_state(1);
  string infile, outfile;
  ifstream html;
  ofstream htmltext;
  // Prompt user for name of input file.
  cout << "enter the name of the input file";
  cin >> infile;
  // Prompt user for name of output file.
  cout << "enter the name of the output file";
  cin >> outfile;
  // Open files.
  html.open(infile);
  if(html.fail())
  {
    cerr << "Error opening input file\n";
    exit(1);
  }
  htmltext.open(outfile);
// Read first character from html file.
  html.get(character);
  while(!html.eof())
  {
  // Check state.
  if(text_state)
  {
    if(character == '<') // Beginning of a tag.
      text_state=false; // Change States.
    else
      htmltext << character; // Still text, write 
  }
  else
  {
    // Command state, no output required.
    if(character == '>') // End of tag.
      text_state = true; // Change States.
  }
  // Read next character from html file.
  html.get(character);
  }
  html.close();
  htmltext.close();
  return 0;
}
