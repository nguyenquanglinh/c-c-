#include<iostream>
#define N 6
using namespace std;

int a[] = { 2,1,-1,-2,-2,-1,1,2 };
int b[] = { 1,2,2,1,-1,-2,-2,-1 };

int h[N][N], sophuongan = 0;
void init()
{
	int i, j;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			h[i][j] = 0;
		}
	}
}
void Xuat()
{
	int i, j;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			cout << h[i][j] << "\t";
		}
		cout << endl;
	}
}
void Try(int i, int x, int y)
{
	int u, v, k;
	for (k = 0; k < 8; k++)
	{
		u = x + a[k];
		v = y + b[k];
		if ((u >= 0) && (v >= 0) && (u <= N - 1) && (v <= N - 1) && (h[u][v] == 0))
		{
			h[u][v] = i;
			if (i < (N * N)) 
				Try(i + 1, u, v);
			else
			{
				cout << "Phuong an " << ++sophuongan << endl;
				Xuat();
				
			}
			h[u][v] = 0;
		}
	}

}
int main()
{
	init();
	h[1][2] = 1;
	Try(2, 1, 2);
}
