//
// Created by User on 2023/3/25.
//

#include <iostream>
#include "Worker.h"

using namespace std;


Worker::Worker() {}

Worker::Worker(int workerId, const string &workerName, const string &jobName, int workerType) : workerId(
        workerId), workerName(workerName), jobName(jobName), workerType(workerType) {
    isDelete = 0;
    switch (workerType) {
        case 1:
            // 代表这这是老板
            job = "管理公司大小事务";
            break;
        case 2:
            // 代表这是经理
            job = "管理员工大小事务";
            break;
        case 3:
            // 代表这是员工
            job = "完成工作";
            break;
        default:
            cout << "员工类型输入错误.\n员工类型应属于1~3\n1:老板\n2:经理\n3:员工\n";
    }
}

int Worker::getWorkerId() const {
    return workerId;
}

void Worker::setWorkerId(int workerId) {
    Worker::workerId = workerId;
}

const string &Worker::getWorkerName() const {
    return workerName;
}

void Worker::setWorkerName(const string &workerName) {
    Worker::workerName = workerName;
}

const string &Worker::getJobName() const {
    return jobName;
}

void Worker::setJobName(const string &jobName) {
    Worker::jobName = jobName;
}

int Worker::getWorkerType() const {
    return workerType;
}

void Worker::setWorkerType(int workerType) {
    Worker::workerType = workerType;
}

int Worker::getIsDelete() const {
    return isDelete;
}

void Worker::setIsDelete(int isDelete) {
    Worker::isDelete = isDelete;
}

void Worker::printWorkerInfo() {
    cout << "workerId:" << workerId << "\t" << "workerType:" << workerType << "\t" << "duty is :" << job << "\t"
         << endl;
}

const string &Worker::getJob() const {
    return job;
}

void Worker::setJob(const string &job) {
    Worker::job = job;
}
