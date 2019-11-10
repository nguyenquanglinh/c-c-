#include <iostream>
#include<math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int KiemTraSNT(int n){
	if(n<2) return 0;
	else{
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				return 0;
			} 
		}	
	}
	return 1;
}

int main(int argc, char** argv) {
	int n;
	cin>>n;
	if(KiemTraSNT(n)==0) cout<<"NO";
	else{
		if(KiemTraSNT(n+6)==1) cout<<"Yes";
		else cout<<"NO";
	}
	
	return 0;
}
