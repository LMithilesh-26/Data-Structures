#include "iostream"
#include "cstring"
using namespace std;

template<class T>
#define Max 100100

class Stack
{
        private:
                T arr[Max];
                int topIndex;
        public:
                Stack()
                {
                        topIndex = -1;
                        memset(arr, 0, sizeof(arr));
                }
                void push(T value) // Adds the value at the Top of the Stack -> O(1)
                {
                        ++topIndex;
                        arr[topIndex] = value;
                }
                bool empty() // Returns whether the Stack is Empty –> O(1)
                {
                        if(topIndex == -1) return true;

                        return false;
                } 
                T top() // Returns the top element of the Stack – > O(1) 
                {
                        if(!empty())
                        {
                                return arr[topIndex];
                        }
                        else cout << "Stack is Empty";
                        return -1;
                }
                void pop() // Deletes the top value of the Stack –> O(1) 
                {
                        if(!empty()) --topIndex;

                        else cout << "Stack is Empty." << "\n";
                }
                int size() // Returns the size of the Stack –> O(1) 
                {
                        return topIndex + 1;
                }
};
int main()
{
        Stack<int> St;
        cout << "Size : " << St.size() << endl;    // 0
        cout << St.top() << endl;                  // Stack is Empty
        St.pop();                                  // Stack is Empty

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
        cout << "Size : " << Sc.size() << endl;     // 0

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
