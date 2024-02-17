#include<iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	
	int* num = NULL;
	num = new int[N];

	for(int i=0; i<N; i++) cin >> num[i];

	int search;
	cin >> search;
	
	for(int i=0; i<N; i++)
	{
		if(num[i] == search)
		{
			cout << "\nElement FOUND in the Array.";
			break;
		}
		else if(num[i] > search)
		{
			cout << "\nElement NOT FOUND in the Array.";
			break;
		}
	}
	return 0;
}
