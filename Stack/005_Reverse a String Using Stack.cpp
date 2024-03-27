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
int main()
{
        string S;
        cin >> S;

        Stack<char> St;

        for(int i=0; i<S.size(); i++) St.push(S[i]);


        string S1 = "";
        cout << "Reverse String: ";
        while(!St.empty())
        {
                S1 += St.top();
                St.pop();
        }
        cout << S1;
        
        return 0;
}
