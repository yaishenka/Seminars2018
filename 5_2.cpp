/** @author Yaishenka
    @date 05.09.2018. */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

template<typename T>
class Stack {
    public:
        Stack();
        ~Stack();

        template<typename T1>
        friend std::ostream& operator<<(std::ostream& os, Stack<T1>& stack);

        size_t capacity() const {return _capacity; }
        size_t busy() const {return _busy; }

        T pop_back();
        void push_back(T a);

    private:
        void resize();

        size_t _busy;
        size_t _capacity;
        size_t _tail;

        T* _buffer;
};

template<typename T>
Stack<T>::Stack() : _capacity{2}, _busy{0}, _tail{0} {
    _buffer = new T[2];
}

template<typename T>
Stack<T>::~Stack() {
    delete(_buffer);
}

template<typename T>
T Stack<T>::pop_back() {
    if (!_busy) {
        return -1;
    }
    _busy--;
    return _buffer[--_tail];
}

template<typename T>
void Stack<T>::push_back(T a) {
    if (_capacity == _busy) {
        resize();
    }
    _buffer[_tail++] = a;
    _busy++;
}

template<typename T>
void Stack<T>::resize() {
    T* newbuf = new T[_capacity * 2];
    for (size_t i(0); i < _tail; ++i) {
        newbuf[i] = _buffer[i];
    }
    _capacity *= 2;
    delete (_buffer);
    _buffer = newbuf;
}

template<typename T>
std::ostream& operator<<(std::ostream& os, Stack<T>& stack) {
    for (int i{0}; i < stack.busy(); ++i) {
        os << stack._buffer[i] << " ";
    }
    return os;
}





int main() {
    Stack<int> stack;
    stack.push_back(1);
    std::cout << stack << std::endl;
    stack.push_back(2);
    std::cout << stack << std::endl;
    stack.push_back(3);
    std::cout << stack << std::endl;
    stack.push_back(4);
    std::cout << stack << std::endl;
    stack.push_back(5);
    std::cout << stack << std::endl;
    stack.push_back(6);
    std::cout << stack << std::endl;
    std::cout << stack.pop_back();
    std::cout << stack.pop_back();
    std::cout << stack.pop_back();
    std::cout << stack.pop_back();
    std::cout << stack.pop_back();
    std::cout << stack.pop_back();
    std::cout << stack << std::endl;
    return 0;
//    string str1,str2,ans;
//    int position(0);
//    int position2(0);
//    cin>>str1>>str2;
//    Deque stack;
//    bool canwego(true);
//    while (canwego==true and position2<str2.size()){
//        if (position<=str1.size()) {
//            if (str1[position]==str2[position2]) {
//                ans+=str1[position];
//                position2++;
//                position++;
//            } else {
//                if (stack.what_up()==str2[position2]) {
//                    ans+=stack.pop_front();
//                    position2 += 1;
//                } else {
//                    stack.push_front(str1[position]);
//                    position +=1 ;
//                }
//            }
//        } else {
//            if (stack.givesize()==0 || stack.what_up()!=str2[position2]) {
//                canwego=false;
//            } else {
//                ans+=stack.pop_front();
//                position2+=1;
//            }
//        }
//    }
//
//
//
//    if (ans==str2) {
//        cout<<"YES";
//    } else cout<<"NO";
}





