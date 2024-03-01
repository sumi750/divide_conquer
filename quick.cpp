#include<iostream>
using namespace std;

// function to swap two elements
	void swap(int arr[], int i, int j)
	{
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	int partition(int arr[], int low, int high)
	{
		int pivot = arr[high];  // Pivot Element
		int i = (low - 1);

		for (int j = low; j <= high - 1; j++) {
			if (arr[j] < pivot) {
				i++;
				swap(arr, i, j);
			}
		}
		swap(arr, i + 1, high);
		return (i + 1);
	}
	// low:  Starting index,
	// high:  Ending index
	void quickSort(int arr[], int low, int high)
	{
		if (low < high) {
			int pi = partition(arr, low, high);
			quickSort(arr, low, pi - 1);
			quickSort(arr, pi + 1, high);
		}
	}
	

	void printArr(int arr[], int size)
	{
		for (int i = 0; i < size; i++) {
			cout<<arr[i] << " ";
		}
	}



int main()
{
    int size;
    cout<<"Enter the value of size ";
    cin>>size;
		
    cout<<"Enter the value of array : ";
    int arr[size];

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"Unsorted araay : ";
    printArr(arr,size);     // before sorting Array
	quickSort(arr, 0, size-1);   // Quick sorting Funciton call
	cout<<"Sorted array ";   
	printArr(arr,size);     // After sorting Array 
 
}