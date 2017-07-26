/*
	Main idea: Merge sort
	
	Pay attention: 1. Can use sort() to sort numbers of two sequences.
					  Although it may exceed the time limit when there 
					  are lots of numbers. 
				   2. Vector can also be sorted.
				      
*/

//#include <stdio.h>
//
//int s[2000001];
//int s1[1000001];
//int s2[1000001];
//
//int main()
//{
//	int n;
//
//	while(scanf("%d", &n) != EOF)
//	{
//		for(int i=0; i<n; i++)
//		{
//			scanf("%d", &s1[i]);
//		}
//
//		int m;
//
//		scanf("%d", &m);
//
//		for(int i=0; i<m; i++)
//		{
//			scanf("%d", &s2[i]);
//		}
//
//		int idx1 = n - 1;
//		int idx2 = m - 1;
//		int idx = 0;
//
//		while(idx1>=0 && idx2>=0)
//		{
//			if(s1[idx1] > s2[idx2])
//			{
//				s[idx++] = s1[idx1];
//				idx1--;
//			}
//			else
//			{
//				s[idx++] = s2[idx2];
//				idx2--;
//			}
//			
//		}
//
//		if(idx1 >= 0)
//		{
//			while(idx1>=0)
//			{
//				s[idx++] = s1[idx1];
//				idx1--;
//			}
//
//		}
//		else
//		{
//			while(idx2>=0)
//			{
//				s[idx++] = s2[idx2];
//				idx2--;
//			}
//
//		}
//		
//		//printf("idx: %d\n", idx);
//
//		int temp = idx % 2;
//
//		//for(int i=0; i<idx; i++)
//		//{
//		//	printf("%d\n", s[i]);
//		//}
//
//		printf("%d\n", s[idx / 2]);
//
//	}
//
//	return 0;
//}