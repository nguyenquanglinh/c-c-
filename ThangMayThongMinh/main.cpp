#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int MaxArr(int *a,int n){
	int max=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	return max;
}

void DemTangThangMay(int n,int k,int *a){
	int dem=0;
	if(n>=2&&n<10000){
		if(k>0&&k<n){
			if(k==1) {
				cout<<2;
			}
			else{
				for(int i=0;i<k;i++){
					if(a[i]%2!=0){
						cout<<a[i]<<" ";
					}
					else {
						if(a[i]+1<n){
						cout<<a[i]+1<<" ";
						}
						else cout<<a[i]<<" ";
					};
				}
			}
		}
	}
}



int main(int argc, char** argv) {
	int n=10;
	int k=3;
	int *a=new int[k]{3,7,10};
	DemTangThangMay(n,k,a);
	
	return 0;
}
