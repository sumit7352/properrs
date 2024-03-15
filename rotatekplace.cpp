#include <bits/stdc++.h>
using namespace std;
void Rotate(int arr[],int n){
int temp=arr[0];
for (int i = 1; i < n; i++)
{
    arr[i-1]=arr[i];
}
arr[n-1]=temp;
}
void rotateDplace(int arr[],int n,int d){
    for (int i = 0; i < d; i++)
    {
        Rotate(arr,n);
    }
    
}
int main()
{
    int arr[]={1,2,3,4,5},n=5,d=2;
    cout << "Given by array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

     rotateDplace(arr,n,d);
    cout << "Rotate by the array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}