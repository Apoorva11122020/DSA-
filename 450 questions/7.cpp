#include <iostream>
using namespace std;
void cycle(int arr[],int n){
    int temp;
    for (int i = n-1; i > 0; i--)
    {
        temp=arr[i-1];
        arr[i-1]=arr[i];
        arr[i]=temp;
    }
    
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
        cycle(arr,n);
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
