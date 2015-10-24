#include <iostream>
#include <cstdio>
#include <string>
#define gc getchar_unlocked

using namespace std;

long long int read_int() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  long long  int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}


int main()
	{
	long long int num_tests=read_int(),i;
	for (i=0;i<num_tests;i++)
		{
		long long int num,count=0,j,max;
		num=read_int();
        long long int profit[num+1];
        char ans[num+1],rply[num+1];
		scanf("%s\n",ans);
		scanf("%s\n",rply);
        for (j=0;j<=num;j++) profit[j]=read_int();
        for (j=0;j<num;j++)
            {
            if (ans[j]==rply[j]) count++;
            }
        max=profit[0];
		
		if (count==num) 
			{
			printf("%lld\n",profit[count]);
			continue;
			}		
	
        for (j=0;j<=count;j++)
            {
            if (max<profit[j])
                max=profit[j];
            }
        printf("%lld\n",max);
		
		}
	return 0;
	}
