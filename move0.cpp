#include <bits/stdc++.h>
using namespace std;
/*void movezero(int arr[], int n)
{
    for (int i = 0; i < n; i++){
        if (arr[i] == 0)
        {
            for (int j = i + 1; j < n; j++)
    
                if (arr[j] != 0)
        
                    swap(arr[i], arr[j]);
                
        }
    }
}*/
void movezero(int arr[], int n)
{
	int count=0;
    for (int i = 0; i < n; i++)
	{
		if (arr[i]!=0)
		{
			swap(arr[i],arr[count]);
			count++;
		}
		
	}
	
}

int main()
{
    int arr[] = {1, 6, 3, 0, 5,0,4}, n = 7;
    cout << "Given by array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    movezero(arr, n);
    cout << "move0 the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}