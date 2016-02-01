#include <iostream>
using namespace std;

bool get_op (const string &e, int s, string &res)
{
  int i=s;
  bool f = false;
  while (i<(int)e.length())
	{
	  if (e[i]==' ')
		  break;

	  if (isalpha(e[i]))
		  f = true;
	  i++;	  
	}

  res =  e.substr(s, i-s);
  return f;
}

int consume_space(const string &expr, int i)
{
  while(expr[i]==' ' || expr[i]=='+' || expr[i]=='=')	i++;
  return i;
}

int main()
{
  string expr, op1, op2, res;
  char con[2];
  bool f[3] = {false, false,false };
  int tc, i, t;
  
  getline(cin, expr);
  tc = stoi(expr);
  
  while (tc--)
	{
	  i=0;
	  
	  cin.getline(con, 2);
	  getline(cin, expr);
	  
	  f[0] = get_op(expr, 0, op1);
	  i = consume_space(expr, i+op1.length());

	  f[1] = get_op(expr, i, op2);
	  i = consume_space(expr, i+op2.length());

	  f[2] = get_op(expr, i, res);

	  
	  if (f[0])
		{
		  t = stoi(res)-stoi(op2);
		  cout << t << " + " << op2 << " = " << res << endl; 
		}
	  else if (f[1])
		{
		  t = stoi(res)-stoi(op1);
		  cout << op1 << " + " << t << " = " << res << endl; 
		}
	  else if (f[2])
		{
		  t = stoi(op2)+stoi(op1);
		  cout << op1 << " + " << op2 << " = " << t << endl; 
		}
	  
	}
  
  return 0;
}
