#include <iostream>
#include <map>
#include <set>
#include <string>

//���������� ����������� ���� ������� � ����� ��������� ������
bool fillExc(std::multiset <std::string>& snt, int& err)
{
	std::string temp, tempWrd;
	//���������� ������
	std::cin >> std::ws; //�������� ������� �������� ������
	std::getline(std::cin, temp);
	if (temp.empty())
	{
		return false;
	}
	temp = temp + " "; //����� ������� ��������� �����

	for (int i = temp.find(' '); i != -1;)
	{
		tempWrd = temp.substr(0, i);

		//������� ��������� ���� � �����
		int cnt = 0;
		for (char c : tempWrd)
		{
			if (c != char(std::tolower(c)))
			{
				++cnt;
			}
		}

		//���� � ����� ���� ���������, �� �����������
		if (cnt == 1)
		{
			snt.insert(tempWrd);
		}
		//����� ����� �� �����������
		else
		{
			++err;
		}

		//�������� ������������ �����
		temp = temp.substr(i + 1, temp.size());

		//����� ���������� �����
		i = temp.find(' ');
	}
	return true;
}

//����� �����  � �������
void wordSearch(std::set <std::string>& dic, std::multiset <std::string>& snt, int& err)
{
	//���� �� ���� ������ �� ����������� ����
	for (auto wrdSnt : snt)
	{
		//���� �� ������� ������ �����
		if (dic.find(wrdSnt) == dic.end())
		{
			//���� ����� � ���� �� �������
			//����������� ���� ��������� ���� � ��������
			std::string temp = "";
			for (char c : wrdSnt)
			{
				temp = temp + char(std::tolower(c));
			}
			//���� ������� ����� �� ��������� �������
			if (dic.find(temp) != dic.end())
			{
				++err; //��� ��� �� ����� ���������, �� � �� �������� ��������
			}
			//���� �� ������� ����� �� ��������� �������, ��
			//����� ����� ��� � �������
		}
		//���� ������� ������ �����, ��
		//������� � ���������� �����
	}
}

int main() {

	//���������� ����� �����
	int n = 0;
	std::cin >> n;

	//�������
	std::set <std::string> dic;
	//����������� ����
	std::multiset <std::string> snt;

	//���������� �������
	for (int i = 0; i < n; ++i)
	{
		std::string wrd;
		std::cin >> wrd;
		dic.insert(wrd);
		std::string temp;
		for (char c : wrd)
		{
			temp = temp + char(std::tolower(c));
		}
		dic.insert(temp);
	}

	//������� ������
	int err = 0;

	//���������� ����������� ����
	if (fillExc(snt, err))
	{
		//����� ���� � ���������� ��������� � �������
		wordSearch(dic, snt, err);
	}

	//�����
	std::cout << err;


	return 0;
}