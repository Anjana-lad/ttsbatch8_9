#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n ; i++) {
        for (int j = i+1; j < n ; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[5];
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Enter numbers for array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   std::cout<< "Before sorting"<< std::endl;
  for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    // Bubble sort the array
    bubbleSort(arr, n);

    // Output the sorted array
    std::cout << "Array after bubble sort: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
