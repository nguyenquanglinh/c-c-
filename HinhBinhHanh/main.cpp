#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int HinhBinhHanh(int a,int b,int c,int d){
	if(a<=0||b<=0||c<=0||d<=0){
		return 0;
	}
	
	if(a==c&&b==d){
		return 1;
	}
	return 0;
	}
	

using namespace std;
int main(int argc, char** argv) {
	int a,b,c,d;
	int x=HinhBinhHanh(a,b,c,d);
	if(x==0) {
		cout<<"NO";
	}
	else cout<<"Yes";
	
//	cin>>a;
//	cin>>b;
//	cin>>c;
//	cin>>d;
	return 0;
}
