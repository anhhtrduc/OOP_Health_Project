#include "Inbody.h"

float Inbody::Bodyfat()
{
	return _bodyfat;
}

void Inbody::setBodyFat(float value)
{
	_bodyfat = value;
}

float Inbody::Muscle()
{
	return _muscle;
}

void Inbody::setMuscle(float value)
{
	_muscle = value;
}

float Inbody::Weight()
{
	return _weight;
}

void Inbody::setWeight(float value)
{
	_weight = value;
}

float Inbody::Height()
{
	return _height;
}

void Inbody::setHeight(float value)
{
	_height = value;
}


Inbody::Inbody()
{
	_bodyfat = 0;
	_muscle = 0;
	_weight = 0;
	_height = 0;
	_bmi = 0;
	_pbf = 0;
	_status = "";
}

Inbody::Inbody(float bf, float m, float w, float h, float bmi, float pbf, string status)
{
	this->_bodyfat = bf;
	this->_muscle = m;
	this->_weight = w;
	this->_height = h;
	this->_bmi = bmi;
	this->_pbf = pbf;
	this->_status = status;
}

void Inbody::inputIBD()
{
	cout << "Nhap chi so Inbody cua nguoi dung" << endl;
	cout << "Nhap khoi luong mo: " << endl;
	cin >> this->_bodyfat;
	cout << "Nhap khoi luong co: " << endl;
	cin >> this->_muscle;
	cout << "Nhap chieu cao: " << endl;
	cin >> this->_height;
	cout << "Nhap can nang: " << endl;
	cin >> this->_weight;
}

Inbody::~Inbody()
{
	//do nothing
}
