#include <iostream>
#include <string>



struct pipe
{
	int length;
	int diametr;
	std::string status;
};



int main()
{
	pipe p1;
	p1.length = 12;
	p1.diametr = 5;
	p1.status = "В ремонте";
	std::cout << "Длина:" << p1.length << "Диаметр" << p1.diametr << "Статус" << p1.status << std::endl;
	return 0;
}