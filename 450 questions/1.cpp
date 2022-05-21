//reverse the array
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int a[n]={1,2,3,4,5};
    int b[n];
    for (int i = 0; i <5; i++)
    {
        b[i]=a[n-i-1];
       
    }
    for (int i = 0; i < n; i++)
    {
         cout<<b[i]<<" ";
    }
    
    return 0;
}


// #include <iostream>
// using namespace std;
// void printvalue(int arr[], int size)
// {

//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// void reversevalue(int arr[], int start, int end)
// {

//     int temp;
//     while (start < end)
//     {
//         temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
// }
// int main(int argc, char const *argv[])
// {
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     cout << "the given array is " << endl;
//     printvalue(arr, size);
//     cout << endl;
//     reversevalue(arr, 0, size - 1);
//     cout << "the reverse array is " << endl;
//     printvalue(arr, size);
//     cout << endl;
//     return 0;
// }
