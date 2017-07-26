/*
	1. initialization should put in correct position (int size = 0;)
	2. make clear vertex number(#define N 27)
	3. when write for loop statement, be careful to boundaries
*/

//#include <stdio.h>
//#include <algorithm>
//
//using namespace std;
//
//#define N 27
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
//}edge[80];
//
//int main()
//{
//	int n;
//
//	while(scanf("%d", &n) != EOF  &&  n != 0)
//	{
//		int size = 0;
//
//		for(int i=1; i<n; i++)
//		{
//			char startC[2], endC[2];
//			int startN, endN;
//			int roadNum, cost;
//
//			scanf("%s", startC);
//			startN = startC[0] - 'A' + 1;
//
//			scanf("%d", &roadNum);
//
//			for(int j=1; j<=roadNum; j++)
//			{
//				scanf("%s", endC);
//				endN = endC[0] - 'A' + 1;
//
//				scanf("%d", &cost);
//
//				edge[size].a = startN;
//				edge[size].b = endN;
//				edge[size].cost = cost;
//				
//				//printf("size:  %d  cost:  %d\n", size, cost);
//
//				size++;
//			}
//
//		}
//
//		sort(edge, edge + size);
//
//		for(int i=1; i<N; i++)  Tree[i] = -1;
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
//				//printf("ans:  %d  edgeCost:  %d\n", ans, edge[i].cost);
//			}
//
//		}
//
//		printf("%d\n", ans);		
//
//	}
//
//}