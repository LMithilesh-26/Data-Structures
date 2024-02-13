/*
        Ex: Find index of the Peak Element.
        Bitonic Arrays(First Increasing and Then Decreasing)
                 
        index = 0  1  2  3   4  5  6
        arr[] = {1, 5, 9, 11, 9, 2, 1}
                   {0, 0, 0, 1,  1,  1, 1}
        ans = 3
        
        #Default gets hit only when no (1) is present.
        
        fun() -> arr[mid] > arr[mid + 1]
*/
#include <iostream>
using namespace std;

typedef long long ll;

int N;
int arr[100100];

int check(int mid)
{
        if(mid == N-1) return 1; // for last element

        if(arr[mid] > arr[mid+1]) return 1;

        return 0;
}
int peakElement(int N, int arr[])
{
        int low = 0, high = N-1;
        int ans = 0; // default case -> doesn't matter 0 / -1

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

        cout << peakElement(N, arr);
    
    return 0;
}