#include<iostream>
using namespace std;
void ch6_static();
int main()
{
  ch6_static();
  ch6_static();
  ch6_static();
}
void ch6_static()
{
  int x(0);
  static int count(0);
  x++;
  count++;
  cout << x << ',' << count;
  return;
}
