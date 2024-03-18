/*
        Search space: 
        When no wall is there to paint i.e. low = 0 sec;
        When only 1 painter going to paint all the walls i.e. high = sum(Arr[i])
        
        check(mid) = Can we complete painting <= mid sec sing <= k painters?
*/
#include <iostream>
using namespace std;

typedef long long ll;

int N, K;
int arr[100100];

int check(int mid)
{
        int numberOfPainter = 0;
        int timeLeft = 0;

        for(int i=0; i<N; i++)
        {
                if(timeLeft >= arr[i]) timeLeft -= arr[i];

                else
                {
                        numberOfPainter++;
                        if(numberOfPainter > K) return 0;
                        timeLeft = mid;

                        if(timeLeft >= arr[i]) timeLeft -= arr[i];

                        else return 0;
                }
        }
        return 1;
}
int createPartition(int N, int arr[])
{
        int low = 0, high = 0;
        for(int i=0; i<N; i++) high += arr[i];
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
        for(int i=0; i<N; i++) cin >> arr[i];

        cout << createPartition(N, arr);

        return 0;
}
