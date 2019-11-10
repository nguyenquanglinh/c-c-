#include <iostream>
#include <fstream>
#include<string>
#include<stdlib.h>
using namespace std;
class obj{
public:
	int x1;
	int x2;
	int GetN(){
		return n;
	}
	static int n;
};

class DangKy:public obj{
	public:
		int ma_sv;
		int ma_mon;
};

class MonHoc:public obj{
	public:
		int ma_mon;
		char ten_mon[20];
};
char* LayChuoi(int bd,int kt,char *a){
	char *ret=new char[kt-bd];
	int dem=0;
	for(int i=bd;i<kt;i++){
		ret[dem]=a[i];
	}
	return ret;
}
MonHoc* f_input(char* file_name)
{
	ifstream infile;
	infile.open(file_name);
	int n;
	infile>>n;
	MonHoc *monHoc=(MonHoc*)malloc(sizeof(MonHoc)*n);
	int dem=0;
	char *a=new char(20);
	while(!infile.eof()){
		infile>>a;
		monHoc[dem].ma_mon=atoi(a);
		infile>>monHoc[dem].ten_mon;
		dem++;		 
	}
	infile.close();
	return monHoc;
}
void f_output(string s2)
{
	ofstream infile;
	infile.open("test2.txt");
	infile<<s2;
}
int main(){
	char *tenMonHoc= "mon_hoc.txt";
	MonHoc *bangMon=f_input(tenMonHoc);
	cout<<bangMon[0].ma_mon <<":"<<bangMon[0].ten_mon<<bangMon[0].GetN();
	return 0;
}

