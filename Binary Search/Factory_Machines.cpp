#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int check(ll mid, ll t, vector<ll> &arr)
{
        ll totalProducts = 0;
        for(ll it: arr)
        {
                totalProducts += (mid / it); 
                
                if(totalProducts >= t) return 1;
        }
        return 0;
}
void createMachines(ll N, ll t, vector<ll> arr)
{
        ll low = 0, high = t * arr[0];
        ll ans = 0; 

        while(low <= high)
        {
                // cout << "Low = " << low << " High = " << high;
                ll mid = low + (high - low) / 2;
                // cout << " Mid = " << mid << endl;

                if(check(mid, t, arr))
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

        ll N = 0, t = 0;
        cin >> N >> t;

        vector<ll> arr(N);
        for(long long i=0; i<N; i++) cin >> arr[i];

        createMachines(N, t, arr);

        return 0;
}