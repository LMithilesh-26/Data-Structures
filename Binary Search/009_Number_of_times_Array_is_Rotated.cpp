/*
        Ex: Sorted Array
        arr[] = {1, 2, 3, 5, 9} 
        
        1st Rotation arr[] = {9, 1, 2, 3, 5}
        index =  0  1  2  3  4
        arr[] =  {9, 1, 2, 3, 5}
        ans = 1

        2nd Rotation arr[] = {5, 9, 1, 2, 3}
        index =  0  1  2  3  4
        arr[] =  {5, 9, 1, 2, 3}
        ans = 2
        
        3rd Rotation arr[] = {3, 5, 9, 1, 2}
        index =  0  1  2  3  4
        arr[] =  {3, 5, 9, 1, 2}
        ans = 3

        ans = Index of the smallest element.

                    0  0  1   1   1 
        arr[] = {5, 9, 1, 2, 3}

        fun() -> arr[0] > arr[mid]
*/
#include <iostream>
using namespace std;

typedef long long ll;

int N;
int arr[100100];

int check(int mid)
{
        if(arr[0] > arr[mid] ) return 1;

        return 0;
}
int arrayRotated(int N, int arr[])
{
        int low = 0, high = N-1;
        int ans = 0; // default case -> array not rotated.

        while(low <= high)
        {
                int mid = low + (high - low) / 2;

                if(check(mid))
                {
                        ans = mid;
                        high = mid - 1;
                }
                else low = mid + 1;
        }
        return ans;
}
int main()
{
        cin >> N;
        for(int i=0; i<N; i++) cin >> arr[i];

        cout << arrayRotated(N, arr);
	
	return 0;
}
