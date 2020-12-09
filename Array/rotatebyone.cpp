#include <bits/stdc++.h>
using namespace std;
void rotateByOne(int arr[], int n)
{    int last=arr[n-1];
     for( int t=n-1; t>0; t--)
     {    arr[t]=arr[t-1];
     }
     arr[0]=last;
}
int main() {
	int T;
	cin>>T;
	for( int i=0; i<T; i++)
	{    int n;
	     cin>>n;
	     int arr[n];
	     for( int j=0; j<n; j++)
	     {  cin>>arr[j];
	     }
	     rotateByOne(arr, n);
	     for( int j=0; j<n; j++)
	     {  cout<<arr[j]<<" ";
	     }
	     cout<<"\n";
	}
	return 0;
}
