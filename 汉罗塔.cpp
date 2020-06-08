#include <stdio.h>
//思路:我们可以假设如果只有一个盘子第一次是把a柱子上的盘子移动到c所以是Move(a,c,1),如果有两个盘子先是从a柱子上移动到b,Han(a,c,b,n - 1),再将a柱子上的盘移动到c,Move(a,c,n)然后将吧柱子上的盘子弄到c柱子上Han(b,a,c,n - 1)； 
int count = 0;
int Move(char a,char c,char n)
{
	printf("第%d次将第%d个盘子从%c柱子移动到%c柱子\n",++ count,n,a,c);
 } 
 int Han(char a,char b,char c,int n)
 {
 	if(n == 1)
 	{
 		Move(a,c,n);
	 }
	 else
	 {
	 	Han(a,c,b,n - 1);
	 	Move(a,c,n);
	 	Han(b,a,c,n - 1);
	 }
 }
 int main()
 {
 	Han('a','b','c',3);
 }
