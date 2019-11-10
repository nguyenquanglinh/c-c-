#include <iostream>
 
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a[100000] ;
int k , n ;
 
void printResult() { // hàm dùng d? in m?t c?u hình ra ngoài
    for(int i = 1 ; i <=k ; i++) {
        cout<<a[i]<<" " ;
    }
}
void backtrack(int i ) { // hàm quay lui
    for(int j = a[i-1]+1 ; j<=n-k+i ; j++ ) { // xét các kh? nang c?a j
        a[i] = j ; // ghi nh?n m?t giá tr? c?a j
        if(i==k) { // n?u c?u hình dã d? k ph?n t?
            // in m?t c?u hình ra ngoài
            printResult() ;
        }
        else {
            backtrack(i+1) ; // quay lui
        }
 
    }
}
void toHop() { // hàm li?t kê các t? h?p
    if(k>=0 && k <=n ) {
        a[0] = 0 ; // kh?i t?o giá tr? a[0]
        backtrack(1) ;
    }
    else {
        cout<<"Loi: khong thoa dieu kien 0<=k<=n "<<endl ;
    }
 
}
 
 
int main()
{
    cout<<"Nhan k va n: " ;
    cin>>k>>n ;
    toHop()  ;
    return 0;
}
