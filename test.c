#include "student_info.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i,j;
	for (int i=0;i<sizeof(info)/sizeof(struct student);++i) {
		printf("%d-%s\n",info[i].id,info[i].name);
	}
	srand(time(NULL));
	for(i=0;i<=39;i++){
		j=rand()%40;
		while(*info[i]!=0)
		  j++;
		*(group[0]+j%60)=i;
	}
	for(i=0;i<10;i++){
		printf("第%d组：",i+1);
		for(j=0;j<4;j++){
			printf("%d-%s\n",info[i].id,info[i].name);
			printf("\n");
		}
		return 0;
	}
}


