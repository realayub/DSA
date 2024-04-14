// Bubble sort in cpp

#include <iostream>
using namespace std;
int flag;

void bubbleSort(int array[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        flag=0;
        for (int j = 0; j < size - i - 1; j++)
        {

            // comparing two adjacent elements
            if (array[j] > array[j + 1])
            {
                // swapping elements if not in the order
                int temp = array[j];  
                array[j] = array[j+1];
                array[j + 1] = temp;
                flag=1;
            }
        }
        if (flag==0){
            break;
        }
    }
}

//printing array

void printArray(int array[],int size){
    for(int j=0;j<size;j++){
        cout<<"\n"<<array[j]; 
    }
    cout<<"\n";
}

int main() {
  int data[] = {-2, 45, 0, 11, -9};
  
  // find array's length
  int size = 5;
  
  bubbleSort(data, size);
  
  cout << "Sorted Array in Ascending Order:\n";  
  printArray(data, size);
}
