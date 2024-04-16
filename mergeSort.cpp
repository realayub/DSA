#include<iostream>
using namespace std;


void merge(int a[], int lb, int mid, int ub){

    int i=lb;
    int j=mid+1;
    int temp[7];
    int count=0;
    

    while(i<=mid && j<=ub){
        if (a[i] <= a[j])   {

            temp[count]=a[i];
            i++;
                    
        }
        else {
            temp[count]=a[j];
            j++;
        }
        count++;
    }

    if(i>mid){
        while(j<=ub){
            temp[count]=a[j];
            j++;
            count++;
            
        }
    }
    else{ //j>ub
    
    while (i<=mid){
        temp[count]=a[i];
        i++;
        count++;
    }
    int counter = 0;
    for (int i = lb; i <= ub; i++) {
        a[i] = temp[counter];
        counter++;
    }   
    
    }
}


void mergeSort(int a[], int lb, int ub){
    if (lb<ub){
       int mid=(lb+ub)/2;

       mergeSort(a,lb,mid);
       mergeSort(a,mid+1,ub);

       //merge the sorted arrays

       merge(a,lb,mid,ub);

    }
}




void printArray(int a[], int size) {
    for (int i = 0; i < size; i++){
        cout << a[i] << " ";
    
    }
    cout << endl;
}


// Driver program
int main() {
    int a[] = {6, 4, 12, 10, 9, 1};
    int size = sizeof(a) / sizeof(int);

    mergeSort(a, 0, size - 1);

    cout << "Sorted array: \n";
    printArray(a, size);
    return 0;
}