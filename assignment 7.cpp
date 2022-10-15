#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool cmp(long long l,long long n){
	return l>n;
}

int main()
{
    long long l, n;
    int arr[600];

    while (cin >> l >> n) 
    {
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        
        sort(arr, arr + n, cmp);
        int sum = l, i;
        
        for (i = 0; i < n; i++)
        {
            sum = sum - arr[i];
            if (sum < 0)
                break;
        }
        if (sum > 0)
            cout << "impossible"<<"\n";
        else
            cout << ++i<< "\n";
    }
    return 0;
}
