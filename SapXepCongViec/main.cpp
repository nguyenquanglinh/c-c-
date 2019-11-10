#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct CongViec{
	int start;
	int end;
};

void NhapThongTinDSCV( CongViec *cv,int n){
	for(int i=0;i<n;i++){
		cout<<"thoi gian bat dau cua cong viec "<<i+1<<": ";
		cin>>cv[i].start;
		cout<<"\n";
		cout<<"thoi gian ket thuc cua cong viec "<<i+1<<": ";
		cin>>cv[i].end;
		cout<<"\n";
	}
}

void SapXepCVTheoThuTuThoiGian(CongViec *cv, int n){
	NhapThongTinDSCV(cv,n);
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(cv[i].start>cv[j].start){
				CongViec x=cv[i];
				cv[i]=cv[j];
				cv[j]=x;
			}
		}
	}
}

void SapXepThamLam1(CongViec *cv,int n){
	SapXepCVTheoThuTuThoiGian(cv,n);
	int d=0;
	int dem=0;
	cout<<"chon cong viec thu: "<<dem+1<<"thoi gian tu: "<<cv[d].start<<" den "<<cv[d].end<<endl;
	for(int i=1;i<n;i++){
		if(cv[i].start>=cv[d].end){
			cout<<"chon cong viec thu: "<<i<<"thoi gian tu: "<<cv[i].start<<" den "<<cv[i].end<<endl;
			dem++;
			d=i;
		}
	}

}

int main() {
	cout<< "nhap so cong viec: " ;
	int n;
	cin>>n;
	CongViec *dsCV=new CongViec[n];
	SapXepThamLam1(dsCV,n);
	return 0;
}
