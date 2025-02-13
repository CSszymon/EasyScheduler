#include "EasyScheduler.h"

EasyScheduler::EasyScheduler(Task* taskArray, int count) {
    tasks = taskArray;
    taskCount = count;
}

void EasyScheduler::run() {
    int HighestPriority = -1;
    int SelectedTask = -1;

    for (int i = 0; i < taskCount; i++) {
        if (millis() - tasks[i].LastRUN >= tasks[i].TaskTime) {
            if (tasks[i].Priority > HighestPriority) {
                HighestPriority = tasks[i].Priority;
                SelectedTask = i;
            }
        }
    }

    if (SelectedTask != -1) {
        tasks[SelectedTask].function();
        tasks[SelectedTask].LastRUN = millis();
    }
}
