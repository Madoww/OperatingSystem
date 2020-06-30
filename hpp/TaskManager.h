#pragma once
#include "CalculatorApp.h"

class TaskManager
{
public:
	TaskManager(const TaskManager&) = delete;
	TaskManager operator=(const TaskManager&) = delete;

	static TaskManager& instance()
	{
		static TaskManager tasks;
		return tasks;
	}

	void UpdateAllTasks();
private:
	TaskManager(){}
	CalculatorApp calc;
};