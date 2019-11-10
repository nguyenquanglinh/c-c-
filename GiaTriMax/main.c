#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct MinMax{
	int min;
	int max;
};

MinMax InMaxMin(int a[],int n){
	
	for(int i=0;i<7;i++){
		for(int j=i;j<7;j++){
			if(a[i]>a[j]){
			int tmp=a[i];
			a[i]=a[j];
			a[j]=tmp;
			}	
		}
	}
	printf("max la: %d\n",a[6]);
	printf("min la: %d\n",a[0]);
	MinMax m;
	m.max=a[6];
	m.min=a[0];
	return m;
}

int main(int argc, char *argv[]) {
	
	
	int a[]={3,5,8,9,4,2,7};
	MinMax m=InMaxMin(a,7)
	printf("max la: %d\n",m.max);
	printf("min la: %d\n",m.min);
	
	return 0;
}
