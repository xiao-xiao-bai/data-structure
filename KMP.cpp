#include <stdio.h>
#include <stdlib.h>
typedef unsigned char String[256];
int GetLength(String s)
{
	int i;
	for(i = 0;s[i] != '\0';i ++);
	return i - 1;
 } 
void GetNext(String b,int next[])
{
	int j = 1,k = 0;
	next[j] = k;
	while(j < b[0])
	{
		if(k == 0 || b[j] == b[k])
		{
			j ++;
			k ++;
			
			next[j] = k;
		}
		else
		{
			k = next[k];
		}
	}
}
int Index(String a,String b,int next[])
{
	int i = 1,j = 1;
	while(i <= a[0] && j <= b[0])
	{
		if(j == 0 || a[i] == b[j])
		{
			j ++;
			i ++;
		}
		else
		{
			j = next[j];
		}
	}
	if(j > b[0])
	{
		return i - b[0];
	}
	else
	{
		return 0;
	}
}
int main()
{
	String a,b;
	int next[100];
	printf("请输入主串:");
	scanf("%s",&a[1]);
	a[0] = GetLength(a);
	printf("请输入字串:");
	scanf("%s",&b[1]); 
	b[0] = GetLength(b);
	GetNext(b,next);
	if(Index(a,b,next))
	{
		printf("找到:%d\n",Index(a,b,next));
	}
	else
	{
		printf("没有找到\n");
	}
}
