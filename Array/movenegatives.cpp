#include<bits/stdc++.h>
using namespace std;
int main()
{     int l=0,  r, sizeOfArray;
      cin>>sizeOfArray;
      r=sizeOfArray-1;
      int arr[sizeOfArray];
      for( int i=0; i<sizeOfArray; i++)
      {   cin>>arr[i];
      }
      while(l<r)
      {    if(arr[r]>0)
            {     r--;
                  if(arr[l]<0)
                     l++;
            }
           else if( arr[l]>0 && arr[r]<0)
             {     swap(arr[l], arr[r]);
                   l++;
                   r--;
             }
           else if( arr[l]<0 && arr[r]<0)
           {    l++;
           }
     }
     for( int i=0; i<sizeOfArray; i++)
      {   cout<<arr[i];
      }
}
