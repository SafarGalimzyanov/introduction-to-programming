#include <iostream>
#include <string>

int main() {

	std::string string = "", longest = "";

	//����� ����� ������ �������� Enter, Ctrl+Z, Enter
	//����� ���������� ��������� ��� ������, � �� � ��������� ������ false / -1
	while (std::cin >> string)
	{
		if (string.length() > longest.length())
		{
			longest = string;
		}
	}
	//�����
	std::cout << longest << std::endl;

	return 0;
}