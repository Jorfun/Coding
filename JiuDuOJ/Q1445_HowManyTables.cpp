//#include <stdio.h>
//
//#define N 1001
//
//int Tree[N];
//
//int findRoot(int x)
//{
//	if(Tree[x] == -1)  return x;
//	
//	int temp = findRoot(Tree[x]);
//	Tree[x] = temp;
//	return temp;
//
//}
//
//int main()
//{
//	int t;
//
//	scanf("%d", &t);
//
//	while(t--)
//	{	
//		int n, m;
//
//		scanf("%d%d", &n, &m);
//
//		for(int i=1; i<=n; i++)  Tree[i] = -1;
//
//		int a, b;
//
//		for(int i=0; i<m; i++)
//		{
//			scanf("%d%d", &a, &b);
//
//			a = findRoot(a);
//			b = findRoot(b);
//
//			if(a != b)
//			{
//				Tree[a] = b;
//			}
//
//		}
//
//		int ans = 0;
//
//		for(int i=1; i<=n; i++)
//		{
//			if(Tree[i] == -1)  ans++;
//		}
//
//		printf("%d\n", ans);
//
//	}
//
//}