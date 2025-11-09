#pragma once
#include <SFML/Graphics.hpp>
#include <ctime>

class Task {

private:
	std::string title;
	struct tm dueDate;
	int difficulty;
	bool isCompleted;
	std::string note;

public:
	Task(std::string title, int day, int month, int year, int difficulty, std::string note = "");
	bool complete();

};