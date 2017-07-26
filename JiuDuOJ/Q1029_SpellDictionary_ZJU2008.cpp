/*
	New usage of map.
	string type make coding more convenient.

	When need both of scanf() and gets(), pay attention to the line feed.(use getchar() to handle)

*/

//#include <stdio.h>
//#include <string>
//#include <map>
//#include <iostream>
//
//using namespace std;
//
//map<string, string> dic;
//
//int main()
//{	
//	char input[120];
//
//	while(gets(input))
//	{
//		string temp = input;
//
//		if(temp == "@END@")  break;
//
//		int spellStart, spellEnd;
//
//		spellStart = temp.find('[', 0);
//		spellEnd = temp.find(']', 0);
//
//		string spell, function;
//
//		spell = temp.substr(spellStart + 1, spellEnd - 1);
//		function = temp.substr(spellEnd + 2);	// Can not indicate charactor number
//
//		//cout<<"spell:"<<spell<<"  function:"<<function<<endl;
//
//		dic[spell] = function;
//		dic[function] = spell;
//
//	}
//
//	int n;
//
//	scanf("%d", &n);
//
//	getchar();
//
//	while(n--)
//	{
//		gets(input);
//
//		string temp = input;
//
//		if(temp.find('[', 0) != string::npos)	// when can't find this charactor
//		{
//			temp = temp.substr(1, temp.size() - 2);
//		}
//
//		if(dic.find(temp) != dic.end())
//		{
//			cout<<dic[temp]<<endl;
//		}
//		else
//		{
//			cout<<"what?"<<endl;
//		}
//
//	}
//
//	return 0;
//}