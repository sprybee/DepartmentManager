//
// Created by User on 2023/3/25.
//

#include "WorkerLink.h"

using namespace std;



WorkerLink::WorkerLink() {}

Worker *WorkerLink::getWorker()  {
    return worker;
}

void WorkerLink::setWorker(Worker *worker) {
    WorkerLink::worker = worker;
}

WorkerLink *WorkerLink::getNextWorker()  {
    return nextWorker;
}

void WorkerLink::setNextWorker(WorkerLink *nextWorker) {
    WorkerLink::nextWorker = nextWorker;
}

WorkerLink::WorkerLink(Worker *worker) : worker(worker) {}
