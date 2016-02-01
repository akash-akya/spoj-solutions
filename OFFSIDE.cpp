#include <iostream>
using namespace std;

int main()
{
  int attack[11], defend[11];
  int attack_count, defend_count;
  int nearest_attacker, near_defender_count;

  cin >> attack_count >> defend_count;
  while (attack_count!=0 || defend_count!=0)
	{
	  for (int i=0; i < attack_count; i++)
		cin >> attack[i];

	  for (int i=0; i < defend_count; i++)
		cin >> defend[i];

	  nearest_attacker = attack[0];
	  for (int i=1; i < attack_count; i++)
		if (attack[i] < nearest_attacker)
		  nearest_attacker = attack[i];

	  near_defender_count = 0;
	  for (int i=0; i < defend_count; i++)
		if (defend[i] <= nearest_attacker)
		  near_defender_count++;

	  // cout << "Nearest attacker - " << nearest_attacker << endl;
	  // cout << "Nearest defender count - " << near_defender_count << endl;
	  
	  if(near_defender_count < 2)
		cout << "Y" << endl;
	  else
		cout << "N" << endl;

	  cin >> attack_count >> defend_count;	  
	}
  
  return 0;
}
