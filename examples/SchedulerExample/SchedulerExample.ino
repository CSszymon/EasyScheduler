//**********************//
//**** Created by CS****//
//**********************//

#include "EasyScheduler.h"  // Include the EasyScheduler library

// Example tasks
void test() {
    Serial.println("Test");  // This task will print "Test" to the serial monitor
}

void test2() {
    Serial.println("Test2");  // This task will print "Test2" to the serial monitor
}

void test3() {
    Serial.println("Test3");  // This task will print "Test3" to the serial monitor
}

/* At this point, add your tasks to the Task structure:
   - function: The function to be executed (e.g. test, test2, test3)
   - TaskTime: The time in milliseconds after which the task should run again
   - LastRUN: The time of the last execution of the task. It should be set to 0 initially.
   - Priority: The priority of the task (higher value means higher priority)
*/
Task tasks[] = {
    {test, 1000, 0, 1}, // Task 'test', runs every 1000ms, priority 1
    {test2, 1500, 0, 2}, // Task 'test2', runs every 1500ms, priority 2 (higher priority)
    {test3, 2000, 0, 1}, // Task 'test3', runs every 2000ms, priority 1
};

// Create the scheduler object, passing the task array and the number of tasks
EasyScheduler scheduler(tasks, 3); // 3 - number of tasks in the array

void setup() {
    Serial.begin(9600);  // Start serial communication
}

void loop() {
    scheduler.run();  // Start the scheduler, which checks which task should run
}
