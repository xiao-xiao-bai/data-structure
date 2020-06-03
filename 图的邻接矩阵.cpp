#include <stdio.h>
#include <stdlib.h>
typedef  struct MGraph{
	int vexs[100];//���ö�����Ϣ
	int arcs[100][100];//���ñߵ���Ϣ
	int vexnum;//����ĸ���
	int arcnum;//�ߵĸ��� 
}MGraph;
int Getnidex(MGraph g,int v)
{
	int i;
	for(i = 0;i < g.vexnum;i ++)
	{
		if(g.vexs[i] == v)
		{
			return i;
			
		}
	}
	
}
void CreateGraph(MGraph &g)
{
	int i,j;
	int v1,v2;
	int pos1,pos2;
	printf("�����붥����:");
	scanf("%d",&g.vexnum);
	printf("���������");
	scanf("%d",&g.arcnum);
	printf("�����붥�����Ϣ:\n");
	for(i = 0;i < g.vexnum;i ++)
	{
		scanf("%d",&g.vexs[i]);
	 }
	 for(i = 0;i < g.vexnum;i ++)
	 {
	 	for(j = 0;j < g.vexnum;j ++)
	 	{
	 		g.arcs[i][j] = 0;
		 }
	  } 
	  printf("������ߵ������˵�:\n");
	  for(i = 0;i < g.arcnum;i ++)
	  {
	  	scanf("%d %d",&v1,&v2);
	  	pos1 = Getnidex(g,v1);
	  	pos2 = Getnidex(g,v2);
	  	g.arcs[pos1][pos2] = 1;
	  	g.arcs[pos2][pos1] = 1;
	  	
	  }
	  printf("��ӡ�ڽӾ���\n");
	  for(i = 0;i < g.vexnum;i ++)
	  {
	  	if(i == 0)
	  	{
	  		printf("  ");
		  }
		  printf("%d ",g.vexs[i]);
	  }
	  printf("\n");
	  printf("------------------\n");
	  for(i = 0;i < g.vexnum;i ++)
	  {
	  	printf("%d ",g.vexs[i]);
	  	printf("|");
	  	for(j = 0;j < g.vexnum;j ++)
	  	{
	  		printf("%d ",g.arcs[i][j]);
		  }
		  printf("\n");
	  }
	
}
int main()
{
	MGraph g;
	CreateGraph(g);
}
