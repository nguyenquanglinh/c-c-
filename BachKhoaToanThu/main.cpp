#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include<stdio.h>
using namespace std;
char  chuyenIntSangChar(int x){
	 
	if(x==1){
		return '1';
	}
	
}

char* DocFile(char a[]){
	std::ifstream fileInput(a);
	if (fileInput.fail())
		std::cout << "Failed to open this file!" << std::endl;
	char *c=new char(1000);
	int i=0;
	while (!fileInput.eof())
	{
		char x;
		if(fileInput >> x)
			{
				c[i]=x;
				i++;
			}
	}
	return c;
}


int DemChieuDaiChuoi(char a[]){
	int n=0;
	while(a[n]!='\000'){
	n++;
	};
	return n;
}


char* GopTenFile(char a[],char b[]){
	int l=DemChieuDaiChuoi(a);
	int r=DemChieuDaiChuoi(b);
	char *c=new char[l+r];
	int i=0;
	int j=0;
	int k=0;
	while(i<=l){
		c[k]=a[i];
		k++;
		i++;
	}
	k--;
	while(j<=r){
		c[k]=b[j];
		k++;
		j++;
	}
	return c;
	
}


void DocTatCaDuLieu(){
	char a[]="C:\\Users\\thang\\Downloads\\dethi\\Canhan\\CMS\\Encyclopaedia_Mo test bang WordPad\\tests\\";
	for(char i='0';i<='10';i++){
		char *b=GopTenFile("1",".txt");
		cout<<b<<endl;
		char *c=GopTenFile(a,b);
		cout<<c<<endl;
		char*d=DocFile(c);
		cout<<d<<endl;
	}
	
}


int main ()
{

	cout<<chuyenIntSangChar(10);
	 
	return 0;
}
	
	
//	string path="C:\\Users\\thang\\Downloads\\dethi\\Canhan\\CMS\\Encyclopaedia_Mo test bang WordPad\\tests\\";
//	
//	for(int i=1;i<=50;i++){
//	
//	stringstream ss;
//	ss << i;
//	string str =path +ss.str()+".txt";
//	cout  << " ==> " << str << endl;
//	ofstream myfile;
//	myfile.open (str);
//	myfile << "Writing this to a file.\n";
//	cout  << " ==> " << myfile << endl;
//	myfile.close();
//	}
