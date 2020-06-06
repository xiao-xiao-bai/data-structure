#include <stdio.h> 
#include <stdlib.h>
int Strlength(char n1[256])
{
	int i;
	for(i = 1;n1[i] != '\0';i ++);
	return i - 1;
}
int Cha(char n1[],char n2[])
{
	int i = 1,j = 1;
	while(i <= n1[0] && j <= n2[0])
	{
		if(n1[i] == n2[j])
		{
			i ++;
			j ++;
		}
		else
		{
			i = i - j + 2;
			j = 1;
		}
	}
	if(j > n2[0])
	{
		return i - n2[0];
	}
	else
	{
		return 0;
	}
}
int main()
{
	char n1[256];
	char n2[256];
	printf("«Î ‰»Î÷˜¥Æ:");
	scanf("%s",&n1[1]);
	n1[0] = Strlength(n1);
    printf("«Î ‰»Î◊÷¥Æ:");
    scanf("%s",&n2[1]);
    n2[0] = Strlength(n2);
    int j = Cha(n1,n2);
    if(j == 0)
    {
    	printf("≤È’“ ß∞‹");
	}
	else
	{
		printf("Œª÷√:%d\n",j);
	}
    
}

