#include "Workout.h"

void Workout::Fitness(User A)
{
	//Ham nay se dua ra che do luyen tap dua tren muc tieu(_goal) va tinh trang(_status).
	if (A.Goal() == "Build strength" || A.Goal() == "Build muscle" && A.Status() == "Can doi")
	{
		cout << "Che do tap luyen cua " << A.Name() << " la: " << endl;
		cout << "Ban da co mot the trang can doi nen ban co the bat dau bang nhung bai tap street work out co ban nhu hit dat, keo xa, squat va dip." << endl;
		cout << "Ban hay de y toi luong calo ban hap thu moi ngay va cuong do nhung bai ban tap." << endl;
		cout << "Ban co the dung thuc pham bo sung protein nhu bot whey,... de day nhanh tien do tap luyen." << endl;
		cout << "Chuc ban may man va thanh cong tren con duong nay." << endl;
	}
	else if (A.Goal() == "Build strength" || A.Goal() == "Build muscle" && A.Status() == "Gay")
	{
		cout << "Che do tap luyen cua " << A.Name() << " la: " << endl;
		cout << "Ban nen bat dau bang viec bo sung them protein bang cach an nhieu hon va uong thuc pham bo sung nhu bot whey,..." << endl;
		cout << "Ban hay tap nhung bai nang nhu keo ta tay, keo ta vai." << endl;
		cout << "Chuc ban may man va thanh cong tren con duong nay." << endl;
	}
	else if (A.Goal() == "Build strength" || A.Goal() == "Build muscle" && A.Status() == "Map")
	{
		cout << "Che do tap luyen cua " << A.Name() << " la: " << endl;
		cout << "Ban nen bat dau bang viec giam can bang cach tap nhung bai co ban nhu chay bo hoac nhay day." << endl;
		cout << "Ban tap cardio voi cuong do manh de dot mo" << endl;
		cout << "Ban hay bat dau bang nhung bai nhe nhu hit dat, keo xa, squat va dip." << endl;
		cout << "Ban nen tang cuong do tap moi tuan vi du nhu la 7 buoi/1 tuan." << endl;
		cout << "Ban hay lien tuc cai thien so reps lam duoc nhung bai tren." << endl;
		cout << "Chuc ban may man va thanh cong tren con duong nay." << endl;
	}
	else if (A.Goal() == "Build strength" || A.Goal() == "Build muscle" && A.Status() == "Skinnyfat")
	{
		cout << "Che do tap luyen cua " << A.Name() << " la: " << endl;
		cout << "Ban hay bat dau bang viec tap street workout nhu hit dat, keo xa, squat va dip." << endl;
		cout << "Ban nen tap cardio vao cuoi moi buoi tap de toi uu luong mo dot duoc." << endl;
		cout << "Hay thu 1 vai che do an kieng thich hop voi ban." << endl;
		cout << "Chuc ban may man va thanh cong tren con duong nay." << endl;
	}
	else if (A.Goal() == "Lose fat" && A.Status() == "Map")
	{
		cout << "Che do tap luyen cua " << A.Name() << " la: " << endl;
		cout << "Ban nen bat dau bang viec giam can bang cach tap nhung bai co ban nhu chay bo hoac nhay day." << endl;
		cout << "Ban tap cardio voi cuong do manh de dot mo" << endl;
		cout << "Luc do ban se tro ve tinh trang can doi va bat dau mot cach tap moi." << endl;
		cout << "Chuc ban may man va thanh cong tren con duong nay." << endl;
	}
	else if (A.Goal() == "Lose fat" && A.Status() == "Skinnyfat")
	{
		cout << "Che do tap luyen cua " << A.Name() << " la: " << endl;
		cout << "Ban gap tinh trang nay la do khoi luong mo nhieu hon khoi luong co." << endl;
		cout << "Ban nen tap nhung bai giam mo nhu chay bo hoac nhay day va tap cardio o cuong do manh." << endl;
		cout << "Chuc ban may man va thanh cong tren con duong nay." << endl;
	}
}

