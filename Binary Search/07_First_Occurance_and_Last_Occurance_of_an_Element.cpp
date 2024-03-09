#include "bits/stdc++.h"
using namespace std;

int check(vector<int> &V, int mid, int target)
{
        if(V[mid] == target) return 1;

        else if(V[mid] > target) return 2;

        else return 0;
}
int lastOccurance(vector<int> &V, int target)
{
        int N = V.size();
        int low = 0, high = N-1;
        int ans = -1;

        while(low <= high)
        {
                int mid = low + (high - low) / 2;

                if(int flag = check(V, mid, target))
                {
                        if(flag == 1) 
                        {
                                ans = mid;
                                low = mid + 1;
                        }
                        else high = mid - 1;
                }
                else low = mid +1;
        }
        return ans;
}
int firstOccurance(vector<int> &V, int target)
{
        int N = V.size();
        int low = 0, high = N-1;
        int ans = -1;

        while(low <= high)
        {
                int mid = low + (high - low) / 2;

                if(int flag = check(V, mid, target))
                {
                        if(flag == 1) ans = mid;

                        high = mid - 1;
                }
                else low = mid + 1;
        }
        return ans;
}
int main()
{
        int N;
        cin >> N;

        vector<int> V(N);
        for(int i=0; i<N; i++) cin >> V[i];

        int target;
        cin >> target;

        cout << "First Occurance: " << firstOccurance(V, target) << "\n";
        cout << "Last Occurance: " << lastOccurance(V, target);

	return 0;
}