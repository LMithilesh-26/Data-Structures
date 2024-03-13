/*
        Given a number line with N points on it.  
        Place K points on the number line such that it minimizes the maximum neighbouring distance.

        Search space: 
        low = 0 
        high = max neighbour distance in the input.
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int N, K;
int arr[100100];

int check(int mid)
{
        int needed = 0;
        for(int i=1; i<N; i++)
        {
                needed += (((arr[i] - arr[i-1]) + mid - 1) / mid) - 1;
        }
        return needed <= K;
}
int minimizeDistance(int N, int arr[])
{
        int low = 0, high = 0;
        for(int i=1; i<N; i++) 
        {
                high = max(high, arr[i] - arr[i-1]);
        }
        int ans = 0; 

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
        cin >> N >> K;
        for(int i=0; i<N; i++) 
        {
                cin >> arr[i];
        }
        sort(arr, arr+N);

        cout << minimizeDistance(N, arr);

        return 0;
}