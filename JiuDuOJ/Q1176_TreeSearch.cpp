/*
	idea: Use a array to store all node values, and use math formula to get the index in specific layer
*/


//#include <stdio.h>
//#include <math.h>
//
//int buf[1001];
//
//int main()
//{
//	int n, d;
//
//	while(scanf("%d", &n) != EOF)
//	{
//		for(int i=0; i<n; i++)
//		{
//			scanf("%d", &buf[i]);
//		}
//
//		scanf("%d", &d);
//
//		if(d <= 0)
//		{
//			printf("EMPTY\n");
//			continue;
//		}
//
//		int start = int(pow(2.0, d - 1)) - 1;
//		int end = start * 2;
//
//		if(start < n)
//		{
//
//			printf("%d", buf[start++]);
//
//			for(; start<=end && start<n; start++)
//			{	
//				printf(" %d", buf[start]);
//			}
//
//		}
//		else
//		{
//			printf("EMPTY");
//		}
//
//		printf("\n");
//
//	}
//
//	return 0;
//}