//#include <stdio.h>
//
//#define max 100001
//
//bool mark[max];
//int prime[max];
//int primeSize;
//
//void init()
//{
//	primeSize = 0;
//
//	for(int i=2; i<max; i++)
//	{
//		if(mark[i]) continue;
//
//		prime[primeSize++] = i;
//
//		if(i >= 1000) continue;
//
//		for(int j=i*i; j<max; j+=i)
//		{
//			mark[j] = true;
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
//	int n;
//
//	while(scanf("%d", &n) != EOF  &&  n != 0)
//	{
//		while(n--)
//		{
//			int	num;
//
//			scanf("%d", &num);
//
//			if(num == 1)
//			{
//				printf("1\n");
//				continue;
//			}
//
//			int ansPrime[30];
//			int ansSize = 0;
//			int ansNum[30];
//
//			for(int i=0; i<primeSize; i++)
//			{
//				if(num % prime[i] == 0)
//				{
//					ansPrime[ansSize] = prime[i];
//					ansNum[ansSize] = 0;
//
//					while(num % prime[i] == 0)
//					{
//						ansNum[ansSize]++;
//						num /= prime[i];
//					}
//
//					ansSize++;
//					if(num == 1)	break;
//
//				}
//
//			}
//
//			if(num != 1)
//			{
//				ansPrime[ansSize] = num;
//				ansNum[ansSize++] = 1;
//			}
//
//			int ans = 1;
//
//			for(int i=0; i<ansSize; i++)
//			{
//				ans *= (ansNum[i] + 1);
//			}
//			
//			printf("%d\n", ans);
//
//		}
//
//	}
//
//	return 0;
//}