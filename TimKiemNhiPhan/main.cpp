#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*ham tim kiem nhi phan thuc hien cong viec tim kiem 1 so nao do trong day so 
neu day so do co trong day thi se tra ve vi tri cua so neu khong tra ve -1*/
int TimKiemNhiPhan(int a[] ,int ketQuaCanTim,int diemDau,int diemCuoi){
	if(diemDau>diemCuoi)
		return -1;
	else
	{
		int giua=(diemCuoi+diemDau)/2;
		if(ketQuaCanTim==a[giua])
			return giua;
		else{
			if(ketQuaCanTim>a[giua]) 
				return TimKiemNhiPhan(a,ketQuaCanTim,giua+1,diemCuoi);
			return TimKiemNhiPhan(a,ketQuaCanTim,diemDau,giua-1);
		}
	}
}

int main(int argc, char** argv) {
	int daySoA[]={1,2,3,9,8,7,5,4};
	int kqCanTim=9;
	int diemDau=0;
	int diemCuoi=7;
	int kq=TimKiemNhiPhan(daySoA,kqCanTim,diemDau,diemCuoi);
	if(kq==-1) printf("khong tim thay %d trong day so",0);
	else printf("ket qua tim duoc o vi tri thu %d trong day so ",kq);
	return 0;
}
