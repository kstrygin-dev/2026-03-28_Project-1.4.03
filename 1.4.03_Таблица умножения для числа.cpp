#include <iostream>
#include <windows.h>

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	int chislo;

	std::cout << "Введите целое число: " << std::endl;
	std::cin >> chislo;

	for (int num = 1; num <= 10; num++) {
		std::cout << chislo << " * " << num << " = " << chislo * num << std::endl;	
	}
		
	return EXIT_SUCCESS;
}
