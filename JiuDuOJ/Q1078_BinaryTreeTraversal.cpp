/*
	example in book
*/


//#include <stdio.h>
//#include <string.h>
//
//struct Node
//{
//
//	Node *left;
//	Node *right;
//	char c;
//
//}tree[50];
//
//int loc;
//
//Node *create()
//{
//	tree[loc].left = tree[loc].right = NULL;
//	return &tree[loc++];
//}
//
//char str1[30], str2[30];
//
//void postOrder(Node *T)
//{
//	if(T->left != NULL)	postOrder(T->left);
//
//	if(T->right != NULL) postOrder(T->right);
//
//	printf("%c", T->c);
//
//}
//
//Node *build(int s1, int e1, int s2, int e2)
//{
//	Node *root = create();
//
//	root->c = str1[s1];
//
//	int rootidx;
//
//	for(int i=s2; i<=e2; i++)
//	{
//		if(str2[i] == str1[s1])
//		{
//			rootidx = i;
//			break;
//		}
//
//	}
//
//	if(rootidx != s2)
//	{
//		root->left = build(s1 + 1, s1 + (rootidx - s2), s2, rootidx - 1);
//	}
//
//	if(rootidx != e2)
//	{
//		root->right = build(s1 + (rootidx - s2) + 1, e1, rootidx + 1, e2);
//	}
//
//	return root;
//
//}
//
//int main()
//{
//	while(scanf("%s", str1) != EOF)
//	{
//		scanf("%s", str2);
//
//		loc = 0;
//
//		int l1 = strlen(str1);
//		int l2 = strlen(str2);
//
//		Node *T = build(0, l1 - 1, 0, l2 - 1);
//
//		postOrder(T);
//
//		printf("\n");
//
//	}
//
//	return 0;
//}