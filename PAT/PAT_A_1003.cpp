/*
	At first I don't know how to calculate the number of shortest paths. Then I read a blog and find I can use DFS to
	find how many shortest paths after the program finishing calculating the length of shortest path by Dijkstra. The 
	codes of dijkstra and DFS are got from my reference book.
	Also be careful to special situation( c1 = c2 ) 
*/

//#include <stdio.h>
//#include <vector>
//
//using namespace std;
//
//#define INF 0x7fffffff	//  forgot
//
//struct E
//{
//	int next;
//	int c;
//};
//
//vector<E> edge[501];
//int Dis[501];
//int teams[501];
//bool mark[501];
//
//int count = 0;
//int totalTeams = 0;
//int c1, c2;
//
//void DFS(int currentCity, int distance, int currentTeams)
//{
//	if(distance > Dis[c2])
//	{
//		return;
//	}
//
//	for(int i=0; i<edge[currentCity].size(); i++)
//	{
//		
//		int next = edge[currentCity][i].next;
//		int c = edge[currentCity][i].c;
//
//		if(mark[next] == true)  continue;
//
//		if(next == c2 && Dis[c2] == distance + c)
//		{
//			count++;
//
//			if(totalTeams < currentTeams + teams[next])
//			{
//				totalTeams = currentTeams + teams[next];
//			}
//			
//			return;
//		}
//		else
//		{
//			mark[next] = true;
//			DFS(next, distance + c, currentTeams + teams[next]);
//			mark[next] = false;
//		}
//
//	}
//}
//
//
//int main()
//{
//	int n, m;
//
//	while(scanf("%d%d%d%d", &n, &m, &c1, &c2) != EOF)
//	{
//
//		for(int i=0; i<n; i++)
//		{
//			scanf("%d", &teams[i]);
//		}
//
//		for(int i=0; i<n; i++)
//		{
//			edge[i].clear();
//		}
//
//		while(m--)
//		{
//			int a, b, c;
//
//			scanf("%d%d%d", &a, &b ,&c);
//
//			E tmp;
//
//			tmp.c = c;
//			tmp.next = b;
//			edge[a].push_back(tmp);
//			tmp.next = a;
//			edge[b].push_back(tmp);
//
//		}
//
//		if(c1 == c2)
//		{
//			printf("%d %d\n", 1, teams[c1]);
//		}
//		else
//		{
//
//			// initialization
//
//			for(int i=0; i<n; i++)
//			{
//				Dis[i] = -1;
//				mark[i] = false;
//			}
//			
//			// Dijkstra
//
//			Dis[c1] = 0;
//			mark[c1] = true;
//
//			int newP = c1;
//
//			for(int i=1; i<n; i++)
//			{
//				for(int j=0; j<edge[newP].size(); j++)
//				{
//					int next = edge[newP][j].next;
//					int c = edge[newP][j].c;
//
//					if(mark[next] == true)  continue;
//
//					if(Dis[next] == -1  ||  Dis[next] > Dis[newP] + c)	//  forgot
//					{
//						Dis[next] = Dis[newP] + c;
//					}
//
//				}	// miss a bracket
//
//				int min = INF;
//
//				for(int j=0; j<n; j++)
//				{
//					if(mark[j] == true)  continue;
//					if(Dis[j] == -1)  continue;
//
//					if(Dis[j] < min)
//					{
//						min = Dis[j];
//						newP = j;
//					}
//
//				}
//
//				mark[newP] = true;
//
//			}
//
//			for(int i=0; i<n; i++)
//			{
//				mark[i] = false;
//			}
//
//			mark[c1] = true;
//			count = 0;
//			totalTeams = 0;
//
//			DFS(c1 , Dis[c1], teams[c1]);
//
//			printf("%d %d\n", count, totalTeams);
//
//		}
//
//	}
//
//	return 0;
//}