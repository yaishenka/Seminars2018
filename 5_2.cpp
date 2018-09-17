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

        T top();
        T pop();
        void push(T a);

    private:
        void resize();

        size_t _busy;
        size_t _capacity;
        size_t _tail;

        T* _buffer;
};

bool isStackAnagram(std::string w1, std::string w2) {
    Stack<char> stack{};

    size_t firstIt{0};
    size_t secondIt{0};

    std::string ans;

    bool canContinue{true};

    while (canContinue) {
        if (firstIt < w1.size()) {
            if (w1[firstIt] == w2[secondIt]) {
                ans += w1[firstIt];
                firstIt++;
                secondIt++;
            } else {
                if (stack.top() == w2[secondIt]) {
                    ans += stack.pop();
                    secondIt++;
                } else {
                    stack.push(w1[firstIt++]);
                }
            }
        } else {
            if (!stack.busy() || stack.top() != w2[secondIt]) {
                canContinue = false;
            } else {
                ans += stack.pop();
                secondIt++;
            }
        }
    }

    return ans == w2;
}

int main() {
    std::string str1, str2;

    std::cin >> str1 >> str2;
    std::cout << (isStackAnagram(str1, str2) ? "YES" : "NO");

    return 0;
}

template<typename T>
Stack<T>::Stack() : _capacity{2}, _busy{0}, _tail{0} {
    _buffer = new T[2];
}

template<typename T>
Stack<T>::~Stack() {
    delete(_buffer);
}

template<typename T>
T Stack<T>::top() {
    if (!_busy) {
        return -1;
    }
    return _buffer[_tail-1];
}

template<typename T>
T Stack<T>::pop() {
    if (!_busy) {
        return -1;
    }
    _busy--;
    return _buffer[--_tail];
}

template<typename T>
void Stack<T>::push(T a) {
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





