#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n=4;
	int a[n][n]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int b[n][n];
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			b[j][n-1-i]=a[i][j];
			 
		}
		
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<b[i][j]<<"\t";
		}
		cout<<"\n";
	}
	return 0;
}
