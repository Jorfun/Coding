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
//		int sum = 0, j = 0;    //j��¼����ɨ��Ĵ���ͷ!!
//
//		for(int i=0; i<k; i++) //��ͷ��βɨ  
//		{  
//			sum += num[i];  
//
//			if(sum < 0)    //�Ӵ���С��0  
//			{  
//				sum=0;  
//				j=i+1;  
//			}  
//			else        //�Ӵ��ʹ��ڵ���0  
//			{  
//				if(sum > max)  //����֮ǰ�����  
//				{  
//					max=sum;  
//					first=j;  
//					last=i;  
//				}  
//
//			}  
//		}  
//
//		if(first == -1)   //��ȫ��Ϊ����  
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

