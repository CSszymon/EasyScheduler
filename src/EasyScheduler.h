#ifndef Easy_SCHEDULER_H
#define Easy_SCHEDULER_H

#include <Arduino.h>

struct Task {
    void (*function)();
    unsigned long TaskTime;
    unsigned long LastRUN;
    int Priority;
};

class EasyScheduler {
public:
    EasyScheduler(Task* taskArray, int taskCount);
    void run();

private:
    Task* tasks;
    int taskCount;
};

#endif
