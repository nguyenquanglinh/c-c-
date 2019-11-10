#include <iostream>

using namespace std;
int ChonMax(int n,int a,int b,int c,int t){
	if(t<=n){
		int t_diThangMay=t*c;
		int t_diBoLen=0;
		int t_diBoXuong=0;
		int dem=1;
		for(int i=t+1;i<=n;i++){
			int maxlen=dem*a;
			if(maxlen>t_diBoLen){
				t_diBoLen=maxlen;
			}
			dem++;
		}
		t_diBoLen+=t_diThangMay;
		int soLan=b/c;
		dem=1;
		for(int i=t-1;i>soLan;i--){
			
			int maxXuong=dem*b;
			if(maxXuong>t_diBoXuong){
				t_diBoXuong=maxXuong;
			}
			dem++;
		}
		t_diBoXuong+=t_diThangMay;
		int t_diBoHamLen=0;
		dem=1;
		for(int i=0;i<soLan;i++){
			int maxHamlen=dem*a;
			if(maxHamlen>t_diBoHamLen){
				t_diBoHamLen=maxHamlen;
			}
		}
		if(t_diBoLen>=t_diBoXuong&&t_diBoLen>=t_diBoHamLen) return t_diBoLen;
		else if(t_diBoXuong>=t_diBoLen&&t_diBoLen>=t_diBoHamLen) return t_diBoXuong;
		else return t_diBoHamLen;
	}
}

int main(int argc, char** argv) {
	int n=7,a=20,b=10,c=5;
	int max=ChonMax(n,a,b,c,7);
	int t=0;
	for(int i=1;i<=n;i++){
		t=ChonMax(n,a,b,c,i);
		cout<<"max o tang: "<<i<<" : "<<t<<endl;
		if(max>t) {
			max=t;
			cout<<"max:"<<max<<endl;
		}
	}

}
