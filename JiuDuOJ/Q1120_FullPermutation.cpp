//#include <stdio.h>
//#include <string.h>
//
//char ans[7];
//char input[7];
//bool mark[7];
//int size;
//
//void DFS(int num)
//{
//	
//	if(num == size)		//  marke sure your boundary condition is right
//	{
//		ans[num] = '\0';	//  avoid unexpected answer
//
//		printf("%s\n", ans);
//
//		// This for loop will cause time limit exceed!
//		//for(int i=0; i<size; i++)
//		//{
//		//	printf("%c", ans[i]);
//		//}
//
//		//printf("\n");
//
//		return;
//	}
//
//	for(int i=0; i<size; i++)
//	{
//		if(mark[i] == false)
//		{
//			mark[i] = true;
//			ans[num] = input[i];
//			DFS(num + 1);
//			mark[i] = false;
//		}
//
//	}
//
//}
//
//
//int main()
//{
//	while(scanf("%s", input) != EOF)
//	{
//		size = strlen(input);
//
//		for(int i=0; i<size; i++)
//		{
//			mark[i] = false;
//		}
//
//		DFS(0);
//
//		printf("\n");
//	}
//
//	return 0;
//}