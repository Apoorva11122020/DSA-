#include <iostream>
#include <algorithm>
#include <stdlib.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int arr[n];
    int maxm=-1e9;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
    int sum=0;
        for (int j = i; j < n; j++)
        {
           sum=sum+arr[j];
           if (sum>maxm)
           {
               maxm=sum;
           }
              
        }
        
    }
    cout<<maxm;
    return 0;
}
