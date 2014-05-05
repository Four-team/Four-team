#include <stdlib.h>
#include "student_info.h"
#include <stdio.h>      
#include <time.h>

void main()
{
 	int group[10][4]={0};
 	int i,j,k;
        for (i = 0; i < sizeof(info)/sizeof(struct student); ++i) {
		printf("%d - %s\n", info[i].id, info[i].name);
	}
 	srand(time(NULL));
 	for(i=0;i<40;i++)
 	{
  		j=rand()%40;
  		while(*(group[0]+j%40)!=0)
   		j++;
  		*(group[0]+j%40) = i;
	}
 	for(i=0;i<10;i++)
 	{
		printf("第%d组：\n",i+1);
  		for(j=0;j<4;j++)
		{
			k=group[i][j];
			printf("%d - %s\n", info[k].id, info[k].name);
		}
  		printf("\n");
 	}
}
