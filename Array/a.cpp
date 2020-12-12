#include<bits/stdc++.h>
using namespace std;


int main()
{    int t;
     cin>>t;
     while(t)

     { int n;
       cin>>n;
       int arr[n];
       for( int i=0; i<n; i++)
        cin>>arr[i];

       int meh=0;
       int msf=0;
       for( int i=0; i<n; i++)
    {    meh+=arr[i];
         if(meh<arr[i])
            meh=arr[i];
         if(meh>msf)
             msf=meh;
    }
    cout<< msf<<endl;


     t--;
     }



}
