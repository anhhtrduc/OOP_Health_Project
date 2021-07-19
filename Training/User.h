#pragma once
#include "Inbody.h"
class User : public Inbody
{
private:
	string _name;
	string _id;
	string _gender;
protected:
	string _goal;
public:
	string Name();
	void setName(string value);
	string ID();
	void setID(string value);
	string Gender();
	void setGender(string value);
	string Goal();
	void setGoal(string value);
	void updateGoal(User U, string n);
public:
	float BMI(User);
	void setBMI(float value);
	float PBF(User);
	void setPBF(float value);
	void setStatus(string value);
	string updateStatus(User, float, float);
	string Status();
	void outputBD();
public:
	User();
	User(string name, string id, string gender, string goal);
	void inputUser();
	void outputUser();
	~User();
};