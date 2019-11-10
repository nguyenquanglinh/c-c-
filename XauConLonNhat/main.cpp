#include <iostream>
#include<stdio.h>
#include <cstdlib>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void Xuat(int *a,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i,j]<<" ";
		}
		cout<<"\n";
	}
	cout<<endl;
}

int **TaoMang(int l1,int l2){
	int **a=new int[l1][l2];
	for(int i=0;i<l1;i++){
		for(int j=0;j<l2;j++){
			a[i][j]=0;
		}
	}
	return a;
}
void XauMax(char* cot,char* hang,int lCot,int lHang){
	int *a=TaoMang(lHang+1,lCot+1);
	for(int i=1;i<=lHang;i++){
		for(int j=1;j<=lCot;j++){
			if(hang[i-1]==cot[j-1]){
				a[i][j]=a[i-1][j-1]+1;
			}
			else {
				int tren=a[i-1][j];
				int trai=a[i][j-1];
				if(tren>trai){
					a[i][j]=tren;
				}
				else a[i][j]=trai;
			}
			Xuat(a,lHang+1);
		}
	}
	
}
int Leng(char* hang){
	int dem=0;
	while(true){
		if(hang[dem]=='\000') break;
		dem++;
	}
	return dem;
}
void Nhap(char* s){
	s= (char*) malloc(sizeof(char));
// xoá b? d?m
	gets(s);
// xoá b? d?m l?n n?a
}
int main(int argc, char** argv) {
	char *cot=new char[100];
	cout<<"Nhap chuoi 1: ";
	gets(cot);
	
	cout<<"Nhap chuoi 2: ";
	char *hang=new char[100];
	gets(hang);
	int lCot=Leng(cot);
	int lHang=Leng(hang);
 
 
	XauMax(hang,cot,lCot,lHang);
	return 0;
}
