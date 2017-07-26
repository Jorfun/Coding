/*
	The difficulty of this question is sort. So we need to build a student struct to fit in this question,
	then overload operator <
*/

//#include <stdio.h>
//#include <string>
//#include <algorithm>
//#include <iostream>
//
//using namespace std;
//
//struct S
//{
//	string stuNum;
//	int grade;
//
//	bool operator < (const S &B) const
//	{
//		if(grade < B.grade)  return true;
//		else if(grade > B.grade)  return false;
//		else
//		{
//			if(stuNum > B.stuNum)  return true;
//			else  return false;
//		}
//
//	}
//
//}stu[1000];
//
//int size;
//int qualifiedNum;
//int questionPoints[11];
//
//int main()
//{
//	int n, m, g;
//
//	while(scanf("%d%d%d", &n, &m, &g) != EOF  &&  n != 0)
//	{
//		for(int i=1; i<=m; i++)
//		{
//			scanf("%d", &questionPoints[i]);
//		}
//
//		size = 0;
//		qualifiedNum = 0;
//
//		while(n--)
//		{
//			char tempNum[21];
//
//			scanf("%s", tempNum);
//
//			string stuNum = tempNum;
//
//			int totalSolved;
//
//			scanf("%d", &totalSolved);
//
//			int totalPoints = 0;
//
//			while(totalSolved--)
//			{
//				int questionSolved;
//
//				scanf("%d", &questionSolved);
//
//				totalPoints += questionPoints[questionSolved];
//
//			}
//
//			if(totalPoints >= g)
//			{
//				qualifiedNum++;
//			}
//
//			stu[size].stuNum = stuNum;
//			stu[size].grade = totalPoints;
//			size++;
//
//		}
//		
//		sort(stu, stu + size);
//
//		cout<<qualifiedNum<<endl;
//
//		for(int i=size-1; i>=0; i--)
//		{
//			if(stu[i].grade >= g)
//			cout<<stu[i].stuNum<<" "<<stu[i].grade<<endl;
//		}
//
//	}
//
//	return 0;
//
//}