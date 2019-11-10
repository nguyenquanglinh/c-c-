#include <iostream>
using namespace std;
int c = 0,cost = 999999;
int graph[5][5] = { {0, 3, 5, 2,6},
                    {3,0, 6, 7, 3},
                    {5,6,0, 5, 4},
                    {2, 7, 5, 0,1},
                    {6,3,4,1,0},
                  };
void swap (int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void copy_array(int *a, int n)
{
    int i, sum = 0;
    for(i = 0; i <= n; i++)
    {
        sum += graph[a[i % 4]][a[(i + 1) % 4]];
    }
    if (cost > sum)
    {
        cost = sum;
    }
}  
void DuLich(int *a, int i, int n) 
{
   int j, k; 
   if (i == n)
   {
        copy_array(a, n);
   }
   else
   {
        for (j = i; j <= n; j++)
        {
            swap((a + i), (a + j));
            DuLich(a, i + 1, n);
            swap((a + i), (a + j));
        }
    }
} 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i, j;
	int a[] = {0, 3, 4, 1,2};  
	DuLich(a, 0, 3);
	cout<<"minimum cost:"<<cost<<endl;
	return 0;
}
