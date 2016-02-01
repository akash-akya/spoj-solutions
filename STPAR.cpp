#include <iostream>

using namespace std;

int main()
{
  int num;
  int s[1001];
  int a[1001];
  int top;
  int i;
  int l;
  bool res;
  
  cin >> num;
  while(num)
	{
	  top = -1;
	  l   = -1;
	  res = true;
	  
	  for (i = 0; i < num; i++)
		  cin >> a[i];

	  for (i = 0; i < num; i++)
		{
		  if (l!=-1 && l>a[i])
			{
			  res = false;
			  break;
			}

		  if (i < num-1)
			{
			  while(top>-1 && s[top] < a[i])
				{
				  // cout << "pop " << s[top] << endl;
				  top--;
				}

			  if(a[i] > a[i+1])
				{
				  if (top == -1 || s[top] > a[i])
					{
					  // cout << "push " << a[i] << endl;
					  s[++top] = a[i];
					}
				  else
					{
					  res = false;
					  break;
					}
				}
			  else
				{
				  l = a[i];
				}
			}
		}

	  if (res)
		cout << "yes" << endl;
	  else
		cout << "no" << endl;

	  cin >> num;
	}
}
