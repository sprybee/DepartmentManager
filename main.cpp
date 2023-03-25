#include <iostream>
#include <string>
#include <fstream>
#include "Worker.h"
#include "WorkerLink.h"
#include "Operator.h"

using namespace std;
void printOptInfo(){
    cout << "-------------------------------------------" << endl;
    cout << "1.增加职工信息" << endl;
    cout << "2.显示职工信息" << endl;
    cout << "3.修改职工信息" << endl;
    cout << "4.查询职工信息" << endl;
    cout << "5.按照编号排序" << endl;
    cout << "6.删除离职员工" << endl;
    cout << "7.清空所有文档" << endl;
    cout << "8.退出管理程序" << endl;
    cout << "-------------------------------------------" << endl;
}

int main() {
    WorkerLink *root = new WorkerLink();
    // 定义一个死循环可以实现用户程序的编写
    while (1) {
        printOptInfo();
        int opt;
        cout << "请输入操作符号:";
        cin >> opt;
        switch (opt) {
            case 1:
                insertWorker(root);
                break;
            case 2:
                showAllWorker(root);
                break;
            case 4:
                findWorkerInfo(root);
                break;
            case 5:
                sortByWorker(root);
                break;
            case 6:
                deleteWorker(root);
                break;
            case 7:
                deleteAllWorker(root);
                break;
            case 8:
                exit(0);
            default:
                cout << "类型错误" << endl;
        }
    }
}
