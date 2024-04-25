#include <stdexcept>

#ifndef QUEUE_H
#define QUEUE_H

template <typename T>
class Queue {
private:
    T* data;
    int capacity;
    int frontIndex;
    int rearIndex;
    int size;

public:
    explicit Queue(int capacity = 10) : capacity(capacity), frontIndex(0), rearIndex(-1), size(0) {
        data = new T[capacity];
    }

    ~Queue() {
        delete[] data;
    }

    void offer(const T& item) {
        if (isFull()) {
            throw std::runtime_error("Queue is full");
        }
        rearIndex = (rearIndex + 1) % capacity;
        data[rearIndex] = item;
        size++;
    }

    T poll() {
        if (isEmpty()) {
            throw std::runtime_error("Queue is empty");
        }
        T item = data[frontIndex];
        frontIndex = (frontIndex + 1) % capacity;
        size--;
        return item;
    }

    T peek() const {
        if (isEmpty()) {
            throw std::runtime_error("Queue is empty");
        }
        return data[frontIndex];
    }

    bool isEmpty() const {
        return size == 0;
    }

    bool isFull() const {
        return size == capacity;
    }
};

#endif