#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 int DeQuy(int a[],int n)
{
    int tong = 0;
    for(int i = 0; i < n - 2; i++)
    {
       if (a[i] > a[i + 1])
        {
            int hSo = 1;   
                for (int j = i + 2; j < n; j++)
                {
                	if (a[j] > a[i + 1])
                        {
                            int kq = 0;
                            if (a[i] >= a[j])
                                kq = a[j] - a[i+1];
                            else
                                kq = a[i] - a[i+1];
                            for (int k = j - 1; k >= i + 1; k--)
                            {
                                a[k] += kq;
                            }                            
                            tong += kq * hSo + DeQuy(a,n);
                            break;
                        }
                        hSo += 1;
                }
            }
        }
    return tong;
}


int main(int argc, char *argv[]) {
	int n=7;
	
	int *a;
	a = (int*) malloc(sizeof(int)*n);
	int a[7];
	a ={ 9,8,7,6,5,4,3};
	printf("kq la: %d",DeQuy(a,n));
	return 0;
}
