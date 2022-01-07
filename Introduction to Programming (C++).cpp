#include <iostream>
#include <map>
#include <string>

int main() {
	std::map <std::string, std::string> dic;
	int n = 0;
	std::cin >> n;
	std::string str1 = "", str2 = "";
	for (int i = 0; i < n; ++i)
	{
		std::cin >> str1 >> str2;
		dic[str1] = str2;
	}
	std::cin >> str1;
	for (auto now : dic)
	{
		//��������� ����
		if (now.first == str1)
		{
			std::cout << now.second;
			return 0; //��� �������������� ������ ��������
		}
		//��������� ��������
		else if (now.second == str1)
		{
			std::cout << now.first;
			return 0; //��� �������������� ������ ��������
		}
	}

	return 0;
}