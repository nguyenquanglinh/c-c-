#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int Min(int *a,int l,int r){
	if(l==r){
		cout<<a[l]<<" \t";
		return a[l];
	}
	else{
		int giua=(l+r)/2;
		int min1=Min(a,l,giua);
		int min2=Min(a,giua+1,r);
		if(min1<min2) return min1;
		return min2;
	}
}
int Max(int *a,int l,int r){
	if(l==r){
		cout<<a[l]<<" \t";
		return a[l];
	}
	else{
		int giua=(l+r)/2;
		int min1=Min(a,l,giua);
		int min2=Min(a,giua+1,r);
		if(min1>min2) return min1;
		return min2;
	}
}
int main(int argc, char** argv) {	
	int *a=new int[5];
	a[0]=1;
	a[1]=2;
	a[2]=3;
	a[3]=4;
	a[4]=5;
	int l=0;int r=4;
	cout<<"min: "<<Min(a,l,r)<<endl;
	cout<<"max: "<<Max(a,l,r)<<endl;
	return 0;
}
