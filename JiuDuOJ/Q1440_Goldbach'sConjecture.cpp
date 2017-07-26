//#include <stdio.h>
//
//#define max 35000
//
//bool ifPrime[max];
//
//void init()
//{
//	for(int i=1; i<max; i++)
//	{
//		ifPrime[i] = true;
//	}
//
//
//	for(int i=2; i<max; i++)
//	{
//		if(!ifPrime[i])
//		{
//			continue;
//		}
//		else
//		{
//			for(int j=i*i; j<max; j+=i)
//			{
//				ifPrime[j] = false;
//			}
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
//		int count = 0;
//
//		for(int i=2; i<=(n/2); i++)
//		{
//			if(ifPrime[i] && ifPrime[n-i])
//			{
//				count++;
//			}
//
//		}
//
//		printf("%d\n", count);
//
//	}
//
//	return 0;
//}