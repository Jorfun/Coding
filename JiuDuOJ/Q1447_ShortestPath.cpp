/*
	copy from book
*/

//#include <stdio.h>
//
//int map[101][101];
//
//int main()
//{
//	int n, m;
//
//	while(scanf("%d%d", &n, &m) != EOF)
//	{
//		if(n == 0  &&  m == 0)  break;
//
//		for(int i=1; i<=n; i++)
//		{
//			for(int j=1; j<=n; j++)
//			{
//				map[i][j] = -1;
//			}
//
//			map[i][i] = 0;
//		}
//
//		while(m--)
//		{
//			int a, b, c;
//
//			scanf("%d%d%d", &a, &b, &c);
//			
//			map[a][b] = map[b][a] = c;
//
//		}
//
//		for(int k=1; k<=n; k++)
//		{
//			for(int i=1; i<=n; i++)
//			{
//				for(int j=1; j<=n; j++)
//				{
//					if(map[i][k] == -1  ||  map[k][j] == -1)  continue;
//
//					if(map[i][j] == -1  ||  map[i][j] > map[i][k] + map[k][j])
//					{
//						map[i][j] = map[i][k] + map[k][j];
//					}
//
//				}
//
//			}
//
//		}
//
//		printf("%d\n", map[1][n]);
//
//	}
//
//	return 0;
//
//}