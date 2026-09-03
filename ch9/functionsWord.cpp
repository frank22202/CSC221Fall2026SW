#include<iostream>
#include<string>
#include<list>
#include<algorithm>
#include<iomanip>
using namespace std;
/*---------------------------------------------------------------*/
/* This function will insert word into wordlist */
/* if word is not found in wordlist. */
/* */
void insert_word(string word, list<string> &wordlist)
{
  list<string>::iterator iter;
  iter = find(wordlist.begin(), wordlist.end(), word);
  if( iter == wordlist.end() )
  {
    // Word is not in list. Insert word.
    wordlist.insert(iter, word);
  }
}
/*---------------------------------------------------------------*/
/*---------------------------------------------------------------*/
/* This function returns the next word from the input stream. */
/* All non-alpha characters are treated as delimiters. */
/* The function will ignore all leading non-alpha characters, */
/* then read and store the following alpha characters */
/* until it reaches the next non alpha character. */
void get_word(istream& in_stream, string& w)
{
  char ch;
  w = ""; //clear word
  in_stream.get(ch);
  while( !isalpha(ch)&& !in_stream.eof() )// skip non-alpha
  {
    in_stream.get(ch);
  }
  while( isalpha(ch) && !in_stream.eof() ) // read and store alpha
  {
    ch = tolower(ch);
    w += ch;
    in_stream.get(ch);
  }
}
/*---------------------------------------------------------------*/
/*---------------------------------------------------------------*/
/* This function outputs the list of words to an output stream. */
/* Three words per column are printer. */
void display_list(ostream& out_stream, list<string> wordlist)
{
  int columns(3), counter(0);
  list<string>::iterator iter;
  out_stream << setiosflags(ios::left);
  // Position iter at beginning of list.
  iter = wordlist.begin();
  while(iter != wordlist.end())
  {
    out_stream << setw(20) << (*iter).c_str();
    iter++;
    counter++;
    if(counter%columns == 0)
    {
      out_stream << endl;
    }
  }
}
