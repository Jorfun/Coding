/*
	First store input into structure of a tree, then use DFS to count how many leaves in every level(by indegree of all nodes).
*/

//#include <stdio.h>
//#include <vector>
//
//using namespace std;
//
//struct N
//{
//	vector<int> child;
//
//}node[100];
//
//int inDegree[100];
//int ans[100];
//int levelMax;
//
//void DFS(int nodeValue, int level)
//{
//	levelMax = (level > levelMax) ? level : levelMax;
//	N now = node[nodeValue];
//
//	for(int i=0; i<now.child.size(); i++)
//	{
//		int childValue = now.child[i];
//		
//		if(inDegree[childValue] == 0)
//		{
//			ans[level]++;
//		}
//
//		DFS(childValue, level + 1);
//
//	}
//
//}
//
//
//int main()
//{
//	int n, m;
//
//	while(scanf("%d%d", &n, &m) != EOF)
//	{
//		for(int i=0; i<100; i++)
//		{
//			node[i].child.clear();
//			inDegree[i] = 0;
//			ans[i] = 0;
//		}
//
//		levelMax = 1;
//
//		while(m--)
//		{
//			char nonLeaf[3];
//
//			scanf("%s", nonLeaf);
//				
//			int nonLeafValue = (nonLeaf[0] - '0') * 10 + (nonLeaf[1] - '0');
//
//			int childNum;
//
//			scanf("%d", &childNum);
//
//			while(childNum--)
//			{
//				char child[3];
//
//				scanf("%s", child);
//
//				int childValue = (child[0] - '0') * 10 + (child[1] - '0');
//
//				node[nonLeafValue].child.push_back(childValue);
//				inDegree[nonLeafValue]++;
//
//			}
//
//		}
//
//		if(inDegree[1] == 0)
//		{
//			ans[1] = 1;
//		}
//		else
//		{
//			ans[1] = 0;
//			DFS(1, 2);
//		}	
//
//		//printf("%d\n", levelMax);
//
//		printf("%d", ans[1]);
//
//		for(int i=2; i<levelMax; i++)
//		{
//			printf(" %d", ans[i]);
//		}
//
//		printf("\n");
//
//	}
//
//	return 0;
//}