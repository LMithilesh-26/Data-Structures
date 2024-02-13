#include <iostream>
using namespace std;

typedef long long ll;

int findIndex(int N, int arr[])
{
        int low = 0, high = N-1;
        int index = -1;

        while(low <= high)
        {
                int mid = low + (high - low) / 2;

                if(arr[mid] == 1)
                {
                        index = mid; // potential answer
                        high = mid - 1; // search in remaining left array
                }
                else low = mid + 1;
        }
        return index;
}
int main()
{
        int N = 7;
        int arr[] = {0, 0, 0, 0, 1, 1, 1};

        cout << findIndex(N, arr);
	
	return 0;
}