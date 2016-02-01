#include <iostream>
#include <cstring>

#define ZCHAR '0'

using namespace std;

int main()
{
  char input[101];
  int len;
  int v;
  int c;

  for (int i=0; i<1024; i++)
	{
	  scanf ("%s", input+1);
	  input[0] = ZCHAR;
	  
	  len = strlen(input);

	  for(i=len-1, c=-2; i>=0; i--)
		{
		  v = c + input[i]*2 - ZCHAR;
		  if (v > ZCHAR+9)
			{
			  c = 1;
			  input[i] = v-10;
			}
		  else
			{
			  c = 0;
			  input[i] = v;
			}
		}

	  if (input[0] == ZCHAR)
		{
		  if (strlen(input)==2 && input[1] == '1' && input[2] == '\0')
			cout << input << endl;
		  else
			cout << input+1 << endl;
		}
	  else 
		cout << input << endl;
	}
}
