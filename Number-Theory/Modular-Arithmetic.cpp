/*
	A & b are said to be Congruent to each other under modulo N.
	Congruent means if they leave same remainder when divided by N.
	
	13 % 7 = 6
	41 % 7 = 6
	
	Ex: 
	(13 + 35 + 5) % 7 = (53 % 7) = 4
	(13%7 + 35%7 + 5%7) % 7 = (6 + 0 + 5) % 7 = (11 % 7) = 4
	
	If we change 13 with 41
	(41 + 35 + 5) % 7 = (81 % 7) = 4 
	The result's won't change.
	--------------------------------------------------------------------------

	Same happens in the case of multiplication.
	(13 * 4) % 7 = 3
	(41 * 4) % 7 = 3

	If, a * b = c. Then 
	(a % N) * (B % N) Cong (c % N)

	Ex: 13 * 9 = 117, N = 5
	(13 % 5) * (9 % 5) Cong (117 % 5)
	(3) * (4) Cong (2) (mod 5)
	12 Cong 2 (mod 5)
	-------------------------------------------------------------------------

	A cong B (Mod N)
	A^k cong B^K
	-------------------------------------------------------------------------

	A & B are congruent (Mod N), then 
	A - B is Divisible by N

	Ex:
	23 % 4 = 3
	43 % 4 = 3
	43 - 23 = 20 % 4 = 0
	------------------------------------------------------------------------

	Ex: 2573 * 34268.
	Find the last Digit.
	
	(2573 * 34268) % 10
	(2573 % 10 * 34268 % 10) % 10
	(3 * 8) % 10
	24 % 10 = 4
	-----------------------------------------------------------------------

	Ex : Find 29^10 (mod 3)
	29 % 3 = 2
	
	Since, 29 cong 2 (mod 3)
	Instead of calculating 29^10, calculate 2^10
	(2 ^ 10) % 3 = (1024) % 3 = 1
	------------------------------------------------------------------------
*/
#include<bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;

#define ll long long

ll modAdd(ll a, ll b)
{
	return (a % mod + b % mod) % mod;
}
ll modSub(ll a, ll b)
{
	return (a % mod - b % mod + mod) % mod;
}
ll modMul(ll a, ll b)
{
	return ((a % mod) * (b % mod)) % mod;
}
void solve() 
{
	cout << "write code here" << "\n";
}
inline void debugMode() 
{
	#ifndef ONLINE_JUDGE

	freopen("INPUT.txt", "r", stdin);
	freopen("OUTPUT.txt", "w", stdout);

	#endif
}
int main()
{
	debugMode();

	ll tc = 1;
	cin >> tc;

	while(tc--)
	{
		solve();
	}
	
	return 0;
}
