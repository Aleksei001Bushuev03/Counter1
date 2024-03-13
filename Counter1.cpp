#include <iostream>
#include <cstring>
#include<Windows.h>
#include<fstream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<clocale>
#include<cstdlib>
#include<ctime>



class Couter {
private:
	int x;

	////////////////////////////////////
public:
	Couter()
	{
		x = 1;
	}

	void Set_magnifications() //возможность увеличить своё значение на 1
	{
		int valueX = x;
		x = valueX + 1;
	}
	void Set_decreases()// возможность уменьшить своё значение на 1
	{

		int valueX = x;
		x = valueX - 1;
	}
	int Get_equally() // возможность посмотреть своё текущее значение
	{
		return x;

	}



	int Set_ndividual(int x) // возможность создания экземпляра класса с инициализирующим начальным значением
	{
		this->x = x;
		return x;
	}




};



int main()
{
	std::string answer;
	bool question = true;
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Couter num;
	int q;
	while (question)
	{
		std::cout << "Вы хотите указать начальное значение счётчика ? Введите да или нет :";
		std::cin >> answer;
		if (answer == "да") {
			question = 0;
			std::cout << "\nВведите начальное значение счётчика : ";
			std::cin >> q;
			num.Set_ndividual(q);
			break;
		}
		if (answer == "нет") {
			question = 0;

			break;
		}
		else
		{
			std::cout << "Неверный вод" << std::endl;
			question = 1;
		}

	}
	char y;



	do {

		std::cout << "Введите команду('+', '-', '=' или 'x') : ";
		std::cin >> y;
		switch (y)
		{
		case'+':
		{
			num.Set_magnifications();
			break;
		}
		case'-':
		{
			num.Set_decreases();
			break;
		}
		case'=':
		{
			std::cout << num.Get_equally() << std::endl;
			break;
		}
		}

	} while (y != 'х');
	std::cout << "\n До свидания! ";



	return 0;
}