#include <iostream>
#define MOD 1000000007

using namespace std;

long long fast_pow (long long b, long long n, long long m)
{
  long long r = 1;

  while (n)
	{
	  if (n&1)
		{
		  r *= b;
		  r %= m;
		}
	  n >>=1;
	  b *= b;
	  b %= m;
	}
  return r;
}

long long mmi(long long n, long long m)
{
  return fast_pow(n, m-2, m);  
}

int main()
{
  long long n, r, fact[1000001];
  long long i = 1;
  long long num, den, mmi_den, ans;
  
  fact[0] = 1;
  while (i<1000001)
	{
	  fact[i] = (fact[i-1]*i)%MOD;
	  i++;
	}

  cin >> n >> r;

  num = fact[n];
  den = (fact[r]*fact[n-r])%MOD;
  mmi_den = mmi(den, MOD);
  
  ans = (num*mmi_den)%MOD;  
  cout << ans << endl;
  return 0;
}


