//#include <stdio.h>
//#include <algorithm>
//
//using namespace std;
//
//#define N 101
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
//}
//
//struct Edge
//{
//	int a, b;
//	int cost;
//
//	bool operator < (const Edge &B) const
//	{
//		return cost < B.cost;
//	}
//
//}edge[100];
//
//int main()
//{
//	int n, m;
//
//	while(scanf("%d%d", &n, &m) != EOF  &&  n != 0)
//	{
//		
//		int size = 0;
//
//		for(int i=1; i<=n; i++)
//		{
//			int a, b, cost;
//
//			scanf("%d%d%d", &a, &b, &cost);
//
//			edge[size].a = a;
//			edge[size].b = b;
//			edge[size].cost = cost;
//			size++;
//
//		}
//
//		sort(edge, edge + size);
//
//		for(int i=1; i<=m; i++)	Tree[i] = -1;
//
//		int ans = 0;
//
//		for(int i=0; i<size; i++)
//		{
//			int a = findRoot(edge[i].a);
//			int b = findRoot(edge[i].b);
//
//			if(a != b)
//			{
//				Tree[a] = b;
//				ans += edge[i].cost;
//			}
//
//		}
//
//		int count = 0;
//
//		for(int i=1; i<=m; i++)
//		{
//			if(Tree[i] == -1)  count++;
//		}
//
//		if(count == 1)
//		{
//			printf("%d\n", ans);
//		}
//		else
//		{
//			printf("?\n");
//		}
//
//	}
//
//	return 0;
//}