#include <cassert>

#include "MyVector.h"
void testCases()
{
    // Тест-кейс 1: Проверка размера вектора после создания
    {
        vector<int> vec;
        assert(vec.size() == 0);
    }

    // Тест-кейс 2: Проверка добавления элементов в вектор
    {
        vector<int> vec;
        vec.push_back(10);
        vec.push_back(20);
        vec.push_back(30);
        assert(vec.size() == 3);
    }

    // Тест-кейс 3: Проверка доступа к элементам вектора
    {
        vector<int> vec;
        vec.push_back(10);
        vec.push_back(20);
        vec.push_back(30);
        assert(vec[0] == 10);
        assert(vec[1] == 20);
        assert(vec[2] == 30);
    }

    // Тест-кейс 4: Проверка итерации по вектору
    {
        vector<int> vec;
        vec.push_back(10);
        vec.push_back(20);
        vec.push_back(30);

        int sum = 0;
        for (auto it = vec.begin(); it != vec.end(); ++it) {
            sum += *it;
        }

        assert(sum == 60);
    }

    // Тест-кейс 5: Проверка удаления элементов из вектора
    {
        vector<int> vec;
        vec.push_back(10);
        vec.push_back(20);
        vec.push_back(30);

        vec.pop_back();
        assert(vec.size() == 2);
        assert(vec[0] == 10);
        assert(vec[1] == 20);
    }
}

int main()
{
    testCases();

    return 0;
}