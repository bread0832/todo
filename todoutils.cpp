#include <fstream>

#include "todoutils.hpp"

//-----------------------------------------------------------------------------
ToDoUtils::ToDoUtils()
{}

//-----------------------------------------------------------------------------
void ToDoUtils::save(const nlohmann::json &task)
{
    std::ofstream file("tasks.json");

    file << task;

    file.close();
}

//-----------------------------------------------------------------------------
nlohmann::json ToDoUtils::load()
{
    std::ifstream file("tasks.json");

    nlohmann::json data = nlohmann::json::parse(file);


    return data;

}
