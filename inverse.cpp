#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long int s;

void merge(long long int arr[], long long int l, long long int m, long long int r)
{
  long long int i, j, k;
  long long int n1 = m - l + 1;
  long long int n2 =  r - m;
 
  long long int L[n1], R[n2];
 
  /* Copy data to temp arrays L[] and R[] */
  for (i = 0; i < n1; i++)
	L[i] = arr[l + i];
  for (j = 0; j < n2; j++)
	R[j] = arr[m + 1 + j];
 
  /* Merge the temp arrays back into arr[l..r]*/
  i = 0;
  j = 0;
  k = l;
  
  long long int ls = 0;
  
  while (i < n1 && j < n2)
    {
	  if (L[i] <= R[j])
        {
		  arr[k] = L[i];
		  i++;
		  ls += j;
        }
	  else
        {
		  arr[k] = R[j];
		  j++;
        }
	  k++;
	  // cout << L[i] << " " << R[j] << endl;
    }

  
  /* Copy the remaining elements of L[], if there are any */
  while (i < n1)
    {
	  arr[k] = L[i];
	  i++;
	  k++;
	  ls += j;
    }
 
  /* Copy the remaining elements of R[], if there are any */
  while (j < n2)
    {
	  arr[k] = R[j];
	  j++;
	  k++;
    }
  s += ls;
}

void mergeSort(long long int v[], int l, int r)
{
  if (l<r)
	{
	  long long int m = l+(r-l)/2; //Same as (l+r)/2 but avoids overflow for large l & h
      mergeSort(v, l, m);
      mergeSort(v, m+1, r);
      merge(v, l, m, r);
	}
}

int main()
{
  long long int v[200000], val;
  long long int num = 10, tc;

  cin >> tc;

  // c = getchar();
  // while(c!='\n')
  // 	c = getchar();
  
  while(tc--)
	{
	  s = 0;
	  cin >> num;
	  for (long long int i=0; i<num; i++)
		{
		  cin >> val;
		  v[i] = val;
		}
	  
	  // c = getchar();
	  // while(c!='\n')
	  // 	c = getchar();
  
	  mergeSort(v, 0, num-1);

	  // for (int i=0; i<num; i++)
	  // 	cout << v[i] << " ";

	  cout << s << endl;
	  // cin >> tc;
	}

  return 0;
}
