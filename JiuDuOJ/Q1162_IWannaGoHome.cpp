//#include <stdio.h>
//#include <vector>
//
//using namespace std;
//
//struct Edge
//{
//	int next;
//	int t;
//};
//
//vector<Edge> road[610];
//int	dis[610];
//int leader[610];
//bool inSet[610];
//
//int main()
//{
//	int n;
//
//	while(scanf("%d", &n) != EOF  &&  n != 0)
//	{
//		for(int i=1; i<=n; i++)	road[i].clear();	//  forgot
//		
//		int m;
//
//		scanf("%d", &m);
//
//		for(int i=0; i<m; i++)
//		{
//			int a, b, t;
//
//			scanf("%d%d%d", &a, &b, &t);
//
//			Edge tmp;
//
//			tmp.t = t;
//
//			tmp.next = b;
//
//			road[a].push_back(tmp);
//
//			tmp.next = a;
//
//			road[b].push_back(tmp);
//
//		}
//
//		for(int i=1; i<=n; i++)
//		{
//			dis[i] = -1;
//			inSet[i] = false;
//			scanf("%d", &leader[i]);
//		}
//
//		for(int i=1; i<=n; i++)
//		{
//			if(leader[i] == 2)
//			{
//				for(int j=0; j<road[i].size(); j++)
//				{
//					if(leader[road[i][j].next] == 1)
//					{
//						road[i][j].t = 0;
//					}
//					
//				}
//
//			}
//
//		}
//
//		int newP = 1;
//		dis[newP] = 0;
//		inSet[newP] = true;
//
//		for(int i=1; i<n; i++)
//		{
//			for(int j=0; j<road[newP].size(); j++)
//			{
//				int next = road[newP][j].next;
//				int t = road[newP][j].t;
//				
//				if(inSet[next] == true)  continue;
//
//				if(t == 0)  continue;
//
//				if(dis[next] == -1  ||  dis[next] > dis[newP] + t)
//				{
//					dis[next] = dis[newP] + t;
//				}
//
//			}
//
//			int min = 5000000;
//
//			for(int j=1; j<=n; j++)		//  i in this loop mix with outer for loop i
//			{
//				if(inSet[j] == true)  continue;
//
//				if(dis[j] == -1)  continue;
//
//				if(min > dis[j])
//				{
//					min = dis[j];
//					newP = j;	//  forgot  we need to update newP
//				}
//
//			}
//
//			inSet[newP] = true;		//  forgot
//
//		}
//
//		if(dis[2] == -1)
//		{
//			printf("-1\n");
//		}
//		else
//		{
//			printf("%d\n", dis[2]);
//		}
//
//	}
//
//	return 0;
//
//}
