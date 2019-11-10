#include <iostream>
#	include<stdio.h>

int MaxVetor(int a[],int i,int j){
	int maxSum=a[i];
	int sum=a[i];
	for(int k=i+1;k<=j;k++){
		sum+= a[k];
			if(sum>maxSum){
		maxSum=sum;
	}

	}

	return maxSum;
}
int Max(int a,int b,int c){
 	if(a>b&&a>c) 
	{
		return a;
	}
	else if(b>a&&b>c){
		return b;
	} 
	else 
	{
		return c;
	}
}

int MaxVectorL(int a[],int i,int j){
	int maxSum=a[j];
	int sum=a[j];
	for(int k=j-1;k>=i;k--){
		sum+=a[k];
		if(sum>maxSum) maxSum=sum;
	}
	return maxSum;
}

int MaxVectorR(int a[],int i,int j){
	int maxSum=a[i];
	int sum=a[i];
	for(int k=i+1;k<=j;k++){
		sum+=a[k];;
		if(sum>maxSum) maxSum=sum;
	}
	return maxSum;
}
int dem=0;
int MaxSubVector(int a[],int i,int j){
	{
		if(i == j) 
			{
				return a[i] ;
			}
		else {
			int m = (int)(i + j)/2; 
			int wl=MaxSubVector(a,i,m);
 			int wr = MaxSubVector(a, m+1,j);
			int wm=MaxVetor(a,i,m)+MaxVetor(a,m+1,j);
			int max=Max(wl,wr,wm);
			printf("max: %d trong i= %d j= %d wl =%d wr= %d wm= %d dem= %d \n",max,i,j,wl,wr,wm,dem);
			dem+=1;
			return Max(wl,wr,wm);
		}
	}
}

//int main(int argc, char** argv) {
int main(){
	int a[]={-98,54,8,-9,4,-2,7};
//	int n=7;
	printf("kq= %d",MaxSubVector(a,0,6));
	
	return 0;
}
