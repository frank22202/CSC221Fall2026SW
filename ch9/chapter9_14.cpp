/*---------------------------------------------------------------*/
/* Program chapter9_14 */
/* This program builds a concordance of a text file. */
/* */
#include <iostream>//Required for ifstream, ofstream
#include <fstream>//Required for ifstream, ofstream
#include <string>//Required for string
#include <cctype>//Required for isalpha(), tolower()
#include <iomanip>//Required for setw()
#include <list>//Required for list, sort(), begin(), end()
#include <algorithm>//Required for find()
using namespace std;
// Function prototypes.
void get_word(istream& in_stream, string& w);
void insert_word(string word, list<string> &wordlist);
void display_list(ostream& out_stream, list <string> wordlist);
int main()
{
  // Declare objects.
  ifstream in_stream;
  ofstream out_stream;
  string infile, outfile;//filenames
  string word; // string to hold current word
  // Prompt for filenames and open files
  cout << "Enter the input file name ";
  cin >> infile;
  cout << "Enter the output file name ";
  cin >> outfile;
  in_stream.open(infile);
  if(in_stream.fail())
    cout << "fail to open file " << infile << endl;
  else
  {
    out_stream.open(outfile);
    list <string> wordlist;
    list <string>::iterator iter;
    get_word(in_stream,word); // get a word
    // While non-empty word was returned
    while(word.size())
    {
      insert_word(word, wordlist);
      get_word(in_stream,word); // get a word
    }
    wordlist.sort();
    out_stream << "There were " << wordlist.size()
              << " distinct words. \n";
    out_stream << "\nHere is the ordered list of words\n";
    display_list(out_stream,wordlist);
  }//end else
  return 0;
}
/*---------------------------------------------------------------*/
