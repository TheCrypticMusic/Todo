#include "Todo.hpp"
#include "File.hpp"
#include <nlohmann/json.hpp>
#include <fstream>
#include <iostream>
using json = nlohmann::json;

void Data::Todo::printActiveTodos(int uid) 
{

	std::ifstream f("to_do.json");
	json data = json::parse(f);
	json activeTasks = data["todo"]["user_ids"][0][std::to_string(uid)]["active"];

	std::cout << activeTasks << std::endl;

	// for (auto elem : activeTasks) {
	// 	std::cout << elem["name"] << std::endl;
	// 	std::cout << elem["content"] << std::endl;
	// 	std::cout << elem["finish_date"];
	// 	std::cout << std::endl
	// 						<< std::endl;
	// }
}

void Data::Todo::addNewTodo(int uid, std::string name, std::string content, std::string date)
{
	std::ifstream f("to_do.json");
	json data = json::parse(f);

	json newData;
	newData["content"] = content;
	newData["name"] = name;
	newData["finish_date"] = date;

	data["todo"]["user_ids"][0][std::to_string(uid)]["active"].push_back(newData);

	std::ofstream o("to_do.json");
	o << data.dump(4);
}
