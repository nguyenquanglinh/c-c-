#include <iostream>
#include <windows.h>
#define dotRan 254
#define max 2000
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void gotoxy(int x, int y)
{
  static HANDLE h = NULL;  
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };  
  SetConsoleCursorPosition(h,c);
  cout<<(char)dotRan;
}
struct ToaDo{
	int x;
	int y;
};
ToaDo ran[max];
int soDot=3;
void KhoiTaoRan(){
	ran[0].x=4;
	ran[1].x=5;
	ran[2].x=6;
	ran[0].y=ran[1].y=ran[2].y=4;
}
void HienThiRan(){
	for(int i=0;i<soDot;i++){
		gotoxy(ran[i].x,ran[i].y);
		
	}
}
void DichChuyen(){
	for(int i=soDot-1;i>0;i--){
		ran[i]=ran[i-1];
	}
	if(ran[0].x>=0)
		ran[0].x++;
}
int main(int argc, char** argv) {
	
	KhoiTaoRan();
	while(1){
		Sleep(1000);
		system("cls");
		HienThiRan();
		DichChuyen();
	}
	return 0;
}
