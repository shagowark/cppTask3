#include <iostream>
#include <string>
#include "Queue.h"
#include "QueueTest.h"

int main() {
    QueueTest::testAll();

    Queue<int> intQueue;

    intQueue.offer(1);
    intQueue.offer(2);
    intQueue.offer(3);

    std::cout << "Polled item: " << intQueue.poll() << std::endl;

    intQueue.offer(4);

    std::cout << "Polled item: " << intQueue.poll() << std::endl;

    Queue<std::string> stringQueue;

    stringQueue.offer("Hello");
    stringQueue.offer("World");

    std::cout << "Polled item: " << stringQueue.poll() << std::endl;

    stringQueue.offer("Task");

    std::cout << "Polled item: " << stringQueue.poll() << std::endl;

    return 0;
}
