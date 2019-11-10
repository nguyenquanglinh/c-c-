#include<iostream>
#include<math.h>
using namespace std;
int DayBinhPhuong(int k){
	int dem=0;
	for(int i=1;i<pow(10,12);i+=2){	
	cout<<k<<" ";
		if(k>=0){
			if(k==0) return 0;
			else {
				int can=sqrt(k);
				if(can*can==k) {
					return can;
				}
			}
		}
		if(dem>100) return -1;
		dem++;
		k+=i;
	}
	return -1;
}

int main(){
	int k=401;
	int x=DayBinhPhuong(k);
	if(x==-1) cout<<"none";
	else cout<< x;
	return 1;
}
