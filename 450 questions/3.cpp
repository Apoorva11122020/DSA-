//Kth smallest element
#include <iostream>
using namespace std;
void insertionsort(int *arr,int n){
    int j,key;
    for (int i = 1; i <= n-1; i++)
    {
        key=arr[i];
        j=i-1;
     while (j>=0&&arr[j]>key)
     {
         arr[j+1]=arr[j];
         j--;
     }
     arr[j+1]=key;
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
      int k;
      cin>>k;
      insertionsort(arr,n);
      cout<<arr[k-1];
    return 0;
}
