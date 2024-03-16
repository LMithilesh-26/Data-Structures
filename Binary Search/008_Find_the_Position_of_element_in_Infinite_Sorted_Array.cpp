#include "bits/stdc++.h"
using namespace std;

#define MAX 100100

int binarySearch(int arr[], int search)
{
        int low = 0, high = 1;

        while(search > arr[high])
        {
                low = high;
                high *= 2;
        }
        while(low <= high)
        {
                int mid = low + (high - low) / 2;

                if(arr[mid] == search) return mid;

                else if(search > arr[mid]) low = mid + 1;

                else high = mid - 1;
        }
        return -1;
}
int main()
{
        int arr[MAX];
        for(int i=0; i<MAX; i++) arr[i] = i * 2;

        int search;
        cin >> search;

        cout << search << " Present at " << binarySearch(arr, search) << " Index";

        return 0;
}
