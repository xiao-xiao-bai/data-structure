#include <stdio.h>
//˼·:���ǿ��Լ������ֻ��һ�����ӵ�һ���ǰ�a�����ϵ������ƶ���c������Move(a,c,1),����������������Ǵ�a�������ƶ���b,Han(a,c,b,n - 1),�ٽ�a�����ϵ����ƶ���c,Move(a,c,n)Ȼ�󽫰������ϵ�����Ū��c������Han(b,a,c,n - 1)�� 
int count = 0;
int Move(char a,char c,char n)
{
	printf("��%d�ν���%d�����Ӵ�%c�����ƶ���%c����\n",++ count,n,a,c);
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
