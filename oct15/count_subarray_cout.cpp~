#include <iostream>
#include <cstdio>
#define gc getchar_unlocked
using namespace std;



int main()
    {
    long long int num_tests,j=0;
    scanf("%d",&num_tests);
	for (j=0;j<num_tests;j++)
        {
        long long int num;
        scanf("%d",&num);
        long long int arr[num],i=0,count=num,sneak=1;
        for (i=0;i<num;i++) scanf("%d",&arr[i]);
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
        printf("%lld\n",count);
        }

	return 0;
    }
