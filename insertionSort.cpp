#include<iostream>
using namespace std;
int temp;

void printArray(int a[], int size){
    for (int i=0;i<size;i++){
        cout<<a[i]<<",";
    }
    cout<<endl;
}

void insertionSort(int a[], int size){
    
        for (int i=1; i<size; i++){
            temp=a[i];
            int j=i-1;
        while(j>=0 && a[j]>temp){
            a[j+1] = a[j];
            j--;
       }

       a[j+1]=temp;

        }

}

int main() {
  int data[] = {9, 5, 1, 4, 3};
  int size = sizeof(data) / sizeof(data[0]); 
  insertionSort(data, size);
  cout << "Sorted array in ascending order:\n";
  printArray(data, size);
}