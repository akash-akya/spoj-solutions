#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;
 
static int myCompare (const void * a, const void * b)
{
  return strcmp (*(const char **) a, *(const char **) b);
}
 
void sort(char *arr[3], int n)
{
  qsort (arr, n, sizeof (char *), myCompare);
}
 
int main ()
{
  char arr[10000][3];
  char s[100];
  int n = 5; //sizeof(arr)/sizeof(arr[0]);
  int i, ret;
  
  for (i = 0; i < n; i++)
	{
	  ret = scanf("%s", s);
	  arr[i][0] = s[0];
	  arr[i][1] = s[strlen(s)-1];
	  arr[i][2] = '\0';
	}

  // printf("%d: %s \n", i, arr[i]);	
  sort(arr, n);
  
  printf("\nSorted array is\n");
  for (i = 0; i < n; i++)
	{
	  printf("%s\n", arr[i]);
	}
  
  return 0;
}
