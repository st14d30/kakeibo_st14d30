#include <stdio.h>
#include "sum.h"
int sum(int payments[]);

int main(void)
{
	int paymants[5] = {1,1,2,3,3};

		if(sum(paymants) == 10 ){
				printf("成功");
		}else{
				printf("失敗");
			}
	return 0;
}

