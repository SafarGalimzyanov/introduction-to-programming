#include <iostream>
#include <map>
#include <set>
#include <string>

int main() {

    //считывание числа строк
    int n = 0;
    std::cin >> n;

    //словарь латино-английский
    std::map <std::string, std::set <std::string>> dic;

    //ввод
    for (int i = 0; i < n; ++i)
    {
        //временные строки для английского и латинского слов
        std::string eng = "", lat = "";

        //любая строка состоит минимум из английского слова, тире и латинского слова
        std::cin >> eng >> lat >> lat; //считывание тире и его перезаписывание

        //после последнего слова в строке нет запятой, выдаст false
        while (lat.back() == ',')
        {
            //удаляем последний символ (запятую)
            lat.pop_back();

            //добавляем английского слово
            dic[lat].insert(eng); //слово не добавится, если оно там уже есть

            //считывание следующего слова
            std::cin >> lat;
        }

        //добавление последнего слова
        dic[lat].insert(eng);
    }

    //вывод
    std::cout << dic.size() << std::endl;
    for (auto now : dic)
    {
        std::cout << now.first << " - ";
        int count = 1;
        for (auto meow : now.second) {
            std::cout << meow;
            ++count;
            if (count != now.second.size() + 1) {
                std::cout << ", ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}