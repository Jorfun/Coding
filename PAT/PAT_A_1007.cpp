/*
	copy from xyzchenzd in web http://blog.csdn.net/xyzchenzd/article/details/25059203

	This question is not as difficult as I thought. At the first, I thought this question is about DP. But
	I could't get a suitable state from the question, so I need to try other ways. Then at some moment, I 
	got quite close to the final answer, but I give in. Next time, I should spend more time thinking with 
	my own head. Today's experience is a pity.
*/

//#include <stdio.h>
//
//int num[10001];
//
//int main()
//{
//	int k;
//
//	while(scanf("%d", &k) != EOF)
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

