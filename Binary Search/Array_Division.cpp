#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int check(ll mid, ll k, vector<ll> &arr)
{
        ll sum = 0, parts = 0;
        for(ll &it: arr)
        {
                if(sum >= it) sum -= it;

                else
                {
                        parts++;
                        sum = mid;

                        if(parts > k) return 0; // check if partitions are > k

                        if(sum >= it) sum -=it;

                        else return 0;
                }
        }
        return 1;
}
void createMachines(ll N, ll k, vector<ll> arr)
{
        ll low = 0, high = 0;
        for(int i=0; i<N; i++) high += arr[i];
        ll ans = 0; 

        while(low <= high)
        {
                ll mid = low + (high - low) / 2;

                if(check(mid, k, arr))
                {
                        ans = mid;
                        high = mid - 1;
                }
                else low = mid + 1;
        }
        cout << ans;
}
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        ll N = 0, k = 0;
        cin >> N >> k;

        vector<ll> arr(N);
        for(long long i=0; i<N; i++) cin >> arr[i];

        createMachines(N, k, arr);

        return 0;
}