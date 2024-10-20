#include "todolist.hpp"

//-----------------------------------------------------------------------------
ToDoList::ToDoList()
    : m_taskList{}
    , m_taskItem{}
{

}

//-----------------------------------------------------------------------------
void ToDoList::addTask(const Task &task)
{
    m_taskList.push_back(task);
}

//-----------------------------------------------------------------------------
void ToDoList::removeTask(int number)
{
    m_taskList.erase(m_taskList.begin() + number);

}

//-----------------------------------------------------------------------------
void ToDoList::editTask(int number, const std::string &text)
{
//    m_taskList[number] = m_taskItem.setText(text);
}

//-----------------------------------------------------------------------------
void ToDoList::run()
{

}


