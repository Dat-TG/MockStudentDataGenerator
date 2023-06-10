#include "RandomFunction.h"
vector<string> HoArray{ "Nguyen","Le","Tran","Huynh","Ho","Pham",
"Bui","Vu","Vo","Hoang","Huynh","Do","Phan","Dang", "Ngo",
"Duong","Ly" };
vector<string>TenDemArray{ "Van","Thi","Cong","Hoai","Quoc","Ngoc"
,"Hoang","Phuong","Tram","Minh","Dang","Thu","Lan","Thanh",
"Huyen","Bao","Dieu","An","Xuan","Thuy","My"};
vector<string>TenArray{ "Huy","Khang","Bao","Anh","Phuc","Minh",
"Khoa","Phat","Dat","Khoi","Long","Nam","Duy","Quan","Kiet",
"Thinh","Tuan","Hung","Hoang","Vy","Ngoc","Nhi","Han","Thu","Linh"
,"Nhu","Ngan","Phuong","Thao","My","Tran","Quynh","Nghi","Trang",
"Tram","An","Thy","Chau","Truc","Uyen","Yen" };
vector <string>Duong{"Bui Thi Xuan","Nguyen Thi Minh Khai","Vo Thi Sau"
,"Dinh Bo Linh","Le Loi","Nguyen Hue","Ham Nghi","Nguyen Dinh Chieu","Hai Ba Trung",
"Tran Hung Dao","Pham Ngu Lao","Bui Vien","Nguyen Thien Thuat","Hai Thuong Lan Ong",
"Nguyen Van Binh","Alexandre De Rhodes","Ton Duc Thang","Nguyen Trai","Le Van Sy",
"Nam Ky Khoi Nghia","Tan Da","Cach Mang Thang 8","Vo Van Ngan","Quang Trung",
"Huynh Thuc Khang","Nguyen Phi Khanh","Cao Ba Quat","Nguyen Sieu","Tran Khanh Du",
"Ngo Quyen","Dong Khoi","Hai Ba Trung","Tran Quoc Toan","Yersin","Hoang Sa",
"Van Kiep","Xo Viet Nghe Tinh","Nguyen Thai Hoc","Nguyen Cong Tru","Hong Bang",
"Dien Bien Phu","Phan Dinh Giot","Le Lai","Nguyen Thuong Hien","Truong Chinh"};
vector <string> Phuong{"Linh Trung","Ben Nghe","Da Kao","1","2","3","4","5","6","7",
"8","9","10","11","12","13","14","15","Tan Hung","Phu My","Pham Ngu Lao","Thanh Loc",
"Ben Thanh","Cau Kho","Cau Ong Lanh","An Lac","Binh Hung Hoa","Tan Tao","Vo Thi Sau",
"Hiep Tan","Hoa Thanh","Tan Phu","An Phu Dong","Linh Chieu","Linh Dong","Linh Tay",
"Thu Thiem","Phuoc Binh"};
vector <string> Quan{"Thu Duc","1","3","4","5","6","7","8","10","11","12","Binh Tan",
"Binh Thanh","Go Vap","Phu Nhuan","Tan Binh","Tan Phu","Binh Chanh","Can Gio","Cu Chi",
"Hoc Mon","Nha Be"};
int GenerateInt(int minN, int maxN)
{
	return minN + rand() % (maxN + 1 - minN);
}
string NameRandom()
{
	return HoArray[GenerateInt(0, HoArray.size() - 1)]
		+ " "+TenDemArray[GenerateInt(0, TenDemArray.size() - 1)]
		+ " "+TenArray[GenerateInt(0, TenArray.size() - 1)];
}
string IDRandom()
{
	vector<string>MaNganh{ "110","120","130","140","150","160","170","180",
	"190","200","210","220","230","250","260","270","280","125","126","127",
	"60","61","62","63","64","65","146","147","157","177","187","207","247","900"};
	string STT = "";
	for (int i = 0; i < 3; i++)
		STT = STT + to_string(GenerateInt(0, 9));
	return to_string(GenerateInt(17, 21)) + MaNganh[GenerateInt(0, MaNganh.size() - 1)]+STT;
	/*Mã số sinh viên : có 8 chữ số được chia thành 4 phần có dạng AABBCDDD
		2 chữ số đầu tiên : Đại diện cho khóa
		Ví dụ : 19BBCDDD là khóa 2019
		2 chữ số kế tiếp : Đại diện cho mã khoa
		Ví dụ : AA11CDDD là ngành Toán học
		1 chữ số kế tiếp nữa : Đại diện cho mã chương trình
		0 - chương trình Đại Trà
		5 - chương trình Tiên Tiến
		6 - chương trình Việt Pháp
		7 - chương trình Chất Lượng Cao
		Các chữ số còn lại : Đại diện cho số thứ tự trong khóa
		Ví dụ : AABBC159: Số thứ tự tứ 159
		Mã các ngành trong MSSV cần lưu ý :
		110 : Nhóm ngành Toán Học, Toán Tin, Toán Ứng Dụng
		120 : Nhóm ngành Máy Tính và Công Nghệ Thông Tin
		130 : Ngành Vật Lý Học
		140 : Ngành Hóa Học
		150 : Ngành Sinh Học
		160 : Ngành Địa Chất Học
		170 : Ngành Khoa Học Môi Trường
		180 : Ngành Công Nghệ Sinh Học
		190 : Ngành Khoa Học Vật Liệu
		200 : Ngành Kỹ Thuật Điện tử, Viễn Thông
		210 : Ngành Hải Dương Học
		220 : Ngành Công Nghệ Kỹ Thuật Môi Trường
		230 : Ngành Kỹ Thuật Hạt Nhân
		250 : Ngành Công nghệ Vật liệu
		260 : Ngành Vật lý Y Khoa
		270 : Ngành Kỹ Thuật Địa Chất
		280 : Ngành Khoa học Dữ liệu
		125 : Ngành Công Nghệ Thông Tin(Tiên Tiến)
		126 : Ngành Công Nghệ Thông Tin(Việt Pháp)
		127 : Ngành Công Nghệ Thông Tin(Chất Lượng Cao)
		60 – 65 : Ngành Công Nghệ Thông Tin(Cao Đẳng)
		146 : Ngành Hóa Học(Việt Pháp)
		147 : Ngành Hóa Học(Chất Lượng Cao)
		157 : Ngành Sinh Học(Chất Lượng Cao)
		177 : Ngành Khoa Học Môi Trường(Chất Lượng Cao)
		187 : Ngành Công Nghệ Sinh Học(Chất Lượng Cao)
		207 : Ngành Kỹ Thuật Điện Tử Viễn Thông(Chất Lượng Cao)
		247, 900 : Ngành Công Nghệ Kỹ Thuật Hóa Học(Chất Lượng Cao)*/
}
string AddressRandom()
{
	return to_string(GenerateInt(1, 300)) + " " + Duong[GenerateInt(0, Duong.size() - 1)] + ", Ward "
		+ Phuong[GenerateInt(0, Phuong.size() - 1)] + ", District " + Quan[GenerateInt(0, Quan.size() - 1)]
		+ ", Ho Chi Minh City";
}
string GenerateEmail(string MSSV)
{
	return MSSV + "@student.hcmus.edu.vn";
}
int numberofDaysInMonth(int Thang, int Nam)
{
	int SoNgay = 0;

	switch (Thang)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		SoNgay = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		SoNgay = 30;
		break;
	case 2:
		if ((Nam%400==0)||(Nam%4==0&&Nam%100!=0))
		{
			SoNgay = 29;
		}
		else
		{
			SoNgay = 28;
		}
		break;
	}

	return SoNgay;
}
date GenerateDate()
{
	date DOB;
	int d, m, y;
	y = GenerateInt(1999, 2003);
	m = GenerateInt(1, 12);
	d = GenerateInt(1, numberofDaysInMonth(m, y));
	DOB.setDate(d, m, y);
	return DOB;
}
double GenerateDouble(double min, double max)
{
	double scale = rand() / (double)RAND_MAX; /* [0, 1.0] */
	double res= min + scale * (max - min);      /* [min, max] */
	return round(res * 100) / 100;
}
string GeneratePhone()
{
	string phone = "";
	vector<string> DauSo{"086","096","097","098","032","033","034","035",
	"036","037","038","039" /*Viettel*/,
	"088","091","094","083","084","085","081","082"/*Vinaphone*/,
	"089","090","093","070","079","077","076","078"/*Mobifone*/,
	"092","056","058"/*Vietnamobile*/,
	"099","059"/*Gmobile*/};
	phone = DauSo[GenerateInt(0, DauSo.size() - 1)];
	phone=phone+ to_string(GenerateInt(0, 9));
	phone = phone + "-";
	for (int i = 0; i < 3; i++)
		phone = phone + to_string(GenerateInt(0, 9));
	phone = phone + "-";
	for (int i = 0; i < 3; i++)
		phone = phone + to_string(GenerateInt(0, 9));
	return phone;
}