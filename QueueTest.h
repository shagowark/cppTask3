#ifndef TESTS_H
#define TESTS_H

#include "Queue.h"

class QueueTest {
public:
    static void testAll();

private:
    static void testEmptyQueue();
    static void testOffer();
    static void testPoll();
    static void testPeek();
};

#endif