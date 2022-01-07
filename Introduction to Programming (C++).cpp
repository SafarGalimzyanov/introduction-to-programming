#include <iostream>
#include <map>
#include <set>
#include <string>

//заполнение предложения Пети словами с одной заглавной буквой
bool fillExc(std::multiset <std::string>& snt, int& err)
{
	std::string temp, tempWrd;
	//считывание строки
	std::cin >> std::ws; //удаление символа перехода строки
	std::getline(std::cin, temp);
	if (temp.empty())
	{
		return false;
	}
	temp = temp + " "; //чтобы считать последнее слово

	for (int i = temp.find(' '); i != -1;)
	{
		tempWrd = temp.substr(0, i);

		//подсчёт заглавных букв в слове
		int cnt = 0;
		for (char c : tempWrd)
		{
			if (c != char(std::tolower(c)))
			{
				++cnt;
			}
		}

		//если в слове одна заглавная, то добавляется
		if (cnt == 1)
		{
			snt.insert(tempWrd);
		}
		//иначе слово не добавляется
		else
		{
			++err;
		}

		//удаление добавленного слова
		temp = temp.substr(i + 1, temp.size());

		//поиск следующего слова
		i = temp.find(' ');
	}
	return true;
}

//поиск слова  в словаре
void wordSearch(std::set <std::string>& dic, std::multiset <std::string>& snt, int& err)
{
	//цикл по всем словам из предложения Пети
	for (auto wrdSnt : snt)
	{
		//если не найдено точное слово
		if (dic.find(wrdSnt) == dic.end())
		{
			//ищем слова с теми же буквами
			//превращение всех заглавных букв в строчные
			std::string temp = "";
			for (char c : wrdSnt)
			{
				temp = temp + char(std::tolower(c));
			}
			//если найдено слово со строчными буквами
			if (dic.find(temp) != dic.end())
			{
				++err; //раз оно не точно совпадает, то в нём неверное ударение
			}
			//если не найдено слово со строчными буквами, то
			//этого слова нет в словаре
		}
		//если найдено точное слово, то
		//переход к следующему слову
	}
}

int main() {

	//считывание числа строк
	int n = 0;
	std::cin >> n;

	//словарь
	std::set <std::string> dic;
	//предложение Пети
	std::multiset <std::string> snt;

	//заполнение словаря
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

	//счётчик ошибок
	int err = 0;

	//заполнение предложения Пети
	if (fillExc(snt, err))
	{
		//поиск слов с правильным ударением в словаре
		wordSearch(dic, snt, err);
	}

	//вывод
	std::cout << err;


	return 0;
}