#include <iostream>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

string po(string s)
{
  string t = "";
  int i;
  
  if(s[0]!='(')
	{
	  return s;
	}

  int c = 0;
  // s = s.substr(1, s.length()-1);
  cout << s << endl;
  for(i=1; i<(int)s.length(); i++)
	{
	  if(s[i] == '(')
		c++;
	  else if(s[i] == ')')
		c--;

	  if (c == 0 && !isalpha(s[i]))
		break;
	}

  string op1 = s.substr(1, i);
  op1 = po(op1);
  string op2 = s.substr(i+1, s.length()-i-1-1);
  op2 = po(op2);

  string optr = "";
  optr += s[i]; 

  return op1+op2+optr;
}

int main()
{
  cout << po("((a+t)*((b+(a+c))^(c+d)))") << endl;
  return 0;
}
