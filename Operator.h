//
// Created by User on 2023/3/25.
//

#ifndef DEPARTMENTMANAGER_OPERATOR_H
#define DEPARTMENTMANAGER_OPERATOR_H

#include "Worker.h"
#include "WorkerLink.h"

void insertWorker(WorkerLink *root);

void deleteAllWorker(WorkerLink *root);

void showAllWorker(WorkerLink *root);

void findWorkerInfo(WorkerLink *root);

void sortByWorker(WorkerLink *root);

void deleteWorker(WorkerLink *root);

#endif //DEPARTMENTMANAGER_OPERATOR_H
