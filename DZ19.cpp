// DZ19.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void Voice() {
        cout << "UGU";
    }
};

class Cat : public Animal {
public:
    void Voice() override {
        cout << "Meow" << endl;
    }
};

class Dog : public Animal {
public:
    void Voice() override {
        cout << "Woof" << endl;
    }
};

class Monkey : public Animal {
public:
    void Voice() override {
        cout << "Uhuhaha" << endl;
    }
};
int main()
{
    Animal** MassAnimal = new Animal*[3];
    MassAnimal[0] = new Dog;
    MassAnimal[1] = new Cat;
    MassAnimal[2] = new Monkey;
    for (int i = 0; i < 3; i++) {
        MassAnimal[i]->Voice();
    }
    delete[] MassAnimal;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
