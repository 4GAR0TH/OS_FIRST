#ifndef PROCESSMANAGER_H
#define PROCESSMANAGER_H
// equivalent pragma once

#include <iostream>
#include <vector>

struct Process{
    int pid;
    std::string name;
    int priority;
    std::string status;
}

class ProcessManager {
    private:
        std::vector<Process> activeProcesses;
    public:
        void createProcess(std::string name, int priority);
        void listProcesses();
        void killProcess(int pid);
};

#endif