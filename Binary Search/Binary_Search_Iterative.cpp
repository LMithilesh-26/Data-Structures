#include <iostream>
using namespace std;

typedef long long ll;

void binarySearch(int N, int arr[], int &target)
{
        int low = 0, high = N-1;

        while(low <= high)
        {
                int mid = low + (high - low) / 2;

                if(arr[mid] == target) 
                {
                        cout << "Element found at Index: " << mid;
                        return;
                }
                else if(arr[mid] > target) high = mid - 1;

                else low = mid + 1;
        }
        cout << "Element not found.";
}
int main()
{
        int N = 8;
        int arr[] = {1, 4, 6, 20, 40, 50, 322, 4567};

        int target = 4567;

        binarySearch(N, arr, target);
	
	return 0;
}
