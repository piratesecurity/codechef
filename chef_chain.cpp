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
<<<<<<< HEAD
<<<<<<< HEAD
		int chains[num_chains];
=======
		int chains[num_chains],temp;
>>>>>>> f51b8c191c56d91548f80404fb1e03688f4c20a4
=======
		int chains[num_chains],temp;
>>>>>>> f51b8c191c56d91548f80404fb1e03688f4c20a4
		for (j=0;j<num_chains;j++) cin >> chains[j];
		sort(chains,chains+num_chains);
		x=0;
		num_chains--;
		while (x<num_chains)
			{
<<<<<<< HEAD
<<<<<<< HEAD
			while (chains[x]>0 && x<num_chains)
				{				
				chains[x]--;
				sum++;
				num_chains--;
				}
			x++;
=======
=======
>>>>>>> f51b8c191c56d91548f80404fb1e03688f4c20a4
				temp=(num_chains-x>chains[x])?chains[x]:num_chains-x;
				num_chains-=temp;
				x++;
				sum+=temp;
<<<<<<< HEAD
>>>>>>> f51b8c191c56d91548f80404fb1e03688f4c20a4
=======
>>>>>>> f51b8c191c56d91548f80404fb1e03688f4c20a4
			}		
		cout <<sum<<"\n";
		}
	}
