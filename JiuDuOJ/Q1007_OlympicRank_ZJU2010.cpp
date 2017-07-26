/*
	Get input and manipulate them. Then store them in self-constructed struct.
	Pick specified countries and sort them according to different cmp method.
	At last print out needed message of all specified countries in order.
*/

//#include <stdio.h>
//#include <algorithm>
//
//using namespace std;
//
//struct C
//{
//	int number;
//	int order;
//	int rank;
//	int rankMode;
//	double rankValue[5];
//
//}allCountry[200], rankCountry[200];
//
//int rankSize;
//
//int judge[5][5] = {
//					0, 0, 0, 0, 0,
//					0, 0, 1, 1, 1,
//					0, 0, 0, 1, 1,
//					0, 0, 0, 0, 1,
//					0, 0, 0, 0, 0
//				  };
//
//
//bool cmpGold(C a, C b)
//{
//	return a.rankValue[1] > b.rankValue[1];
//}
//
//bool cmpMedal(C a, C b)
//{
//	return a.rankValue[2] > b.rankValue[2];
//}
//
//bool cmpGoldPopulation(C a, C b)
//{
//	return a.rankValue[3] > b.rankValue[3];
//}
//
//bool cmpMedalPopulation(C a, C b)
//{
//	return a.rankValue[4] > b.rankValue[4];
//}
//
//bool cmpOrder(C a, C b)
//{
//	return a.order < b.order;
//}
//
//void update(int rankMode)
//{
//	int rank;
//
//	for(int i=0; i<rankSize; i++)
//	{
//		rank = i + 1;
//		
//		int temp = i;
//
//		while((temp - 1 >= 0) && (rankCountry[temp-1].rankValue[rankMode] == rankCountry[temp].rankValue[rankMode]))
//		{
//			rank--;
//			temp--;
//		}
//
//		if(rank == rankCountry[i].rank && judge[rankMode][rankCountry[i].rankMode] == 1)
//		{
//			rankCountry[i].rankMode = rankMode;
//		}
//		else if(rank < rankCountry[i].rank)
//		{
//			rankCountry[i].rank = rank;
//			rankCountry[i].rankMode = rankMode;
//		}
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
//		rankSize = 0;	// initialization
//
//		for(int i=0; i<n; i++)
//		{
//			allCountry[i].number = i;
//			allCountry[i].rank = 300;
//			allCountry[i].rankMode = -1;
//
//			double pop;
//
//			scanf("%lf%lf%lf", &allCountry[i].rankValue[1], &allCountry[i].rankValue[2], &pop);
//
//			allCountry[i].rankValue[3] = allCountry[i].rankValue[1] / pop;
//			allCountry[i].rankValue[4] = allCountry[i].rankValue[2] / pop;
//		}
//
//		int temp;
//
//		for(int i=0; i<m; i++)
//		{
//			scanf("%d", &temp);
//			
//			rankCountry[rankSize] = allCountry[temp];	
//			rankCountry[rankSize++].order = i;
//		}
//
//		sort(rankCountry, rankCountry + rankSize, cmpGold);
//
//		update(1);
//
//		sort(rankCountry, rankCountry + rankSize, cmpMedal);
//
//		update(2);
//
//		sort(rankCountry, rankCountry + rankSize, cmpGoldPopulation);
//
//		update(3);
//
//		sort(rankCountry, rankCountry + rankSize, cmpMedalPopulation);
//
//		update(4);
//
//		sort(rankCountry, rankCountry + rankSize, cmpOrder);
//
//		for(int i=0; i<rankSize; i++)
//		{
//			printf("%d:%d\n", rankCountry[i].rank, rankCountry[i].rankMode);
//		}
//
//		printf("\n");
//
//	}
//
//	return 0;
//}