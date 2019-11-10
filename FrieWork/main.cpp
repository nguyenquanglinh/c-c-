#include <iostream>
#include<math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int TinhDinh(int n,int m){
	if(m==0)return n;
	return n*(pow(2,m)-1)-m;
}
int DinhToMau(int n,int m){
	if(m<=1) return n;
	return  6+DinhToMau(n,m-1);
}
int main(int argc, char** argv) {
	int n=1,m=0;
	int a[3]={1,1,2};
	cout<<"so dinh la "<<TinhDinh(n,m);
	cout<<"dinh to mau: "<<DinhToMau(n,m);
	return 0;
}
