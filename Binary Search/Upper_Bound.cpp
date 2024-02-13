/*
        Upper_Bound():

        1 : First Element > X
        2 : Number of Element <= X
        
        Ex;
        index = 0  1  2  3  4  5  6
        arr[] = {1, 3, 5, 5, 7, 7, 9}
        
        ub(1) = 1
        ub(5) = 4
        ub(6) = 4
        ub(10) = 7
*/
#include <iostream>
using namespace std;

typedef long long ll;

int N, target;
int arr[100100];

int check(int mid)
{
        if(arr[mid] > target) return 1; //strictly greater than target

        return 0;
}
int findUpperBound(int N, int arr[], int target)
{
        int low = 0, high = N-1;
        int index = N; // default ans = N

        while(low <= high)
        {
                int mid = low + (high - low) / 2;

                if(check(mid))
                {
                        index = mid;
                        high = mid - 1;
                }
                else low = mid + 1;
        }
        return index;
}
int main()
{
        cin >> N;
        for(int i=0; i<N; cin >> arr[i++])

        target = 10; 

        cout << findUpperBound(N, arr, target);
	
	return 0;
}