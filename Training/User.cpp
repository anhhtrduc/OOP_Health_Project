#include "User.h"

string User::Name()
{
	return _name;
}

void User::setName(string value)
{
	_name = value;
}

string User::ID()
{
	return _id;
}

void User::setID(string value)
{
	_id = value;
}

string User::Gender()
{
	return _gender;
}

void User::setGender(string value)
{
	_gender = value;
}

string User::Goal()
{
	return _goal;
}

void User::setGoal(string value)
{
	_goal = value;
}

void User::updateGoal(User U, string n)
{
	U.setGoal(n);
}

User::User()
{
	_name = "";
	_id = "";
	_gender = "";
	_goal = "";
}

User::User(string name, string id, string gender,string goal)
{
	this->_name = name;
	this->_id = id;
	this->_gender = gender;
	this->_goal = goal;
}

void User::inputUser()
{
	cout << "Nhap thong tin nguoi dung" << endl;
	//cin.ignore();
	cout << "Nhap ten nguoi dung: " << endl;
	getline(cin, this->_name);
	cout << "Nhap id nguoi dung: " << endl;
	getline(cin, this->_id);
	cout << "Nhap gioi tinh cua nguoi dung: " << endl;
	getline(cin, this->_gender);
	cout << "Nhap muc tieu cua nguoi dung: " << endl;
	cout << "1. Build strength     2. Build muscle    3. Lose fat" << endl;
	getline(cin, this->_goal);
}

void User::outputUser()
{
	cout << "----------------------------" << endl;
	cout << "Thong tin nguoi dung" << endl;
	cout << "Nguoi dung: " << _name << endl;
	cout << "Id la: " << _id << endl;
	cout << "Gioi tinh: " << _gender << endl;
	if (_goal == "Build strength")
	{
		cout << "Muc tieu cua nguoi dung la TANG SUC MANH !" << endl;
	}
	else if (_goal == "Build muscle")
	{
		cout << "Muc tieu cua nguoi dung la TANG CO BAP !" << endl;
	}
	else if (_goal == "Lose fat")
	{
		cout << "Muc tieu cua nguoi dung la GIAM CAN !" << endl;
	}
	cout << endl;
	cout << "Chi so Inbody cua nguoi dung" << endl;
	cout << "Khoi luong mo: " << _bodyfat << " kg" << endl;
	cout << "Khoi luong co: " << _muscle << " kg" << endl;
	cout << "Chieu cao: " << _height << " cm" << endl;
	cout << "can nang: " << _weight << " kg" << endl;
	cout << endl;
}

float User::BMI(User A)
{
	this->_bmi = (A.Weight() / ((A.Height() * 0.01) * (A.Height() * 0.01)));
	return this->_bmi;
}

void User::setBMI(float value)
{
	_bmi = value;
}

float User::PBF(User A)
{
	this->_pbf = (A.Bodyfat() / A.Weight()) * 100;
	return this->_pbf;
}

void User::setPBF(float value)
{
	_pbf = value;
}

void User::setStatus(string value)
{
	_status = value;
}

string User::updateStatus(User U, float bmi, float pbf)
{
	if (bmi >= 18.5 && bmi <= 25 && pbf > 14.9 && pbf < 16 && U.Gender() == "Nam")
	{
		this->_status = "Can doi";
	}
	else if (bmi >= 18.5 && bmi <= 25 && pbf > 22.9 && pbf < 24 && U.Gender() == "Nu")
	{
		this->_status = "Can doi";
	}
	else if (bmi < 18.5 && pbf < 15 && U.Gender() == "Nam")
	{
		this->_status = "Gay";
	}
	else if (bmi < 18.5 && pbf < 23 && U.Gender() == "Nu")
	{
		this->_status = "Gay";
	}
	else if (bmi > 25 && pbf > 15 && U.Gender() == "Nam")
	{
		this->_status = "Map";
	}
	else if (bmi > 25 && pbf > 23 && U.Gender() == "Nu")
	{
		this->_status = "Map";
	}
	else if (bmi >= 18.5 && bmi <= 25 && pbf > 15 && U.Gender() == "Nam")
	{
		this->_status = "Skinnyfat";
	}
	else if (bmi >= 18.5 && bmi <= 25 && pbf > 23 && U.Gender() == "Nu")
	{
		this->_status = "Skinnyfat";
	}
	return this->_status;
}

string User::Status()
{
	return this->_status;
}


void User::outputBD()
{
	cout << "The trang cua nguoi dung" << endl;
	cout << "Chi so BMI: " << _bmi << endl;
	cout << "Chi so PBF: " << _pbf << endl;
	if (_status == "Can doi")
	{
		cout << "Tinh trang cua nguoi dung: Can doi" << endl;
	}
	else if (_status == "Gay")
	{
		cout << "Tinh trang cua nguoi dung: Gay" << endl;
	}
	else if (_status == "Map")
	{
		cout << "Tinh trang cua nguoi dung: Map" << endl;
	}
	else if (_status == "Skinnyfat")
	{
		cout << "Tinh trang cua nguoi dung: Skinny fat" << endl;
	}
}
User::~User()
{
	//do nothing
}
