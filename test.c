#include "student_info.h"
#include <stdio.h>      
#include <stdlib.h>
#include <time.h>

int main()
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
}
