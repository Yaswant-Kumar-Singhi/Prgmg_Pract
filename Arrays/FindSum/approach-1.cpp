
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size;
		cin >> size;

		int *arr = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}

		int ans = sum(arr, size);

		cout << ans << endl;
		delete [] arr;
	}
}

int sum(int arr[], int size)
{

        int arrsum=0;
        for(int i=0;i<size;i++)
           arrsum+=arr[i];
        return arrsum;
}
