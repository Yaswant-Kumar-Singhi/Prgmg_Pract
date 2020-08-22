#include <bits/stdc++.h>
using namespace std;

void arrange(int *arr,int n){
    int start =0;
    int end = n-1;
    int count=0;
    for(int i=start;i<=end;i++){
        if(i!=end){
            count++;
            arr[i] = count;
            count++;
            arr[end]=count;
            end--;
            
        }else{
            count++;
            arr[end]=count;
        }
    }
    
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int *arr = new int[n];
		arrange(arr, n);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		
	}

	
}
