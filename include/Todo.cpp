#include "Todo.hpp"
#include "File.hpp"
#include <json.hpp>
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

void Data::Todo::addNewTodo(int uid, std::string name, std::string content, std::string finishData)
{
	std::ifstream f("to_do.json");
	json data = json::parse(f);
	json activeTasks = data["todo"]["user_ids"][0][std::to_string(uid)]["active"];
	std::cout << activeTasks << std::endl;
	json test = data["todo"]["user_ids"][0][std::to_string(uid)];
	json newData;
	newData["content"] = "Hello";
	newData["name"] = "test";
	newData["finish_date"] = "f";

	activeTasks.push_back(newData);
	std::cout << activeTasks << std::endl;
	std::ofstream o("to_do.json");
	o << activeTasks;
}