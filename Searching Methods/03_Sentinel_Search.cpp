/*
	The sentinel search is used to avoid any out-of-bounds comparisons.
	But there is no additional comparison made specifically for the index of the element being searched.

	In this search, the last element of the array is replaced with the element to be searched.
	Then the linear search is performed on the array without checking whether the current index is inside the index range 
	of the array or not because the element to be searched will definitely be found inside the array even if it was not present 
	in the original array since the last element got replaced with it. 
	So, the index to be checked will never be out of the bounds of the array. 

	The number of comparisons in the worst case there will be (N + 2).
*/

#include "iostream"
using namespace std;

int main()
{
	int N;
	cin >> N;

	int arr[N];
	for(int i=0; i<N; i++) cin >> arr[i];

	int search;
	cin >> search;
	
	// the last element of the array is replaced with the element to be searched
	int last = arr[N-1];
	arr[N-1] = search;
	
	// then the linear search is performed on the array
	int i = 0;
	while(arr[i] != search) i++;
	
	if(i < N - 1) cout << "Element Found at " << i << "th Index. ";
	
	else if(i == N-1 && last == search) cout << "Element Found at " << i << "th Index. ";
	
	else cout << "Element not found in the Array.";
	
	return 0;
}
