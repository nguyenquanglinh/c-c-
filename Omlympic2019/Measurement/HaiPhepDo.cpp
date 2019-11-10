#include<iostream>

using namespace std;
int PhepDo(int m,int n,int a){
	int dem=0;
	if(a<=n-m){
		for(int i=m;i<=n-a;i+=a){
			for(int j=i+a;j<=n;j++){
				dem++;
			}
		}
	}
	return dem;
}
int main(){
	int m, n, a;
	cin>>m;
	cin>>n;
	cin>>a;
	cout<<PhepDo(m,n,a);
	return 0;
}
