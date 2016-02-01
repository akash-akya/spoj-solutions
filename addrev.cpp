#include <iostream>

using namespace std;

int main ()
{
  int tc;
  int l1, l2, num;
  int c=0, s, i;
  string num1, num2, res;

  cin >> tc;
  while(tc--)
	{
	  cin >> num1 >> num2;
	  num1 += '0';
	  num2 += '0';
	  res = "";

	  l1 = num1.length();
	  l2 = num2.length();

	  if (l1>l2)
		  for(int i=0; i<l1-l2; i++)
			num2 += '0';
	  else
		  for(int i=0; i<l2-l1; i++)
			num1 += '0';
	  
	  c = 0;
	  for (i=0; i<l1 || i<l2; i++)
		{
		  num = c + num1[i]+num2[i] - 2*'0';
		  c = num / 10;
		  s = num % 10;
		  res += '0'+s;
		}

	  
	  for (i=0; i<(int)res.length() && res[i]== '0'; i++);
	  if (i == (int)res.length())
		{
		  cout << 0 << endl;
		}
	  else
		{
		  for (; i<(int)res.length()-1; i++)
			cout << res[i];
		  if (res[i] != '0')
			cout << res[i];
		}
	  cout << endl;
	}
}
