#include <iostream>
#include "bits/stdc++.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int ChuyenChuoi(char a){
	if(a=='V') return 5;
	else if(a=='I') return 1;
	else if(a=='X') return 10;
	else if(a=='L') return 50;
	else if(a=='C') return 100;
	else if(a=='D') return 500;
	else if(a=='M') return 1000;
	return 0;
}
int main() {
	string st="XC";
	cin>>st;
	
	int n=st.length();
	int a[n];
	int j=n-1;
	for(int i=0;i<n;i++){
		a[i]=ChuyenChuoi(st[j]);
		j--;
	}
	int k=0;
	for(int i=0;i<n;i++){
		if(a[i]>a[i+1]){
			int x=a[i]-a[i+1];
			a[i]=x;
			a[i+1]=0;	
			
		}
		else{
			if(a[i]==0) continue;
			int x=a[i+1]+a[i];
			a[i]=x;
			a[i+1]=0;
		}
	}
	int tong =0;
	for(int i=0;i<n;i++){
		tong+=a[i];
	}
	cout<<tong<<endl;
	return 0;
}
