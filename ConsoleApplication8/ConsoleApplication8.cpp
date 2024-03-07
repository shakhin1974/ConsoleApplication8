#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
struct Student
{
 
	int id{};
	string fio{};
	string gruppa{};
private:
	char pol{};
	int year{};
	int stependia{};
public:
	void Gender(char gen)
	{
		gen = pol;
	}
	char Gen(char gen)
	{
		return gen;
	}
};
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Student Ivan;
	Ivan.id =  1 ;
	Ivan.fio =  "Иванов Иван" ;
	Ivan.gruppa = { "2ИСИП -222" };
	Ivan.Gender('М');
	 
}