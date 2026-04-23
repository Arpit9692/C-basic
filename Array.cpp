#include <iostream>

using namespace std;

void printArray (int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
      cout << endl<< arr[3];    
}

int main(){
    int numbers[] ={10,20,30,40,50};
    int size=5;
    printArray(numbers,size);
    return 0;
}