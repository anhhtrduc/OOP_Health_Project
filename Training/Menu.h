#pragma once
#include "User.h"
#include "Utility.h"
#include <Windows.h>

class Menu
{
public:
	static void userMenu(vector<User>&);
	static void addUser(vector<User>&);
	static void deleteUser(vector<User>&);
	static void changeUser(vector<User>&, string);
	static void updateUserMenu(User, vector<User>&);
	static void checkFileExist(vector<User>&);
	static void Run();
};