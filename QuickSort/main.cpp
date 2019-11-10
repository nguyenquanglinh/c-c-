#include <iostream>

void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}
int partition (int arr[], int diemDau, int diemCuoi)
{
    int pivot = arr[diemCuoi];    // diemChot
    int left = diemDau;
    int right = diemCuoi - 1;
    while(true){
        while(left <= right && arr[left] < pivot) left++;/*lon nhat doan tu trai sang*/
        while(right >= left && arr[right] > pivot) right--;/*nho nhat doan tu phai ve*/
        if (left >= right) break;
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    swap(arr[left], arr[diemCuoi]);
    return left;
}
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
void quickSort(int arr[], int diemDau, int diemCuoi)
{
    if (diemDau < diemCuoi)
    {
        /* pi vi tri phan tu duoc chon la chot */
        int chot = partition(arr, diemDau, diemCuoi);
 
        
        quickSort(arr, diemDau, chot - 1);
        quickSort(arr, chot + 1, diemCuoi);
    }
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int arr[] = {10, 80, 30, 90, 40, 50, 70};
    int n = 6;
    quickSort(arr, 0, 6);
    printf("Sorted array: \n");
    printArray(arr, n);
	return 0;
}
