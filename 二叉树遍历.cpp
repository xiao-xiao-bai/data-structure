#include <stdio.h>
#include <stdlib.h>
typedef struct BiTree{
	int data;
	struct BiTree *lchild,*rchild;
}BiTree;
typedef BiTree *SuTree;//������
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
 	printf("ǰ�������");
 	Qian(s);
 	printf("\n");
 	printf("�������: ");
 	Zhong(s);
 	printf("\n");
 	printf("�������: ");
 	Hou(s);
 	
 	
 }
