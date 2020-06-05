#include <stdio.h>
#include <stdlib.h>
typedef char ** HuffmanCode;
typedef struct HuffmanNode{
	int weght;
	int parent,lch,rch;
}HuffmanNode;
typedef HuffmanNode *HuffmanTree;
void Select(HuffmanTree HT,int i,int &s1,int &s2)
{
	int a[i];
	int j,k = 0,x,y,temp;
	for(j = 1;j <= i;j ++)
	{
		if(HT[j].parent == 0)
		{
			a[k ++] = HT[j].weght;
		}
	}
	for(j = 0;j < k - 1;j ++)
	{
		y = j;
		for(x = j + 1;x < k;x ++)
		{
			if(a[y] > a[x])
			{
				y = x;
			}
		}
		if(y != j)
		{
			temp = a[y];
			a[y] = a[j];
			a[j] = temp;
		}
	}
	for(x = 1;x <= i;x ++)
	{
		if(HT[x].parent == 0)
		{
			if(a[0] == HT[x].weght)
			{
				s1 = x;
			}
		}
	}
	for(x = 1;x <= i;x ++)
	{
		if(HT[x].parent == 0)
		{
			if(a[1] == HT[x].weght && x != s1)
			{
				s2 = x;
			}
		}
	}
 } 
 void CreatHuffmanTree(HuffmanTree &HT,int n)
 {
 	int m,i,s1,s2;
 	if(n < 1)
 	{
 		return;
	 }
	 m = 2 * n - 1;
	 HT = (HuffmanTree)malloc(sizeof(HuffmanNode));
	 if(!HT)
	 {
	 	printf("失败");
	 	return;
	 }
	 for(i = 1;i <= m;i ++)
	 {
	 	HT[i].lch = 0;
	 	HT[i].parent = 0;
	 	HT[i].rch = 0;
	 }
	 printf("请输入权值:");
	 for(i = 1;i <= n;i ++)
	 {
	 	scanf("%d",&HT[i].weght);
	 }
	 for(i = n + 1;i <= m;i ++)
	 {
	 	Select(HT,i - 1,s1,s2);
	 	HT[s1].parent = i;
	 	HT[s2].parent = i;
	 	HT[i].lch = s1;
	 	HT[i].rch = s2;
	 	HT[i].weght = HT[s1].weght + HT[s2].weght;
	 }
	printf("位置\t左孩子\t双亲\t右孩子\t权值\n");
	for(i = 1;i <= m;i ++)
	{
		printf("%d\t%d\t%d\t%d\t%d\n",i,HT[i].lch,HT[i].parent,HT[i].rch,HT[i].weght);
	}
 }
 int main()
{
	HuffmanTree HT;
	int n;
	printf("请输入叶子结点数:");
	scanf("%d",&n);
	CreatHuffmanTree(HT,n);
}
