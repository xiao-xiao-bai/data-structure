#include <stdio.h>
#include <stdlib.h>
typedef struct SqStack{
	int MAX;
	int *top;
	int *base;
}SqStack;
int ChuShi(SqStack &s)
{
	s.base = (int *)malloc(sizeof(int) * 20);
	if(!s.base)
	{
		return 0;
	}
    s.top = s.base;
	s.MAX = 20;
	return 1;
 } 
 int Push(SqStack &s,int e)
 {
 	*s.top = e;
 	s.top ++;
 	return 1;
 }
 int Pop(SqStack &s,int &e)
 {
 	s.top --;
 	e = *s.top;
 	return 1;
 }
 int main()
 {
 	SqStack s;
 	int e;
 	int i;
 	int j = ChuShi(s);
 	//printf("j = %d\n",j);
 	for(i = 0;i < 4;i ++)
 	{
 		scanf("%d",&e);
 		if(Push(s,e))
 		{
 			printf("进栈成功\n");
		 }
		 else
		 {
		 	printf("OVER");
		  } 
	 }
	 for(i = 0;i < 4;i ++)
	 {
	 	if(Pop(s,e))
	 	{
	 		printf("%d ",e);
	 		printf("出栈成功\n");
		 }
		 else
		 {
		 	printf("game over");
		 }
	 }
	 
 }
