#include<bits/stdc++.h>
using namespace std;
int largestele(int arr[],int n){
    int largest=0;
    for (int  i = 1; i < n; i++)
    {
        if (arr[i]>arr[largest])
        {
            largest=i;
        }
        
    }
    return arr[largest];
    
}
int main() {
int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
cout<<"given by a array"<<endl;
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}cout<<endl;

cout<<"Largest element of array :-"<< largestele(arr,n)<<endl;

return 0;
}