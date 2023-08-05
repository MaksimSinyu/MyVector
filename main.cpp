#include "MyVector.h"

int main()
{
    // Тестирование конструктора по умолчанию
    vector<int> vec1;
    cout << "Size of vec1: " << vec1.size() << endl; // Ожидаемый вывод: 0

    // Тестирование конструктора с параметрами
    vector<int> vec2(5, 10); // Создает вектор размером 5, заполненный значениями 10
    cout << "Size of vec2: " << vec2.size() << endl; // Ожидаемый вывод: 5
    cout << "Elements of vec2: ";
    for (int i = 0; i < vec2.size(); ++i)
    {
        cout << vec2[i] << " "; // Ожидаемый вывод: 10 10 10 10 10
    }
    cout << endl;

    // Тестирование метода push_back
    vec2.push_back(20); // Добавляет элемент со значением 20 в конец вектора
    cout << "Size of vec2 after push_back: " << vec2.size() << endl; // Ожидаемый вывод: 6
    cout << "Elements of vec2 after push_back: ";
    for (int i = 0; i < vec2.size(); ++i)
    {
        cout << vec2[i] << " "; // Ожидаемый вывод: 10 10 10 10 10 20
    }
    cout << endl;

    // Тестирование метода pop_back
    vec2.pop_back(); // Удаляет последний элемент из вектора
    cout << "Size of vec2 after pop_back: " << vec2.size() << endl; // Ожидаемый вывод: 5
    cout << "Elements of vec2 after pop_back: ";
    for (int i = 0; i < vec2.size(); ++i)
    {
        cout << vec2[i] << " "; // Ожидаемый вывод: 10 10 10 10 10
    }
    cout << endl;

    // Тестирование метода resize
    vec2.resize(3); // Изменяет размер вектора на 3
    cout << "Size of vec2 after resize: " << vec2.size() << endl; // Ожидаемый вывод: 3
    cout << "Elements of vec2 after resize: ";
    for (int i = 0; i < vec2.size(); ++i)
    {
        cout << vec2[i] << " "; // Ожидаемый вывод: 10 10 10
    }
    cout << endl;

    return 0;
}