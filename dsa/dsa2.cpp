//operations in array

#include <iostream>
using namespace std;
//traversal
void display(int arr[],int n){
     for (int i = 0; i < n; i++)
     {
         cout<<arr[i]<<" ";
     }
     
}
//insertion
int insertion(int arr[],int size,int element,int capacity,int index){
    if (size>=capacity)
    {
        return -1;
    }
    for (int i = size-1; i >=index; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
   
    return 1;
}
//deletion
void deletion(int arr[],int size,int index){
   
    for (int i = index; i < size-1; i++)
    {
        arr[i]=arr[i+1];
    }
}
int main(int argc, char const *argv[])
{
    int arr[100]={1,2,3,55,7};
    int size=5,element=46,index=3;
    display(arr,size);
    cout<<endl;
    insertion(arr,size,element,100,index);
    size++;
    display(arr,size);
    cout<<endl;
    deletion(arr,size,index);
    size--;
    display(arr,size);
    return 0;
}
