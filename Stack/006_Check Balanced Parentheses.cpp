#include "iostream"
#include "vector"
using namespace std;

template<class T>

class Stack
{
        private:
                vector<T> V;
        public:
                Stack() {}
                void push(T value) 
                {
                        V.push_back(value);
                }
                bool empty() 
                {
                        if(V.size() == 0) return true;

                        return false;
                } 
                T top() 
                {
                        if(!empty())
                        {
                                return V[V.size() - 1];
                        }
                        else cout << "Stack is Empty";
                        return -1;
                }
                void pop() 
                {
                        if(!empty()) V.pop_back();

                        else cout << "Stack is Empty." << "\n";
                }
                int size()
                {
                        return V.size();
                }
};
bool check(char C, char top)
{
        if(C == ')' && top == '(') return true;

        else if(C == '}' && top == '{') return true;

        else if(C == ']' && top == '[') return true;

        return false;
}
int main()
{
        string s;
        cin >> s;

        int N = s.size();
        Stack<char> St;

        for(int i=0; i<N; i++)
        {
                if(s[i] == '(' || s[i] == '{' || s[i] == '[') St.push(s[i]);

                else 
                {
                        if(St.empty()) 
                        {
                                cout << "InValid Parentheses.";
                                return 0;
                        }
                        else if(!check(s[i], St.top())) 
                        {
                                cout << "InValid Parentheses.";
                                return 0;
                        }
                        else St.pop();
                }
        }
        if(St.empty()) cout << "Valid Parentheses.";

        else cout << "InValid Parentheses.";

        return 0;
}
