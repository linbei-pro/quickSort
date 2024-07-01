
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
 
 void swap(int *num, int i, int j) {
    int tmp = nums[i];
    nums[i] = nums[j];
    nums[j] = tmp;
 }
 
 int partition(int arr[], int left, int right)
 {
    int i=left,j=right;
    while (i < j) 
    {
        while (i < j && arr[j] >= arr[left]) 
        {
            j--;
        }
        while ( i < j && arr[i] <= arr[left]) 
        {
            i++;
        }
        swap(arr,i,j);
    }
    swap(arr,i,left);
    return i;
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
