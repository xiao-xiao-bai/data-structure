#include <stdlib.h>
#include <stdio.h>
typedef struct SqNode{
	int data;
	struct SqNode *next;
}SqNode,*SqSize;
int Push(SqSize &s,int e)
{
	SqSize p;
	p = (SqSize)malloc(sizeof(SqNode));
	if(!p)
	{
		return 0;
	}
	p -> data = e;
	p -> next = s;
	s = p;
}
int Pop(SqSize &s,int &e)
{
	SqSize p;
	p = s;
	if(s == NULL)
	{
		return 0;
	}
	e = p -> data;
	s = s -> next;
	free(p);
}
int main()
{
	SqSize s;
	int e,i;
	for(i = 0;i < 4;i ++)
	{
		scanf("%d",&e);
		Push(s,e);
	}
	printf("³öÕ»\n");
	for(i = 0;i < 4;i ++)
	{
		Pop(s,e);
		printf("%d\t",e);
	}
}
