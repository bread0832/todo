#ifndef TODOUTILS_HPP
#define TODOUTILS_HPP

#include "json.hpp"

class ToDoUtils
{
public:
    ToDoUtils();

public:
    void save(const nlohmann::json &task);
    nlohmann::json load();
};

#endif // TODOUTILS_HPP
