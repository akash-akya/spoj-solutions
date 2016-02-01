#include <bits/stdc++.h>
using namespace std;

bool is_java_id (char s[])
{
  int l = strlen(s);
  if (islower(s[0]))
	{
	  for (int i = 1; i < l; i++)
		{
		  if (! isalpha(s[i]))
			return false;
		}
	}
  else
	{
	  return false;
	}

  return true;  
}


bool is_cpp_id(char s[])
{
  int l = strlen(s);
  bool is_last_underscore = false;

  if (islower(s[0]))
	{
	  for (int i = 1; i < l; i++)
		{
		  if (islower(s[i]))
			{
			  is_last_underscore = false;
			}
		  else if (s[i] == '_')
			{
			  if (is_last_underscore)
				return false;

			  is_last_underscore = true;
			}
		  else
			{
			  return false;
			}
		}
	}
  else
	{
	  return false;
	}

  if (is_last_underscore)
	return false;
  else
	return true;
}

void to_cpp(char s[], char d[])
{
  int l = strlen(s);
  int i=0, j=0;
	
  for (i=0; i<l; i++)
	{
	  if (islower(s[i]))
		d[j++] = s[i];
	  else
		{
		  d[j++] = '_';
		  d[j++] = tolower(s[i]);
		}
	}

  d[j++] = '\0';
}

void to_java (char s[], char d[])
{
  int l = strlen (s);
  int i,j=0;

  for (i=0; i<l; i++)
	{
	  if (islower(s[i]))
		{
		  d[j++] = s[i];
		}
	  else if (s[i] == '_')
		{
		  d[j++] = toupper(s[++i]);
		}
	}
  d[j++] = '\0';
}

int main()
{
  char str[300], d[300];
  
  while(scanf("%s",str)!=EOF)
	 {
	   if (is_java_id(str))
		 {
		   to_cpp(str, d);
		   cout << d << endl;
		 }
	   else if(is_cpp_id(str))
		 {
		   to_java(str, d);
		   cout << d << endl;		   
		 }
	   else
		 {
		   cout << "Error!" << endl;
		 }
	 }
  return 0;
}
