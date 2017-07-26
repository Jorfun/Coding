/*
	This question's meaning is hard to understand.

	Codes are copied from ¡ÚÓÆÓÆÔÆ¡Û in web http://ac.jobdu.com/problem.php?pid=1031
*/

//#include<stdio.h>
//#include<string.h>
//
//int a[505],b[505];
//bool c[130000];
//
//int main()
//{
//    int n;
//
//    while(scanf("%d",&n) && n != 0)
//    {
//        memset(c,0,sizeof(c));
//
//        for(int i=0;i<n;i++)  scanf("%d",&a[i]);
//
//		int temp;
//
//        for(int i=0;i<n;i++)
//        {
//            
//            temp=a[i];
//
//            if(!c[temp])
//            {
//                while(temp != 1)
//                {
//                    if(temp % 2 != 0)
//                    {
//                        temp=3*temp+1;
//                        temp/=2;
//                        c[temp]=1;
//                    }
//                    else
//                    {
//                        temp/=2;
//                        c[temp]=1;
//                    }
//                }
//            }
//        }
//
//		int ansCount = 0;
//
//        for(int i=0; i<n; i++)
//        {
//            if(!c[a[i]])  b[ansCount++]=a[i];
//        }
//
//		// Output question's answer
//        printf("%d",b[ansCount - 1]);
//        for(int i=ansCount-2; i>=0; i--)  printf(" %d",b[i]);
//        printf("\n");    
//    }
//
//    return 0;
//}