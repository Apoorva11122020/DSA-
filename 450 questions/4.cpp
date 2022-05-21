//Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo
#include <iostream>
using namespace  std;
void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

void insertionSort(int *A, int n){
    int key, j;
    for (int i = 1; i <= n-1; i++)
    {
        key = A[i];
        j = i-1;
        while(j>=0 && A[j] > key){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
}

int main(){

    
    int A[] = {0,2,1,2,0};
    int n=5;
    printArray(A, n);
    insertionSort(A,n);
    printArray(A,n);
    return 0;
}

