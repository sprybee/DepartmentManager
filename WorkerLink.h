//
// Created by User on 2023/3/25.
//

#ifndef DEPARTMENTMANAGER_WORKERLINK_H
#define DEPARTMENTMANAGER_WORKERLINK_H

#include "Worker.h"

class WorkerLink {
public:


private:
    Worker *worker = NULL;
    WorkerLink *nextWorker = NULL;
public:
    explicit WorkerLink(Worker *worker);

    Worker *getWorker() ;

    void setWorker(Worker *worker);

    WorkerLink *getNextWorker() ;

    void setNextWorker(WorkerLink *nextWorker);

    WorkerLink();
};


#endif //DEPARTMENTMANAGER_WORKERLINK_H
