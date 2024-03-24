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
        Stack<int> St;
        cout << "Size : " << St.size() << endl;     // 0
        cout << St.top() << endl;                   // Stack is Empty
        St.pop();                                   // Stack is Empty

        St.push(10); // 10
        St.push(20); // 20 10
        St.push(30); // 30 20 10
        St.push(40); // 40 30 20 10
        St.push(50); // 50 40 30 20 10
        St.push(60); // 60 50 40 30 20 10

        cout << "Size : " << St.size() << endl; // 6

        cout << St.top() << endl;       // 60
        St.pop();                       // 50 40 30 20 10
        cout << St.top() << endl;       // 50
        St.pop();                       // 40 30 20 10
        cout << St.top() << endl;       // 40
        St.pop();                       // 30 20 10

        cout << "Size : " << St.size() << endl; // 3


        Stack<char> Sc;
        cout << "Size : " << Sc.size() << endl; // 0

        Sc.push('A'); // A
        Sc.push('B'); // B A
        Sc.push('C'); // C B A
        Sc.push('D'); // D C B A
        Sc.push('E'); // E D C B A
        Sc.push('F'); // F E D C B A

        cout << "Size : " << St.size() << endl; // 6

        cout << Sc.top() << endl;       // F
        Sc.pop();                       // E D C B A
        cout << Sc.top() << endl;       // E
        Sc.pop();                       // D C B A
        cout << Sc.top() << endl;       // D
        Sc.pop();                       // C B A

        cout << "Size : " << Sc.size() << endl; // 3
}
