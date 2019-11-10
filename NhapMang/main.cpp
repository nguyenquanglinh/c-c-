#include<stdio.h>
void NhapMang(int *a, int n){
	for(int i=0;i<n;i++){
		printf("Nhap gia tri cua a[%d]: ",i);//in ra cau nhap gia tri tren man hinh
		scanf("%d",&a[i]);//cho a[i] bang gia tri nhap tu ban phim
	}
}
void XuatMang(int *a,int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);//xuat ra gi tri a[i] 
	}
}
int Tongmang(int *a,int n){
	int tong=0;
	for(int i=0;i<n;i++){
		if(a[i]>=0)	tong+=a[i];
	}
	return tong;
}
int DemPhanTuXuatHienTrongMang(int *a,int n,int x){
	int dem=0; 
	for(int i=0;i<n;i++){
		if(a[i]==x){
			dem++;
		}
	}
	return dem;
}
int main()
 {
 	try{
 		printf("%d",1/0);
	 }
	 catch(exception ex)
	 {
	 	printf("không thê chia");
	 }
	int n;
	printf("Nhap gia tri n: ");//xuat ra man hinh chuoi nhap gia tri n
	scanf("%d",&n);//gan n= gia tri cua so vua nhap tren ban phim
	int *a=new int [n];//khoi tao mang bang cap phat dong
	printf("Nhap gia tri cua mang a\n");
	NhapMang(a,n);
	int tong=Tongmang(a,n);
	printf("tong mang= %d\n",tong);
	int x;
	printf("nhap phan tu can tim: ");
	scanf("%d",&x);
	int xLan=DemPhanTuXuatHienTrongMang(a,n,x);
	printf("phan tu x= %d xuat hien %d lan trong mang\n",x,xLan);
	return 0;
}
