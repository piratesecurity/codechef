#include <iostream>
#include <algorithm>
using namespace std;
int main()
	{
	int i,n,num_cases,sum,j,x,num_chains;
	cin >>num_cases;
	for (i=0;i<num_cases;i++)
		{
		sum=0;
		cin >> n;
		cin >> num_chains;
		int chains[num_chains],temp;
		for (j=0;j<num_chains;j++) cin >> chains[j];
		sort(chains,chains+num_chains);
		x=0;
		num_chains--;
		while (x<num_chains)
			{
				temp=(num_chains-x>chains[x])?chains[x]:num_chains-x;
				num_chains-=temp;
				x++;
				sum+=temp;
			}		
		cout <<sum<<"\n";
		}
	}
