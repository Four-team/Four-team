#include "student_info.h"
<<<<<<< HEAD
#include <stdio.h>
=======
#include <stdio.h>      
>>>>>>> 40cda09e518b6a37f33f8856e8e5940cc3a8f42c
#include <stdlib.h>
#include <time.h>

int main()
<<<<<<< HEAD
{
	int i,j;
	for (int i=0;i<sizeof(info)/sizeof(struct student);++i) {
		printf("%d-%s\n",info[i].id,info[i].name);
	}
	srand(time(NULL));
	for(i=0;i<=39;i++){
		j=rand()%40;
		while(info[i]!=0)
		  j++;
		info[i]=i;
	}
	for(i=0;i<10;i++){
		printf("第%d组：",i+1);
		for(j=0;j<4;j++){
			printf("%d-%s\n",info[i].id,info[i].name);
			printf("\n");
		}
		return 0;
	}
=======
{	
	
	int i;int j=10;int flag=0;int count=0;
	while(j--){
		printf("第%d组",10-j);
		printf("结果为：\n");
	for (i = 0; i < sizeof(info)/sizeof(struct student); ++i) {
		flag=rand()%40;
		count++;
		printf("%d - %s\n", info[flag].id, info[flag].name);
		if(count==4){
			count=0;
			break;
		}
	}
	}
	return 0;
>>>>>>> 40cda09e518b6a37f33f8856e8e5940cc3a8f42c
}


