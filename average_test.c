#include <stdio.h>
#include "average.h"

int main(void){

	int payments[5] = {1,2,3,4,5};
	int a;
	a = average(payments);
	if(a == 3) {
		printf("%d\n",a);
		printf("成功");
	}else {
		printf("%d\n",a);
		printf("失敗");
	}

	return 0;
}
