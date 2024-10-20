#ifndef TODOLIST_HPP
#define TODOLIST_HPP

#include <string>
#include <vector>

#include "task.hpp"

class ToDoList
{
public:
    ToDoList();

public:
    void addTask(const Task &task);
    void removeTask(int number);
    void editTask(int number, const std::string &text);
    void run();

private:
    Task m_taskItem;
    std::vector<Task> m_taskList;
};

#endif // TODOLIST_HPP
