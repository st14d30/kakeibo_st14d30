#include <stdio.h>
#include "sum.h"
int sum(int payments[]){
	int i,j;
	j=0;
	for(i=0;i<5;i++){
		j=j+payments[i];
	}

	return j;
}
