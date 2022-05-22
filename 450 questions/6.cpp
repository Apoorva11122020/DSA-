//Union of two arrays
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,m;
    cin>>n>>m;
    int s[n];
    int t[m];
    for (int i = 0; i <n; i++)
    {
        cin>>s[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>t[i];
    }
    
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (s[i]==s[i+1]||s[i]==t[i]||t[i]==t[i+1])
    {
          count++;
    }
    
    }  
   cout<<(n+m)-count;
    return 0;
}
