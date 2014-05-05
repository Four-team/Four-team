
#include "student_info.h"
#include <stdio.h>      
#include <time.h>
#include "student_info.h"


void main()
{
 	int group[10][4] = {0};
 	int i,j,k;
 	srand(time(NULL));
 	for(i = 0;i < 40;i++)
 	{
  		j = rand() % 40; //生成0～39的随机数
  		while(*(group[0] + j % 40) != 0)
   		j++;
  		*(group[0] + j % 40) = i;
 	}
 	for(i=0;i<10;i++)
 	{

		printf("第%d组：\n",i+1);
  		for(j=0;j<4;j++)
		{
			k=group[i][j];
			printf("%d - %s\n", info[k].id, info[k].name);
		}
   		/*printf("%d ",group[i][j]);*/
  		printf("\n");
}
