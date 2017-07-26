/*
	Build a student struct and overload < operator
*/


//#include <stdio.h>
//#include <algorithm>
//#include <string.h>
//
//using namespace std;
//
//int mode;
//
//struct S
//{
//	char number[7];
//	char name[9];
//	int grade;
//
//	bool operator < (const S &b) const		//forgot(the whole function)
//	{
//		int tmp;
//
//		switch(mode)
//		{
//			case 1:	tmp = strcmp(number, b.number);
//					return tmp < 0;
//					break;
//
//			case 2: tmp = strcmp(name, b.name);
//					
//					if(tmp != 0)
//					{
//						return tmp < 0;
//					}
//					else
//					{
//						tmp = strcmp(number, b.number);
//						return tmp < 0;
//					}
//					break;
//			
//			case 3:	if(grade != b.grade)
//					{
//						return grade < b.grade;
//					}
//					else
//					{
//						tmp = strcmp(number, b.number);
//						return tmp < 0;
//					}
//
//		}
//
//		return 0;
//	}
//
//}students[100000];
//
//
//int main()
//{
//	int count;
//	int caseNum = 1;;
//
//	while(scanf("%d", &count) != EOF)
//	{
//		if(count == 0)
//		{
//			break;
//		}
//		
//		scanf("%d", &mode);
//
//		for(int i=0; i<count; i++)
//		{
//			scanf("%s%s%d",students[i].number, students[i].name, &students[i].grade);
//		}
//
//		sort(students, students + count);
//
//		printf("%s%d%s\n","Case ", caseNum, ":");
//		caseNum++;
//
//		for(int i=0; i<count; i++)
//		{
//			printf("%s %s %d\n", students[i].number, students[i].name, students[i].grade);
//		}
//
//	}
//
//	return 0;
//}