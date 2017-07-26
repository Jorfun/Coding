/*
	This question is same as PAT_A_1007
*/

//#include <stdio.h>
//
//int num[10001];
//
//int main()
//{
//	int k;
//
//	while(scanf("%d", &k) != EOF  &&  k != 0)
//	{
//		for(int i=0; i<k; i++)
//		{
//			scanf("%d", &num[i]);
//		}
//
//		int first = -1, last = -1, max = -1;  
//		int sum = 0, j = 0;    //j记录正在扫描的串的头!!
//
//		for(int i=0; i<k; i++) //从头向尾扫  
//		{  
//			sum += num[i];  
//
//			if(sum < 0)    //子串和小于0  
//			{  
//				sum=0;  
//				j=i+1;  
//			}  
//			else        //子串和大于等于0  
//			{  
//				if(sum > max)  //大于之前的最大  
//				{  
//					max=sum;  
//					first=j;  
//					last=i;  
//				}  
//
//			}  
//		}  
//
//		if(first == -1)   //数全部为负数  
//		{  
//			max=0;  
//			first=0;  
//			last=k-1;  
//		}  
//
//		printf("%d %d %d\n", max, num[first], num[last]);
//
//	}
//
//	return 0;
//}

