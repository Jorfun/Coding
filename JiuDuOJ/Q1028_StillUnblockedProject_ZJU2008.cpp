/*
	Minimum spanning tree
*/

//#include <stdio.h>
//#include <algorithm>
//
//using namespace std;
//
//#define N 100
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
//}edge[5000];
//
//int main()
//{
//	int n;
//
//	while(scanf("%d", &n) != EOF  &&  n != 0)
//	{
//		
//		int size = 0;
//
//		for(int i = 1; i <= n*(n-1)/2; i++)
//		{
//			int a, b, cost, state;
//
//			scanf("%d%d%d%d", &a, &b, &cost, &state);
//
//			edge[size].a = a;
//			edge[size].b = b;
//
//			if(state)
//			{
//				edge[size].cost = 0;
//			}
//			else
//			{
//				edge[size].cost = cost;
//			}
//
//			size++;
//
//		}
//
//		sort(edge, edge + size);
//
//		for(int i=1; i<=n; i++)	Tree[i] = -1;
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
//		printf("%d\n", ans);
//
//	}
//
//	return 0;
//}