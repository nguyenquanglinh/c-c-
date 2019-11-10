#include <iostream>


/*
thuc hien chia va gop mang sau do sap xep
*/
void merge(int arr[], int diemDau, int giua, int diemCuoi)
{
    int i, j, k;
    int n1 = giua - diemDau + 1;
    int n2 =  diemCuoi - giua;
    /* Tao các mang tam thoi */
    int L[n1], R[n2];
 
    /* Copy du lieu cua mang ban dau sang cac mang tam thoi */
    for (i = 0; i < n1; i++)
        L[i] = arr[diemDau + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[giua + 1+ j];
 
    /* thuc hien giop gia tri cua cac mang vao mang ban dau*/
    i = 0; // chi so bat dau cua mang L
    j = 0; // chi so bat dau cua mang r
    k = diemDau; // chi so cua mang can sao luu
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    /* truong hop mang l dai hon mang r */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    /*nguoc lai*/
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
/* merge sort thu hien chia mang ra va gop lai */
void mergeSort(int arr[], int diemDau, int diemCuoi)
{
	if (diemDau < diemCuoi)
    {
        int giua = diemDau+(diemCuoi-diemDau)/2;
        mergeSort(arr, diemDau, giua);
        mergeSort(arr, giua+1, diemCuoi);
        merge(arr, diemDau, giua, diemCuoi);
    }
}
 
/* Hàm in gia tri cua mang */
void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	int a[] = {7,-3,5,4,2,0,-1,-2};
    int n=9;
 
    mergeSort(a, 0, 8);
 
    printf("\nSorted array is \n");
    printArray(a, n);
	return 0;
}
