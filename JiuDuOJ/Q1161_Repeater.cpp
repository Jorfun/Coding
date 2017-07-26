/*
	code copied from user named lyf910919 in http://t.jobdu.com/thread-7884-1-1.html

	conclusion: The whole image is always composed of 9 parts(when n=3). Whatever the scale level is, 
	we get the final image from these 9 parts.
*/

//#include <stdio.h>
//
//char buf[3001][3001];
//char picture[3001][3001];
//char temp[6][6];
//int times;
//
//void draw(int n, int size)
//{
//    for (int i=1; i<=size; ++i)
//        for (int j=1; j<=size; ++j)
//            buf[i][j]=picture[i][j];
//
//    for (int i=1; i<=n; ++i)
//        for (int j=1; j<=n; ++j)
//        {
//            if (temp[i][j]==' ')
//            {
//                for (int a=1+size*(i-1); a<=size*i; ++a)
//                    for (int b=1+size*(j-1); b<=size*j; ++b)
//                         picture[a][b]=' ';
//            }
//            else
//            {
//                for (int a=1+size*(i-1); a<=size*i; ++a)
//                    for (int b=1+size*(j-1); b<=size*j; ++b)
//                         picture[a][b]=buf[a-size*(i-1)][b-size*(j-1)];
//            }
//        }
//}
//
//int main()
//{
//    int n,size;
//
//    while (scanf("%d", &n)!=EOF && n!=0)
//    {
//        for (int i=1; i<=n; ++i)		// store input template
//        {    
//			for (int j=1; j<=n; ++j)
//            {
//				scanf("%c",&temp[i][j]);
//				if (temp[i][j]=='\n') --j;
//            }
//        }
//
//        scanf("%d", &times);
//        size=n;
//
//        for (int i=1; i<=size; ++i)
//            for (int j=1; j<=size; ++j)
//                picture[i][j]=temp[i][j];
//
//        for (;times>1;--times, size*=n)
//        {
//            draw(n,size);
//        }
//         
//        for (int i=1; i<=size; ++i)
//        {
//            for (int j=1; j<=size; ++j)
//                printf("%c", picture[i][j]);
//
//            printf("\n");
//        }
//    }
//
//    return 0;
//}