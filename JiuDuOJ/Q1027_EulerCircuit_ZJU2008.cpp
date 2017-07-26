/*
	Euler circuit in a undirected graph.

	Necessary and sufficient condition: 1. The graph is connected.(Union-Find Sets)
										2. The graph doesn't contain odd degree vertex
*/


//#include <stdio.h>
//
//int tree[1001];
//int degree[1001];
//
//int findRoot(int x)
//{
//	if(tree[x] == -1)  return x;
//
//	int temp = findRoot(tree[x]);
//	tree[x] = temp;
//	return temp;
//}
//
//int main()
//{
//	int n;
//
//	while(scanf("%d", &n)  &&  n != 0)
//	{
//		for(int i=1; i<=n; i++)
//		{
//			tree[i] = -1;
//			degree[i] = 0;
//		}
//		
//		int m;
//
//		scanf("%d", &m);
//		
//		while(m--)
//		{
//			int a, b;
//			
//			scanf("%d%d", &a, &b);
//
//			degree[a]++;
//			degree[b]++;
//
//			a = findRoot(a);
//			b = findRoot(b);
//
//			if(a != b)
//			{
//				tree[a] = b;
//			}
//
//		}
//
//		bool degreeOdd = false;
//		int rootCount = 0;
//
//		for(int i=1; i<=n; i++)
//		{
//			if(degree[i] % 2 != 0)  
//			{
//				degreeOdd = true;
//				break;
//			}
//
//			if(tree[i] == -1)
//			{
//				rootCount++;
//			}
//			
//		}
//
//		if(degreeOdd == false && rootCount == 1)
//		{
//			printf("1\n");
//		}
//		else
//		{
//			printf("0\n");
//		}
//
//	}
//
//	return 0;
//
//}