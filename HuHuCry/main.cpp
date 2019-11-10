#include<stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int TinhThoiGian(int n,int k,int a,int b){
	int	time=0;
	while (n>1) {
		if (n%k==0) 
		{
			int t=a*(n-(int)n/k);
			if (b<t)
			{
				time+=b;
				n=n/k;	
			}
			else{
				time+=a;
				n--;
			}
		}	
		else 
		{
			time+=a;
			n--;
		}
	}
	return time;
}
//void input()
//{
//	ifstream inf;
//	inf.open("del.txt");
//	inf>>n;
//	inf>>k;	
//	inf>>a; // time to del 1 file
//	inf>>b;	
//	inf.close();
//}
//
//void output(long long time)
//{
//	ofstream f;
//	f.open("del2.txt");
//	f<<time;
//	f.close();
//}

int main(int argc, char** argv) {
	int n=30;
	int k=3;
	int a=3;
	int b=10;
	int tong=0;
	printf("tong thoi gian =: %d",TinhThoiGian(n,k,a,b));
//	printf("nhap gia tri cua n: ");
//	scanf("%d",&n);
//	printf("nhap gia tri cua k: ");
//	scanf("%d",&k);
//	printf("nhap gia tri cua a: ");
//	scanf("%d",&a);
//	printf("nhap gia tri cua b: ");
//	scanf("%d",&b);
//	printf("tong thoi gian =: %d",TinhThoiGian(n,k,a,b,tong));
//	return 0;
}
