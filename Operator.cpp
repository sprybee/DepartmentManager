//
// Created by User on 2023/3/25.
//
#include "Operator.h"
#include "Worker.h"
#include "WorkerLink.h"
#include <iostream>

using namespace std;

Worker *generatorWorker() {
    int workerId;
    string workerName;
    string jobName;
    int workerType;
    cout << "请输入用户ID:";
    cin >> workerId;
    cout << "请输入用户名:";
    cin >> workerName;
    cout << "请输入工作内容:";
    cin >> jobName;
    cout << "请输入用户类型:[1:老板\t2:经理\t3:员工]";
    cin >> workerType;
    return new Worker(workerId, workerName, jobName, workerType);
}

void insertWorker(WorkerLink *workerLink) {
    Worker *tmpWorker = generatorWorker();
    WorkerLink *tmpWorkerLink = new WorkerLink(tmpWorker);
    if (workerLink->getWorker() == nullptr && workerLink->getNextWorker() == nullptr) {
        // 意味着root节点且未被初始化
        workerLink->setNextWorker(tmpWorkerLink);
        return;
    }
    // 把当前链节点切换到最后一个
    while (workerLink->getNextWorker() != nullptr) {
        if (workerLink->getWorker() != nullptr && tmpWorker->getWorkerId() == workerLink->getNextWorker()->getWorker()->getWorkerId()) {
            if (tmpWorker->getIsDelete() == 0) {
                cout << "插入失败:[用户ID有冲突]" << endl;
            } else {
                tmpWorker->setIsDelete(0);
            }
            return;
        }
        workerLink = workerLink->getNextWorker();
    }
    workerLink->setNextWorker(tmpWorkerLink);
}

void findWorkerInfo(WorkerLink *root) {
    string userName;
    cout << "请输入用户名:";
    cin >> userName;
    while (root != nullptr) {
        Worker *tmpWorker = root->getWorker();
        if (tmpWorker != nullptr && tmpWorker->getWorkerName() == userName) {
            tmpWorker->printWorkerInfo();
            return;
        }
        root = root->getNextWorker();
    }
    cout << "未查到该用户信息" << endl;
}

void deleteAllWorker(WorkerLink *root) {
    while (root->getNextWorker() != nullptr) {
        WorkerLink *nextWorkerLink = root->getNextWorker();
        Worker *curWorker = root->getWorker();
        if (curWorker != nullptr) {
            delete curWorker;
        }
        delete root;
        root = nextWorkerLink;
    }
    root = new WorkerLink;
}

void sortByWorker(WorkerLink *root) {
    while (root != nullptr) {
        Worker *worker = root->getWorker();
        if (worker != nullptr && !worker->getIsDelete()) {
            cout << worker->getWorkerId() << "\t";
        }
    }
}

void showAllWorker(WorkerLink *root) {
    while (root != nullptr) {
        Worker *worker = root->getWorker();
        if (worker != nullptr && !worker->getIsDelete()) {
            worker->printWorkerInfo();
        }
        root = root->getNextWorker();
    }
}

void deleteWorker(WorkerLink *root) {
    cout << "请输入删除的用户ID:";
    int userId;
    cin >> userId;
    while (root != nullptr) {
        Worker *worker = root->getWorker();
        if (worker != nullptr && !worker->getIsDelete() && worker->getWorkerId() ==userId) {
            worker->setIsDelete(1);
            return;
        }
        root = root->getNextWorker();
    }
    cout << "未找到用户" << endl;
}
