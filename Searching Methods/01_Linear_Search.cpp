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

	int flag = 0;
	for(int i=0; i<N; i++)
	{
		if(num[i] == search)
		{
			flag = 1;
			cout<<"\nElement FOUND in the Array.";
			break;
		}
	}
	if(flag == 0) cout<<"\nElement NOT FOUND in the Array.";
	
	return 0;
}
