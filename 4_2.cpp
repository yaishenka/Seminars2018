#include <iostream>
#include <string>
#include <algorithm>

template<typename t>
class Deque {
    public:
        Deque();
        ~Deque();

        size_t capacity () const {return _capacity; }

        t pop_front();
        t pop_back();

        void push_front(t a);
        void push_back(t a);

    private:
        void resize();

        size_t _busy;
        size_t _capacity;
        size_t _head;
        size_t _tail;
        t* _buffer;
};

char* commandHandler (Deque<double>* deque, int commandCount) {
    int command;
    double el;
    for (int i(0); i < commandCount; ++i) {
        std::cin >> command >> el;
        switch (command) {
            default:
                break;
            case 1:
                deque->push_front(el);
                break;
            case 2:
                if (el != deque->pop_front()) {
                    char* ans = new char [3];
                    ans[0] = 'N';
                    ans[1] = 'O';
                    ans[2] = '\0';
                    return ans;
                }
                break;
            case 3:
                deque->push_back(el);
                break;
            case 4:
                if (el != deque->pop_back()) {
                    char* ans = new char [3];
                    ans[0] = 'N';
                    ans[1] = 'O';
                    ans[2] = '\0';
                    return ans;
                }
                break;
        }
    }
    char* ans = new char [4];
    ans[0] = 'Y';
    ans[1] = 'E';
    ans[2] = 'S';
    ans[3] = '\0';
    return ans;
}

void printCString(char* str) {
    int i{0};
    while (str[i] != '\0') {
        std::cout << str[i++];
    }
}

int main() {
    auto deque = new Deque<double>();
    int n;
    std::cin >> n;
    printCString(commandHandler(deque, n));
    return 0;

}

template<typename t>
Deque<t>::Deque() : _capacity{2}, _busy{0}, _head{0}, _tail{0} {
    _buffer = new t[2];
}

template<typename t>
Deque<t>::~Deque() {
    delete(_buffer);
}

template<typename t>
t Deque<t>::pop_front() {
    t result(-1);
    if (_busy) {
        result = _buffer[_head];
        if (_head == _capacity - 1) {
            _head = 0;
        } else {
            _head++;
        }
        _busy--;
    }
    return result;
}

template<typename t>
t Deque<t>::pop_back() {
    t result(-1);
    if (_busy) {
        if (!_tail) {
            _tail = _capacity - 1;
        } else {
            _tail--;
        }
        result = _buffer[_tail];
        _busy--;
    }
    return result;
}

template<typename t>
void Deque<t>::push_front(t a) {
    if (_busy == _capacity) resize();
    if (!_head) {
        _head = _capacity - 1;
    } else {
        _head--;
    }
    _buffer[_head] = a;
    _busy++;
}

template<typename t>
void Deque<t>::push_back(t a) {
    if (_busy == _capacity)
        resize();

    _buffer[_tail] = a;
    if (_tail == _capacity - 1) {
        _tail = 0;
    } else {
        _tail++;
    }
    _busy++;
}

template<typename t>
void Deque<t>::resize() {
    t* newbuf = new t[_capacity * 2];
    if (_head < _tail) {
        for (size_t i(_head); i < _tail; ++i) {
            newbuf[i] = _buffer[i];
        }
    } else {
        for (size_t i(_head); i < _capacity; ++i) {
            newbuf[i] = _buffer[i];
        }
        for (size_t i(0); i < _tail; ++i) {
            newbuf[i + _capacity] = _buffer[i];
        }
        _tail += _capacity;
    }
    _capacity *= 2;
    delete (_buffer);
    _buffer = newbuf;
}














