/*
	example in book
*/

//#include <stdio.h>
//#include <string.h>
//
//struct Node
//{
//	Node *left;
//	Node *right;
//	int c;
//
//}tree[110];
//
//int loc;
//
//Node *create()
//{
//	tree[loc].left = tree[loc].right = NULL;
//	return &tree[loc++];
//
//}
//
//char str1[25], str2[25];
//
//int size1, size2;
//char *str;
//int *size;
//
//void postOrder(Node *T)
//{
//	if(T->left != NULL)	postOrder(T->left);
//
//	if(T->right != NULL) postOrder(T->right);
//
//	str[(*size)++] = T->c + '0';
//}
//
//void inOrder(Node *T)
//{
//	if(T->left != NULL)	inOrder(T->left);
//
//	str[(*size)++] = T->c + '0';
//
//	if(T->right != NULL) inOrder(T->right);
//}
//
//Node *insert(Node *T, int x)
//{
//	if(T == NULL)
//	{
//		T = create();
//		T->c = x;
//		return T;
//	}
//	else if(x < T->c)
//	{
//		T->left = insert(T->left, x);
//	}
//	else if(x > T->c)
//	{
//		T->right = insert(T->right, x);
//	}
//
//	return T;
//
//}
//
//int main()
//{
//	int n;
//	char tmp[12];
//
//	while(scanf("%d", &n) != EOF && n != 0)
//	{
//		loc = 0;
//		Node *T = NULL;
//
//		scanf("%s", tmp);
//
//		for(int i=0; tmp[i] != 0; i++)
//		{
//			T = insert(T, tmp[i] - '0');
//		}
//
//		size1 = 0;
//		str = str1;
//		size = &size1;
//
//		postOrder(T);
//		inOrder(T);
//
//		str1[size1] = 0;
//
//		while(n-- != 0)
//		{
//			scanf("%s", tmp);
//
//			Node *T2 = NULL;
//
//			for(int i=0; tmp[i] != 0; i++)
//			{
//				T2 = insert(T2, tmp[i] - '0');
//			}
//
//			size2 = 0;
//			str = str2;
//			size = &size2;
//
//			postOrder(T2);
//			inOrder(T2);
//
//			str2[size2] = 0;
//
//			puts(strcmp(str1, str2) == 0 ? "YES" : "NO");
//		}
//	}
//
//	return 0;
//
//}