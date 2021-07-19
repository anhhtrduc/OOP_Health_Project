#include "Menu.h"

void Menu::userMenu(vector<User>& vU)
{
	system("cls");
	cout << "1. Thong tin ca nhan cua nguoi dung" << endl;
	cout << "2. Tu van chuong trinh luyen tap" << endl;
	cout << "3. Thoat" << endl;
	int n;
	cin >> n;
	if (n == 1)
	{
		for (int i = 0; i < vU.size(); i++)
		{
			Utility::printUser(vU[i]);
		}
		cout << "Bam phim bat ki de tiep tuc" << endl;
		system("pause");
		userMenu(vU);
	}
	else if (n == 2)
	{
		for (int i = 0; i < vU.size(); i++)
		{
			Workout::Fitness(vU[i]);
		}
		cout << "Bam phim bat ki de tiep tuc" << endl;
		system("pause");
		userMenu(vU);
	}
	else if (n == 3)
	{
		system("cls");
		return;
	}
	else
	{
		userMenu(vU);
	}
}

void Menu::addUser(vector<User>& vU)
{
	User U;
	cin.ignore();
	U.inputUser();
	U.inputIBD();
	float a = U.BMI(U);
	float b = U.PBF(U);
	U.updateStatus(U, a, b);
	Utility::addUserToFile(U);
	vU.erase(vU.begin(), vU.end());
	Utility::takeUserFromFile(vU);
}

void Menu::deleteUser(vector<User>& vU)
{
	cin.ignore();
	Utility::deleteUserByID(vU);
	Utility::addListUserToFile(vU);
	cout << "Xoa nguoi dung thanh cong" << endl;
	system("pause");
}

void Menu::changeUser(vector<User>& vU, string s)
{
	User U;
	int pos = -1;
	system("cls");
	cout << "Nhap ID cua nguoi dung can sua: " << endl;
	cin.ignore();
	getline(cin, s);
	cout << "1. Thay doi thong tin ca nhan" << endl;
	cout << "2. Thay doi chi so inbody" << endl;
	cout << "3. Thay doi trang thai" << endl;
	cout << "4. Thoat" << endl;
	int n;
	cin >> n;
	for (int i = 0; i < vU.size(); i++) 
	{
		if (s == vU[i].ID()) 
		{
			U = vU[i];
			pos = i;
		}
	}
	if (pos == -1)
	{
		cout << "Khong tim thay ID nay" << endl;
		system("pause");
		return;
	}
	if (n == 1)
	{
		cin.ignore();
		U.inputUser();
		vU[pos] = U;
		cout << "Cap nhat thanh cong." << endl;
		Utility::updateFile(vU);
		system("pause");
		changeUser(vU, U.ID());
	}
	else if (n == 2)
	{
		U.inputIBD();
		vU[pos] = U;
		cout << "Cap nhat thanh cong." << endl;
		Utility::updateFile(vU);
		system("pause");
		changeUser(vU, U.ID());
	}
	else if (n == 3)
	{
		U.updateStatus(U, U.BMI(U), U.PBF(U));
		vU[pos] = U;
		cout << "Cap nhat thanh cong." << endl;
		Utility::updateFile(vU);
		system("pause");
		changeUser(vU, U.ID());
	}
	else if (n == 4)
	{
		return;
	}
	else
	{
		changeUser(vU, U.ID());
	}
}

void Menu::updateUserMenu(User U,vector<User>& vU)
{
	system("cls");
	cout << "1. Them user" << endl;
	cout << "2. Xoa user" << endl;
	cout << "3. Sua user" << endl;
	cout << "4. Thoat" << endl;
	int n;
	cin >> n;
	if (n == 1)
	{
		addUser(vU);
		updateUserMenu(U, vU);
	}
	else if (n == 2)
	{
		deleteUser(vU);
		updateUserMenu(U, vU);
	}
	else if (n == 3)
	{
		changeUser(vU, U.ID());
		updateUserMenu(U, vU);
	}
	else if (n == 4)
	{
		return;
	}
	else
	{
		updateUserMenu(U, vU);
	}
}

void Menu::checkFileExist(vector<User>& vU)
{
	ifstream f("User.txt", ios::in);
	if (f.fail())
	{
		cout << "Khong co user nao ton tai." << endl;
		cout << "Moi ban nhap thong tin user de tiep tuc chuong trinh." << endl;
		addUser(vU);
	}
	f.close();
}

void Menu::Run()
{
	vector<User> vU;
	User U;
	checkFileExist(vU);
	Utility::takeUserFromFile(vU);
	system("cls");
	int n;
	cout << "1. User" << endl;
	cout << "2. Cap nhat User" << endl;
	cout << "3. Thoat" << endl;
	cout << "------------------" << endl;
	cout << "Cam on da su dung chuong trinh. " << endl;
	cout << "Chuc cac ban co mot suc khoe tot. " << endl;
	cin >> n;
	if (n == 1)
	{
		userMenu(vU);
	}
	else if (n == 2)
	{
		updateUserMenu(U, vU);
	}
	else if (n == 3)
	{
		return;
	}
}
