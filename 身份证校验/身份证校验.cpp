#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <ctime>
#include "Getregion.h"
using namespace std;
struct tm1
{
	int tm_sec;
	int tm_min;
	int tm_hour;
	int tm_mday;
	int tm_mon;
	int tm_year;
	int tm_wday;
	int tm_yday;
	int tm_isdst;
};
int GetAge(string ID,string &year)
{
	year = ID.substr(6, 4);
	int yeartemp = 0;
	for (int i = 1; i <= 4; i++)
	{
		int temp = year[4 - i];
		float temp1 = pow(10, i - 1);
		yeartemp = yeartemp + ((temp)-48) * temp1;
	}
	time_t nowtime;
	struct tm* p;;
	time(&nowtime);
	p = localtime(&nowtime);
	int systemyear = p->tm_year + 1900;
	return systemyear - yeartemp;
}
int GetCheck(string ID)
{
	int sum = 0;
	for (int i = 1; i <= 17; i++)
	{
		int a = 17 - (i - 1);
		long int b = (long)pow(2, a);
		int c = b % 11;
		int d = c * (ID[i - 1] - 48);
		sum = sum + d;
	}
	int e = sum % 11;
	int f = 12 - e;
	int g = f % 11;
	return g;
}
int main()
{
	while (1)
	{
		int diqutemp = 0;
		char confirm_input;
		string ID;
	shuru:
		cout << "请输入身份证号：";
		cin >> ID;
		system("cls");
	panduan:
		cout << "请确认您输入的身份证号为：" << ID << endl << "确认请按“Y”" << endl << "重新请按“N”" << endl;
		cin >> confirm_input;
		if (confirm_input == 'N' or confirm_input == 'n')
		{
			system("cls");
			goto shuru;
		}
		else
		{
			if (confirm_input != 'Y' and confirm_input != 'y')
			{
				cout << "非法字符，请重新输入。" << endl;
				system("pause");
				system("cls");
				goto panduan;
			}
		}
		system("cls");
		int length = ID.length();
		if (length != 18)
		{
			cout << "身份证号位数：" << length << endl << "该身份证号无效，请重新输入。" << endl;
			system("pause");
			system("cls");
			goto shuru;
		}
		int check = 0;
		string year;
		check = GetCheck(ID);
		if (check == ID[17] - 48 or check == ID[17] - 78 or check == ID[17] - 110)
		{
			int nianling = GetAge(ID,year);
			if (nianling >= 0 and nianling <= 150)
			{
				year = ID.substr(6, 4);
				string month;
				string day;
				month = ID.substr(10, 2);
				day = ID.substr(12, 2);
				if (month >= "01" and month <= "12")
				{
					int yeartemp = 0;
					for (int i = 1; i <= 4; i++)
					{
						int temp = year[4 - i];
						long long int temp1 = (long long)pow(10, i - 1);
						yeartemp = int(yeartemp + ((long long)(temp)-48) * temp1);
					}
					if (
						((month == "01" or month == "03" or month == "05" or month == "07" or month == "09" or month == "11") and (day >= "01" and day <= "31"))
						or ((month == "04" or month == "06" or month == "08" or month == "10" or month == "12") and (day >= "01" and day <= "30"))
						or ((month == "02") and (day >= "01" and day <= "29") and ((yeartemp % 4 == 0 and yeartemp % 100 != 0) or (yeartemp % 400 == 0)))
						or ((month == "02") and (day >= "01" and day <= "28") and ((yeartemp % 4 != 0 or yeartemp % 100 == 0) and (yeartemp % 400 != 0)))
						)
					{
						string diqu;
						diqu = ID.substr(0, 6);
						diqutemp = 0;
						for (int i = 1; i <= 6; i++)
						{
							long int temp = diqu[6 - i];
							long int temp1 = (long)pow(10, i - 1);
							diqutemp = diqutemp + ((long long)(temp)-48) * temp1;
						}
						string a;
						a = GetRegion(diqutemp);
						if (a != "错误")
						{
							cout << "身份证号：" << ID << endl;
							cout << "输入的校验码：" << ID[17] << endl << "算出的校验码：" << check << endl;
							cout << "该身份证号有效。" << endl;
						}
						else
						{
							cout << "出生地：错误。" << endl << "该身份证无效，请重新输入。" << endl;
							system("pause");
							system("cls");
							goto shuru;
						}
					}
					else
					{
						cout << "生日：" << year << "/" << month << "/" << day << endl << "该身份证无效，请重新输入。" << endl;
						system("pause");
						system("cls");
						goto shuru;
					}
				}
				else
				{
					cout << "生日：" << year << "/" << month << "/" << day << endl << "该身份证无效，请重新输入。" << endl;
					system("pause");
					system("cls");
					goto shuru;
				}
			}
			else
			{
				cout << "年龄：" << nianling << "岁" << endl << "该身份证号无效，请重新输入。" << endl;
				system("pause");
				system("cls");
				goto shuru;
			}
		}
		else
		{
			cout << "身份证号：" << ID << endl;
			cout << "输入的校验码：" << ID[17] << endl << "算出的校验码：" << check << endl;
			cout << "该身份证号无效，请重新输入。" << endl;
			system("pause");
			system("cls");
			goto shuru;
		}
		string gender;
		gender = ID.substr(16, 1);
		int gender_temp = 0;
		gender_temp = gender[0];
		cout << "性别：";
		if ((gender_temp - 48) % 2 == 0)
		{
			cout << "女性" << endl;
		}
		else
		{
			cout << "男性" << endl;
		}
		string month;
		string day;
		year = ID.substr(6, 4);
		month = ID.substr(10, 2);
		day = ID.substr(12, 2);
		cout << "生日：" << year << "/" << month << "/" << day << endl;
		int nianling = GetAge(ID,year);
		cout << "年龄：" << nianling << "岁" << endl;
		string diqu;
		diqu = ID.substr(0, 6);
		diqutemp = 0;
		for (int i = 1; i <= 6; i++)
		{
			long int temp = diqu[6 - i];
			long int temp1 = (long)pow(10, i - 1);
			diqutemp = diqutemp + ((long long)(temp)-48) * temp1;
		}
		cout << "出生地：" << GetRegion(diqutemp) << endl;
		system("pause");
		system("cls");
	}
}