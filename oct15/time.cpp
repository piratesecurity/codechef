#include <iostream>
#include <cstdio>
#include <cmath>

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
	long long int num_tests,k;
	num_tests=read_int();
	for (k=0;k<num_tests;k++)
		{
		float angle,cal_angle;
		scanf("%f",&angle);
		int i,j;
		for (i=0;i<12;i++)
			{
			for (j=0;j<60;j++)
				{
				cal_angle=abs((1/2.0)*(60*i-11*j));
				if (cal_angle>180.0) cal_angle=360-cal_angle;
				if (abs(angle-cal_angle)<(1/120.0))
					{
					if (i<10)
						printf("0%d:",i);
					else 
						printf("%d:",i);
					if (j<10)
						printf("0%d\n",j);
					else
						printf("%d\n",j);

					}		
				}
			}
		}
	
	return 0;
	}

