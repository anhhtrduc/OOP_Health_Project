#pragma once
#include <iostream>
#include <string>
using namespace std;
class Inbody
{
protected:
	float _bodyfat;
	float _muscle;
	float _weight;
	float _height;
	float _bmi;
	float _pbf;
	string _status;
public:
	float Bodyfat();
	void setBodyFat(float value);
	float Muscle();
	void setMuscle(float value);
	float Weight();
	void setWeight(float value);
	float Height();
	void setHeight(float value);
	Inbody();
	Inbody(float, float, float, float, float, float, string);
	void inputIBD();
	~Inbody();
};