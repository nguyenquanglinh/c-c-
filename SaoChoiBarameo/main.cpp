#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
long DemSoLanNhinThaySaoChoi(long a,long b,long c ){
	long dem=0;
	for(int i=a;i<=b;i++){
		if(i%c==0){
			a=i;
			break;
		}
	}
	for(int i=a;i<=b;i+=c){
		if(i%c==0) dem++;
	}
	return dem;
}

int main(int argc, char** argv) {
	long long a=592691,b=1992037812,c=197564;
	cout<<DemSoLanNhinThaySaoChoi(a,b,c);
	cin>>a;
	cin>>b;
	cin>>c;
	cout<<DemSoLanNhinThaySaoChoi(a,b,c);
	return 0;
}
