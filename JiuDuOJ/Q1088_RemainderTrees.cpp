//#include <stdio.h>
//
//int tree[10001];
//
//int main()
//{
//	int l, m, start, end, count;
//
//	while(scanf("%d%d", &l, &m) != EOF)
//	{
//		count = 0;
//		
//		for(int i=0; i<=l; i++)
//		{
//			tree[i] = 1;
//		}
//		
//		for(int i=0; i<m; i++)
//		{
//			scanf("%d%d", &start, &end);
//
//			for(int j=start; j<=end; j++)
//			{
//				tree[j] = 0;
//			}
//
//		}
//
//		for(int i=0; i<=l; i++)
//		{
//			if(tree[i] == 1)
//			{
//				count++;
//			}
//		}
//
//		printf("%d\n", count);
//
//	}
//
//	return 0;
//}