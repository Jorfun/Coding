//#include <stdio.h>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//vector<int> edge[501];
//queue<int> Q;
//int inDegree[501];
//bool inSet[501];
//
//int main()
//{
//	int n, m;
//
//	while(scanf("%d%d", &n, &m) != EOF)
//	{
//		int a, b;
//		
//		for(int i=1; i<=n; i++)
//		{
//			edge[i].clear();
//			inDegree[i] = 0;
//			inSet[i] = false;
//		}
//
//		for(int i=0; i<m; i++)
//		{
//			scanf("%d%d", &a, &b);
//
//			edge[a].push_back(b);
//			inDegree[b]++;
//		}
//
//		while(!Q.empty())  Q.pop();
//
//		for(int i=1; i<=n; i++)
//		{
//			if(inDegree[i] == 0)  
//			{
//				Q.push(i);
//				break;
//			}
//		}
//
//		int cnt = 0;
//
//		while(!Q.empty())		//  forgot central part
//		{
//			int nowP = Q.front();
//
//		    if(cnt == 0)
//			{
//				printf("%d", nowP);
//			}
//			else
//			{
//				printf(" %d", nowP);
//			}
//
//			inSet[nowP] = true;
//			Q.pop();
//			cnt++;
//
//			for(int i=0; i<edge[nowP].size(); i++)
//			{
//				inDegree[edge[nowP][i]]--;
//			}
//
//			for(int i=1; i<=n; i++)
//			{
//				if(inSet[i] == false  &&  inDegree[i] == 0)
//				{
//					Q.push(i);
//					break;
//				}
//			}
//
//		}
//
//		printf("\n");
//
//	}
//
//	return 0;
//}