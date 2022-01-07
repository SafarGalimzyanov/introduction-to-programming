#include <iostream>
#include <map>
#include <set>
#include <string>

int main() {

    //���������� ����� �����
    int n = 0;
    std::cin >> n;

    //������� ������-����������
    std::map <std::string, std::set <std::string>> dic;

    //����
    for (int i = 0; i < n; ++i)
    {
        //��������� ������ ��� ����������� � ���������� ����
        std::string eng = "", lat = "";

        //����� ������ ������� ������� �� ����������� �����, ���� � ���������� �����
        std::cin >> eng >> lat >> lat; //���������� ���� � ��� ���������������

        //����� ���������� ����� � ������ ��� �������, ������ false
        while (lat.back() == ',')
        {
            //������� ��������� ������ (�������)
            lat.pop_back();

            //��������� ����������� �����
            dic[lat].insert(eng); //����� �� ���������, ���� ��� ��� ��� ����

            //���������� ���������� �����
            std::cin >> lat;
        }

        //���������� ���������� �����
        dic[lat].insert(eng);
    }

    //�����
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