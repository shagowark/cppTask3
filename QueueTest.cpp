#include "QueueTest.h"
#include "iostream"
#include <cassert>

void QueueTest::testAll() {
    testEmptyQueue();
    testOffer();
    testPoll();
    testPeek();
    std::cout << "All tests successful!" << std::endl;
}

void QueueTest::testEmptyQueue() {
    Queue<int> queue;
    assert(queue.isEmpty());
    try {
        queue.poll();
        assert(false);
    } catch (const std::runtime_error& e) {
    }
}

void QueueTest::testOffer() {
    Queue<int> queue;
    queue.offer(10);
    queue.offer(20);
    queue.offer(30);
    assert(!queue.isEmpty());
}

void QueueTest::testPoll() {
    Queue<int> queue;
    queue.offer(10);
    queue.offer(20);
    queue.offer(30);
    assert(queue.poll() == 10);
    assert(queue.poll() == 20);
    assert(queue.poll() == 30);
    assert(queue.isEmpty());
    try {
        queue.poll();
        assert(false);
    } catch (const std::runtime_error& e) {
    }
}

void QueueTest::testPeek() {
    Queue<int> queue;
    queue.offer(10);
    queue.offer(20);
    queue.offer(30);
    assert(queue.peek() == 10);
    assert(!queue.isEmpty());
}
