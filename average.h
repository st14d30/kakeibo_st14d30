#ifndef _INCLUDE_AVERAGE_H_
#define _INCLUDE_AVERAGE_H_

int average(int a[]);

#endif //_INCLUDE_AVERAGE_H_

int average(int a[]){

	int i,sum;
	sum=0;
	for(i=0; i<5; i++){
		sum=a[i]+sum;
		}
	sum=sum/5;

	return sum;
}
