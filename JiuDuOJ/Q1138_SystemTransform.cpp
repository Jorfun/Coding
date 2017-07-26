/*
	copy from user dazhipanpan in web http://t.jobdu.com/thread-7861-3-1.html
*/

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char s[31];
//
//    while (scanf("%s", s) != EOF)
//    {
//        int num[31], bin[100];
//        int i, j, len = 0, n = strlen(s);
//
//        for (i = 0; i < n; i++)
//        {
//            num[i] = s[i] - '0';
//        }
//
//        i = 0;
//		
//		while(i < n)
//		{
//			bin[len++] = num[n - 1] % 2;	// number % 2 = remainder
//			j = i;	//	j is used for division (stand for current digit of number)
//			int d = 0;	//	d stand for remainder of precedent % operation
//	
//			while(j < n)	//	do the division of number
//			{
//				d = num[j] + d * 10;
//				num[j] = d / 2;
//				d = d % 2;
//				j++;	// forgot
//			}
//	
//			if(num[i] == 0)		//	if this digit is zero then there is no need to calculate this digit
//			{
//				i++;
//			}
//	
//		}
//
//        for (i = len - 1; i >= 0; i--)
//        {
//            printf("%d", bin[i]);
//        }
//
//        printf("\n");
//
//    }
//
//    return 0;
//
//}