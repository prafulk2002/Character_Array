#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;
    
    int check=0;
    
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=arr[n-1-i])
        {
            check=1;
            
        }
    }

    if(check==1)
    {
        cout<<"Not Palidrome";
    }

    else{
        cout<<"Palidrome";
    }

    return 0;


}