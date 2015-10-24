#include <iostream>
#include <cstdio>
#define gc getchar_unlocked
using namespace std;

int read_int() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}

int main()
    {
    int num_tests,j=0;
    num_tests=read_int();
	for (j=0;j<num_tests;j++)
        {
        int num;
        num=read_int();
        int arr[num],i=0,count=num,sneak=1;
        for (i=0;i<num;i++) arr[i]=read_int();
        i=0;
        while (i<(num-1))
            {
            if (arr[i]<=arr[i+1])
                {
                sneak++;
                }
            else if (sneak!=1)
                {
                count=count+(sneak*(sneak-1)/2);
                sneak=1;
                }
            i++;
            }
        if (sneak!=1)
            {
            count=count+(sneak*(sneak-1)/2);
            }
        printf("%d\n",count);
        }

	return 0;
    }
