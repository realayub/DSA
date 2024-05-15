#include <iostream>

using namespace std;

void combination(int digits[],int n){
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                for(int l=0;l<n;l++)
                cout<<digits[i]<<digits[j]<<digits[k]<<digits[l]<<endl;
            }
        }
    }

}

int main(){
    int digits[10];
    int num_digits;

    cout<<"How many digits you want to enter";
    cin>> num_digits;

    cout << "Enter " << num_digits << " digits: ";
    for (int i = 0; i < num_digits; i++) {
        cin >> digits[i];
    }

    cout << "\nAll possible combinations of 4-digit numbers:" << endl;
    combination(digits, num_digits);

    return 0;
}