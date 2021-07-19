#include "Utility.h"

void Utility::addUserToFile(User U)
{
	ofstream f;
	float a = U.BMI(U);
	float b = U.PBF(U);
	f.open("User.txt", ios::out | ios::app);
	f << U.Name() << ";" << U.ID() << ";" << U.Gender() << ";" << U.Goal() << ";";
	f << U.Bodyfat() << ";" << U.Muscle() << ";" << U.Weight() << ";";
	f << U.Height() << ";" << a << ";" << b << ";";
	f << U.updateStatus(U, a, b) << endl;
	f.close();
}

void Utility::addListUserToFile(vector<User> vU)
{
	for (int i = 0; i < vU.size(); i++)
	{
		Utility::addUserToFile(vU[i]);
	}
}

void Utility::printUser(User U)
{
	U.outputUser();
	U.outputBD();
}

void Utility::findUserFromID(vector<User> vU, string s)
{
	cout << "Nhap ID can tim: " << endl;
	getline(cin, s);
	for (int i = 0; i < vU.size(); i++)
	{
		if (s == vU[i].ID())
		{
			Utility::printUser(vU[i]);
		}
	}
}

void Utility::takeUserFromFile(vector<User>& vU)
{
	ifstream f("User.txt", ios::in);
	if (f.fail())
	{
		cout << "Mo file khong thanh cong" << endl;
		return;
	}
	string s;
	while (getline(f, s))
	{
		User U;
		stringstream ss(s);
		string tmp;
		vector<string> tmp_User;
		while (getline(ss, tmp, ';'))
		{
			tmp_User.push_back(tmp);
		}
		U.setName(tmp_User[0]);
		U.setID(tmp_User[1]);
		U.setGender(tmp_User[2]);
		U.setGoal(tmp_User[3]);
		string numStr = tmp_User[4];
		float val = atof(numStr.c_str());
		U.setBodyFat(val);
		string numStr1 = tmp_User[5];
		float val1 = atof(numStr1.c_str());
		U.setMuscle(val1);
		string numStr2 = tmp_User[6];
		float val2 = atof(numStr2.c_str());
		U.setWeight(val2);
		string numStr3 = tmp_User[7];
		float val3 = atof(numStr3.c_str());
		U.setHeight(val3);
		string numStr4 = tmp_User[8];
		float val4 = atof(numStr4.c_str());
		U.setBMI(val4);
		string numStr5 = tmp_User[9];
		float val5 = atof(numStr5.c_str());
		U.setPBF(val5);
		U.setStatus(tmp_User[10]);
		vU.push_back(U);
	}
	f.close();
}

void Utility::deleteUserByID(vector<User>& vU)
{
	string s;
	cout << "Nhap ID can xoa: " << endl;
	getline(cin, s);
	remove("User.txt");
	for (int i = 0; i < vU.size(); i++)
	{
		if (vU[i].ID() == s)
		{
			vU.erase(vU.begin() + i);
		}
	}
	string s1 = s + "txt";
	remove(s1.c_str());
}

void Utility::updateFile(vector<User>& vU)
{
	fstream f;
	f.open("User.txt", ios::out);
	for (int i = 0; i < vU.size(); i++)
	{
		float a = vU[i].BMI(vU[i]);
		float b = vU[i].PBF(vU[i]);
		f << vU[i].Name() << ";" << vU[i].ID() << ";" << vU[i].Gender() << ";" << vU[i].Goal() << ";";
		f << vU[i].Bodyfat() << ";" << vU[i].Muscle() << ";" << vU[i].Weight() << ";";
		f << vU[i].Height() << ";" << a << ";" << b << ";";
		f << vU[i].updateStatus(vU[i], a, b) << endl;
	}
	f.close();
}


