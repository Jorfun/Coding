/*
	1. bool type default value is false
	2. 素数筛法（素数只能被自身和1整除的大于1的正整数）
*/

//#include <stdio.h>
//
//bool mark[100001];
//int prime[100001];
//int primeSize;
//
//void init()
//{
//	primeSize = 0;
//
//	for(int i=2; i<=100000; i++)
//	{
//		if(mark[i] == true)  continue;
//
//		prime[primeSize++] = i;
//
//		if(i >= 1000)  continue;
//
//		for(int j=i*i; j<100000; j+=i)
//		{
//			mark[j] = true;
//		}
//
//	}
//}
//
//int main()
//{
//	init();
//
//	int n;
//
//	scanf("%d", &n);
//
//	printf("%d=", n); 
//
//	if(n==1)  
//	{
//		printf("1\n");
//		return 0;
//	}
//
//	int ansPrime[30], ansNum[30];
//	int ansSize = 0;
//
//	for(int i=0; i<primeSize; i++)
//	{
//		if(n % prime[i] == 0)
//		{
//			ansPrime[ansSize] = prime[i];
//			ansNum[ansSize] = 0;
//
//			while(n % prime[i] == 0)
//			{
//				ansNum[ansSize]++;
//				n /= prime[i];
//			}
//
//			ansSize++;
//
//			if(n == 1)  break;
//
//		}
//
//	}
//
//	if(n != 1)
//	{
//		ansPrime[ansSize] = n;
//		ansNum[ansSize++] = 1;
//	}
//
//	printf("%d", ansPrime[0]);
//
//	if(ansNum[0] > 1)  printf("^%d", ansNum[0]);
//
//	for(int i=1; i<ansSize; i++)
//	{
//		printf("*%d", ansPrime[i]);
//
//		if(ansNum[i] > 1)  printf("^%d", ansNum[i]);
//	}
//
//	printf("\n");
//
//	return 0;
//
//}


