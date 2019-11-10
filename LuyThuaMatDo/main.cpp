#include <iostream>
#include<math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int GiaTriTuyetDoi(int t){
	if(t<0) return -t;
	return t;
}
int MatDoLuyThua(int a,int b,int k){
	int dem=0;
	if(a>=1&&b>=a&&k>=0){
		int i1=sqrt(a),i2=sqrt(b);
		int j1=pow(a,(float)1/3),j2=pow(b,(float)1/3);
		for(int i=i1;i<=i2;i++){
			for(int j=j1;j<=j2;j++){
				int x=GiaTriTuyetDoi(pow(i,3)-pow(j,3));
				if(x<=k&&x>=0){
					dem++;
				}		
			}
		}
	}
	return dem;
}





int main(int argc, char** argv) {
	int a=64,b=1000,k=0;
	cout<< pow(64,(float)1/3);
//	cout<<MatDoLuyThua(a,b,k);
	return 0;
}
