//Find the maximum and minimum element in an array
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n=5;
    int arr[n]={1,4,232,52,2};
    int min=arr[0],max=arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
        else if (arr[i]<min)
        {
            min=arr[i];
        }
        
    }
    cout<<max<<" "<<min;
    return 0;
}


// #include <iostream>
// using namespace std;
// void printarr(int arr[], int size)
// {

//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// void check(int arr[],int &min, int &max,int size){
    
//       max=arr[0];
//       min=arr[0];
    
//     for (int i = 0; i <size ; i++)
//     {
//         if (arr[i]>max)
//         {
//             max=arr[i];
//         }
//       else if (arr[i]<min)
//         {
//             min=arr[i];
//         }
        
//     }
    
// }
// int main(int argc, char const *argv[])
// {
//     int arr[]={32,43,52,564,1,5,0,10,-1};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     int min,max;
//     printarr(arr,size);
//     cout<<endl;
//     check(arr,min,max,size);
//     cout<<"the maximum element is "<<max<<endl;
//     cout<<"the minimum element is "<<min<<endl;
//     return 0;
// }
