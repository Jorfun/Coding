//#include <stdio.h>
//
//#define max 120000		// no ; after statement		good habit
//
//bool ifPrime[max];
//int	prime[max];
//int primeSize;
//
//void init()
//{
//	long long i, j;		//!!!!!!!!!! very important !!!!!!!!!!
//
//	for(i=2; i<max; i++)
//	{
//		ifPrime[i] = true;
//	}
//
//	primeSize = 0;
//
//	for(i=2; i<max; i++)
//	{
//		if(!ifPrime[i])	continue;
//
//		prime[primeSize++] = i;
//
//		if(primeSize == 10000)	break;		// save run time
//
//		for(j=i*i; j<max; j+=i)		// when second expression in for statement is "j=max", the compiler won't find this infinite loop
//		{
//			ifPrime[j] = false;
//		}
//
//	}
//
//}
//
//int main()
//{
//	init();
//
//	int k;
//	
//	while(scanf("%d", &k) != EOF)
//	{
//
//		printf("%d\n", prime[k - 1]);
//
//	}
//
//	return 0;
//}