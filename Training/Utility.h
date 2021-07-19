#pragma once
#include "Workout.h"
#include <vector>
#include <sstream>
#include <fstream>
class Utility
{
public:
	static void addUserToFile(User);
	static void addListUserToFile(vector<User>);
	static void printUser(User);
	static void findUserFromID(vector<User>, string);
	static void takeUserFromFile(vector<User>&);
	static void deleteUserByID(vector<User>&);
	static void updateFile(vector<User>&);
};