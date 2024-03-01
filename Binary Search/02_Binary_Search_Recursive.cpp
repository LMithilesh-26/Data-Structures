#include "bits/stdc++.h"
using namespace std;

int binarySearch(int N, int arr[], int low, int high, int target)
{
	if(low > high) return -1;

	int mid = low + (high - low) / 2;

	if(arr[mid] == target) return mid;

	else if(arr[mid] > target) return binarySearch(N, arr, low, mid - 1, target);

	else return binarySearch(N, arr, mid + 1, high, target);
}
int main()
{
	int N;
	cin >> N;

	int arr[N];
	for(int i=0; i<N; i++) cin >> arr[i];
	
	int search;
	cin >> search;
	
	int low = 0, high = N-1;
	cout << binarySearch(N, arr, low, high, search);

	return 0;
}