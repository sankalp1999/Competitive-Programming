#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
  string s ;
  cin >> s ;
  string s1, s2;
  s1 = "";
  s2 = "";
  cout << "Here is the output" << s[0] << endl;
  s1 = to_string(s[0]) + to_string(s[1]);
  s2 = s[2] + s[3];
  int x1, x2;
  cout << s1 << " here " << s2 << endl;

  stringstream a(s1);
  a >> x1;
  stringstream a2(s2);
  a2 >> x2;
  cout << x1 << " " << x2 << endl;
  if (x1 > 12 && (x2 <= 12 && x2 != 0))
  {
      cout << "YYMM" << endl;
  }
  else if (x1 < 12 &&  x2 < 12)
  {
      cout << "AMBIGUOUS" << endl;
  }
  else if ((x1 > 12 && x2 == 00 ) || (x1 == 00 && x2 > 12 ))
  {
      cout << "NA" << endl;
  }
  else if (x1 <= 12 && x1 != 0  )
  {
      if (x2 > 12)
      {
          cout << "MMYY" << endl;
      }
  }

  return 0; 
}