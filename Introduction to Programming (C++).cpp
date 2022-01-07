#include <iostream>
#include <string>

int main() {

	std::string string = "", longest = "";

	//после ввода строки нажимаем Enter, Ctrl+Z, Enter
	//тогда компилятор считывает всю строку, а по её окончании выдаст false / -1
	while (std::cin >> string)
	{
		if (string.length() > longest.length())
		{
			longest = string;
		}
	}
	//вывод
	std::cout << longest << std::endl;

	return 0;
}