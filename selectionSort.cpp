//SelectionSort in cpp

#include <iostream>
using namespace std;
int temp;

void selectionSort(int array[], int size)
{
    //for iteration 
    for (int i = 0; i < size - 1; i++)
    {
        int min = i;   //marking the first element as minimum
        for (int j = i + 1; j < size; j++)  //for comparision within the array
        {
            if (array[j] < array[min])     //
                min = j;
        }
        if (min != i)
        {
            int temp = array[i];
            array[i] = array[min];
            array[min] = temp;
        }
    }
}
 

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << " " << array[i];
    }
    cout<<"";

}

// driver code
int main()
{
    int data[] = {20, 12, 10, 15, 2};
    int size = sizeof(data) / sizeof(data[0]);
    selectionSort(data, size);
    cout << "Sorted array in Acsending Order:\n";
    printArray(data, size);
}