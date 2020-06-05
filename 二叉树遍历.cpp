#include <stdio.h>
#include <stdlib.h>
typedef struct BiTree{
	char data;
	struct BiTree *lchild,*rchild;
}BiTree;
typedef BiTree *SuTree;//定义树
void ChuangJian(SuTree &s)
{
	char ch;
	scanf("%c",&ch);
	if(ch == '#')
	{
		s = NULL;
	}
	else
	{
		s = (SuTree)malloc(sizeof(BiTree));
		if(!s)
		{
			return;
		}
		s -> data = ch;
		ChuangJian(s -> lchild);
		ChuangJian(s -> rchild);
	}
 }
 void Qian(SuTree s)
 {
 	if(s == NULL)
 	{
 		return;
	 }
	 else
	 {
	 	printf("%c ",s -> data);
	 	Qian(s -> lchild);
	 	Qian(s -> rchild);
	 }
 }
void Zhong(SuTree s)
 {
 	if(s == NULL)
 	{
 		return;
	 }
	 else
	 {
	 	Zhong(s -> lchild);
	 	printf("%c ",s -> data);
	 	Zhong(s -> rchild);
	 }
 }
void Hou(SuTree s)
 {
 	if(s == NULL)
 	{
 		return;
	 }
	 else
	 {
	 	Hou(s -> lchild);
	 	Hou(s -> rchild);
	 	printf("%c ",s -> data);
	 	
	 }
 }
 int main()
 {
 	SuTree s;
 	ChuangJian(s);
 	printf("前序遍历：");
 	Qian(s);
 	printf("\n");
 	printf("中序遍历: ");
 	Zhong(s);
 	printf("\n");
 	printf("后序遍历: ");
 	Hou(s);
 	
 	
 }
