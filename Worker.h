//
// Created by User on 2023/3/25.
//

#ifndef DEPARTMENTMANAGER_WORKER_H
#define DEPARTMENTMANAGER_WORKER_H

#include <string>

using namespace std;

class Worker {
private:

    int workerId;
    string workerName;
    string jobName;
    int workerType; //
    int isDelete; //0:未删除 1:已删除
    string job;
public:
    Worker();

    Worker(int workerId, const string &workerName, const string &jobName, int workerType);

    void printWorkerInfo();

    int getWorkerId() const;

    void setWorkerId(int workerId);

    const string &getWorkerName() const;

    void setWorkerName(const string &workerName);

    const string &getJobName() const;

    void setJobName(const string &jobName);

    int getWorkerType() const;

    void setWorkerType(int workerType);

    int getIsDelete() const;

    void setIsDelete(int isDelete);

    const string &getJob() const;

    void setJob(const string &job);

};


#endif //DEPARTMENTMANAGER_WORKER_H
