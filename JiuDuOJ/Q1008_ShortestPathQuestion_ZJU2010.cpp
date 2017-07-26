/*
	Need enhance memory
*/

//#include <stdio.h>
//#include <vector>
//
//using namespace std;
//
//struct E	// need a struct to store adjacent road information
//{
//	int next;
//	int distance;
//	int cost;
//};
//
//vector<E> edge[1001];	// build a vector for every city to store roads
//
//int Dis[1001];	// distance from start point to this city
//int cost[1001];		// cost from start point to this city
//bool mark[1001];	// if this city has been included in K set
//
//int main()
//{
//	int n, m;
//	int S, T;
//
//	while(scanf("%d%d", &n, &m) != EOF)
//	{
//		if(n == 0 && m == 0)  break;
//
//		for(int i=1; i<=n; i++)		// initialization
//		{
//			edge[i].clear();
//			Dis[i] = -1;
//			mark[i] = false;
//		}
//
//		while(m--)	// Get input
//		{
//			int a, b, c, cost;
//
//			scanf("%d%d%d%d", &a, &b, &c, &cost);
//
//			E tmp;
//
//			tmp.next = b;
//			tmp.distance = c;
//			tmp.cost = cost;
//
//			edge[a].push_back(tmp);
//
//			tmp.next = a;
//
//			edge[b].push_back(tmp);
//
//		}
//
//		scanf("%d%d", &S, &T);
//
//		Dis[S] = 0;
//		mark[S] = true;
//		int newP = S;
//
//		// Dijkstra
//		for(int i=1; i<n; i++)
//		{
//			// update information of all cities
//			for(int j=0; j<edge[newP].size(); j++)
//			{
//				int t = edge[newP][j].next;
//				int c = edge[newP][j].distance;
//				int co = edge[newP][j].cost;
//
//				// have been included
//				if(mark[t] == true)  continue;
//
//				// three conditions
//				if(Dis[t] == -1 || Dis[t] > Dis[newP] + c || ( Dis[t] == Dis[newP] + c && cost[t] > cost[newP] + co))
//				{
//					Dis[t] = Dis[newP] + c;
//					cost[t] = cost[newP] + co;
//				}
//
//			}
//
//			// choose a mininum
//
//			int min = 999999999;
//
//			for(int j=1; j<=n; j++)
//			{
//				if(mark[j] == true)  continue;
//				if(Dis[j] == -1)  continue;
//
//				if(Dis[j] < min)
//				{
//					min = Dis[j];
//					newP = j;
//				}
//
//			}
//
//			mark[newP] = true;
//	
//		}
//
//		printf("%d %d\n", Dis[T], cost[T]);	
//
//	}
//
//	return 0;
//}