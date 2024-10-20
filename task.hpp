#ifndef TASK_HPP
#define TASK_HPP
#include <string>

struct TaskParams{
    int number;
    std::string text;

    void fromJson(){

    }
};


class Task
{
public:
    Task();

    int getNumber();
    std::string getText();

    void setText(const std::string &text);
    void setNumber(int number);


private:
    int m_number;
    std::string m_text;
};

#endif // TASK_HPP
