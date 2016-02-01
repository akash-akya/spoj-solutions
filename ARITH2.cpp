#include <bits/stdc++.h>

using namespace std;

int main()
{
  int tc;
  char ch[5] = "+", pch;
  long long int op1,op2;

  cin >> tc;
  while (tc--)
	{
	  op1 = 0;
	  pch = '+';
	  ch[0] = '+';
	  
	  while (ch[0] != '=')
		{
		  scanf ("%lld%s",&op2, ch);
		  switch (pch)
			{
			case '+' : op1 += op2; break;
			case '-' : op1 -= op2; break;
			case '*' : op1 *= op2; break;
			case '/' : op1 /= op2; break;
			case '%' : op1 %= op2; break;
			}
		  pch = ch[0];
		}
	  cout << op1 << endl; 
	}
  
  return 0;
}
