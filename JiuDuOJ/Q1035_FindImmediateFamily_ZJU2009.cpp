/*
	First we need to build the tree according to the input. Then traverse this tree from one node to another
	( then reverse ) by recursion. If we find target node in one of the traversal then print corresponding
	answer and continue.

	Pay attention: 1. gp[] = "grandparent";
				   2. ++ operator may cause unexpected error in the program
*/


//#include <stdio.h>
//
//int ansDiff;
//
//char p[] = "parent", gp[] = "grandparent";
//char c[] = "child", gc[] = "grandchild";
//
//struct N
//{
//	int parent1, parent2;
//
//}node[27];
//
//void init()
//{
//	ansDiff = -1;
//
//	for(int i=0; i<27; i++)
//	{
//		node[i].parent1 = -1;
//		node[i].parent2 = -1;
//	}
//}
//
//void findParent(int current, int target, int diff)
//{
//	//printf("current: %d   target: %d   diff: %d   ansDiff: %d\n", current, target, diff, ansDiff);
//	
//	if(node[current].parent1 == target || node[current].parent2 == target)
//	{
//		ansDiff = diff;
//		return;
//	}
//	else
//	{
//		if(node[current].parent1 != -1)
//		{
//			findParent(node[current].parent1, target, diff + 1);	//  use less ++ operator, use more + 1 instead
//		}
//
//		if(node[current].parent2 != -1)
//		{
//			findParent(node[current].parent2, target, diff + 1);
//		}
//
//	}	
//}
//
//void printAnswer(bool ifChild)
//{
//
//	if(ifChild)
//	{
//		if(ansDiff == 1)
//		{
//			printf("%s\n", c);
//		}
//		else if(ansDiff == 2)
//		{
//			printf("%s\n", gc);
//		}
//		else
//		{
//			int count = ansDiff - 2;
//
//			for(int i=0; i<count; i++)
//			{
//				printf("great-");
//			}
//
//			printf("%s\n", gc);
//		}
//
//	}
//	else
//	{
//		if(ansDiff == 1)
//		{
//			printf("%s\n", p);
//		}
//		else if(ansDiff == 2)
//		{
//			printf("%s\n", gp);
//		}
//		else
//		{
//			int count = ansDiff - 2;
//
//			for(int i=0; i<count; i++)
//			{
//				printf("great-");
//			}
//
//			printf("%s\n", gp);
//		}
//
//	}
//
//}
//
//int main()
//{
//	int n, m;
//
//	while(scanf("%d%d", &n, &m) != EOF)
//	{
//		if(n == 0 && m == 0)  break;
//
//		init();
//
//		char relation[4];
//		int idx;
//
//		for(int i=0; i<n; i++)
//		{
//			scanf("%s", relation);
//
//			idx = relation[0] - 'A';
//
//			if(relation[1] != '-')
//			{
//				node[idx].parent1 = relation[1] - 'A';
//			}
//
//			if(relation[2] != '-')
//			{
//				node[idx].parent2 = relation[2] - 'A';
//			}
//			
//		}
//
//		char question[3];
//
//		int node1, node2;
//
//		while(m--)
//		{
//			ansDiff = -1;
//			
//			scanf("%s", question);
//
//			node1 = question[0] - 'A';
//			node2 = question[1] - 'A';
//
//			findParent(node1, node2, 1);
//
//			//printf("AnsDiff: %d\n", ansDiff);
//
//			if(ansDiff != -1)
//			{
//				printAnswer(true);
//				continue;
//			}
//
//			findParent(node2, node1, 1);
//
//			//printf("AnsDiff: %d\n", ansDiff);
//
//			if(ansDiff != -1)
//			{
//				printAnswer(false);
//				continue;
//			}
//
//			printf("-\n");
//	
//		}
//
//	}
//
//	return 0;
//}