#include "iostream"
#include "stack"
using namespace std;

/*  FUNCTIONS ASSOCIATED WITH STACK : 
	1 : empty() : returns Whether the Stack is Empty or not.
	2 : size() : returns the size of the Stack.
	3 : top() : Returns the top most element of the Stack.
	4 : push() : Adds element at the top of the Stack.
	5 : pop() : Deletes the Top most Element of the Stack.
*/
int main()
{
	stack<int> S;
	
	S.push(10);
	S.push(20);
	S.push(30);
	S.push(40);
	S.push(50);
	
	cout << "Size of the Stack: " << S.size() << "\n";
	cout << "Printing Elements: ";
	
	while(!S.empty())
	{
		cout << S.top() << " ";
		S.pop();
	}
	cout << "\n";
	cout << "Size of the Stack: " << S.size();

	return 0;
}
