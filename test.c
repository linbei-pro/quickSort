
#include<stdio.h>
#include<stdlib.h>


 void quickSort(int arr[], int left, int right)
 {
    if (left < right)
    {
        int pos = partition(arr, left, right);
        quickSort(arr, left, pos - 1);
        quickSort(arr, pos + 1, right);
    }
 }
 
 
 
 int partition(int arr[], int left, int right)
 {
    int base = arr[left];
    while (left < right) 
    {
        while (left < right && arr[right] >= base) 
        {
            right--;
        }
        arr[left] = arr[right];
        while (left < right && arr[left] <= base) 
        {
            left++;
        }
        arr[right] = arr[left];
    }
    arr[left] = base;
    return left;
  }


int main() {
	int arr[10] = {7,8,6,4,2,1,3,5,9,3};

	
	quickSort(arr, 0, 9);

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}