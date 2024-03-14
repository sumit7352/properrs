#include <bits/stdc++.h>
using namespace std;
int secondlarge(int arr[],int n){
    int res=-1,largest=0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i]>arr[largest])
        {
            res=largest;
            largest=i;
        }
        else if (arr[i]!=arr[largest])
        {
            if (res==-1 || arr[i]>arr[res])
            {
                res=i;
            }
        }
        
    }
    return arr[res];
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cout << "Given by array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << " 2nd largest element of array :-" <<secondlarge(arr, n);
    return 0;
}