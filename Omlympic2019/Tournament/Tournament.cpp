#include <iostream>
#include<math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int DemPhanTuKhac0(int *a,int n){
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]>0){
			dem++;
		} 
	}
	return dem;
}

void XuatMang(int *a,int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int * CapNhatMang(int *a,int n){
	int x=DemPhanTuKhac0(a,n);
	int *tmp=new int [x];
	int k=0;
	for(int i=0;i<n;i++){
		if(a[i]>0){
			tmp[k]=a[i];
			k++;
		}
	}
	return tmp;
}
int KiemTraDauVao(int n){
	int t=0;
	for(int i=1;i<17;i++){
		t=pow(2,i);
		if(t>=n){
			if(t==n) return 1;
			return 0;
		}
	}
}

void DoiWin(int *kq,int * doi,int n,int k){
	if(k>=1){
		int x=0;
		for(int i=0;i<k;i++){
			if(kq[i]==1){
				doi[x+1]=0;				
				}
			else{
				doi[x]=0;
			}
			x+=2;
			kq[i]=0;
		}
		kq=CapNhatMang(kq,n-1);
		doi=CapNhatMang(doi,n);
		n=n-k;
		k=k/2;
		DoiWin(kq,doi,n,k);
	}
	else
		XuatMang(doi,n);
	
}

int *TaoDoi(int n){
	int *doi=new int[n];
	for(int i=0;i<n;i++){
		doi[i]=i+1;
	}
	return doi;
}

void NhapGiaTri(int *a,int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
int main(int argc, char** argv) {
	int n;
	cin>>n;
	if(KiemTraDauVao(n)==1){
		int *doi=TaoDoi(n);
 		int *kq=new int [n-1];
 		NhapGiaTri(kq,n-1);
 		DoiWin(kq,doi,n,n/2); 	

	}
	return 0;
}
