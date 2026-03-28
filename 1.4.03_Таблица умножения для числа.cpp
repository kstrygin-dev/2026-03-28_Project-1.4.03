#include <iostream>
#include <windows.h>

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	int chislo;
	int num = 0 ;
	
	
	std::cout << "Введите целое число: " << std::endl;
	std::cin >> chislo;		
	while (num < 10) {
		std::cout << chislo << " * " << ++num << " = "<< chislo * num << std::endl;		
	}

	return EXIT_SUCCESS;
}
