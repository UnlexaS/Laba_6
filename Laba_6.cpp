// Laba_6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <typeinfo>
#include <locale.h>


using namespace std;

template <class T>
class Massiv {
private:

    T *massiv = new T;
    int N;

public:

    Massiv() {
        int N = 0;
        T* massiv = NULL;
    }

    Massiv(const Massiv<T>& a) {
        this->N = a.n;
        this->massiv = new T[N];
        for (int i = 0; i < N; i++) {
            this->massiv[i] = a.msint[i];
        }
    }

    Massiv(T* msint, int n) {
        this->N = n;
        massiv = new T[N];
        for (int i = 0; i < N; i++) {
            this->massiv[i] = msint[i];
        }
    }

    void add() {

        this->N += 1;
        cout << endl << "Dop element: ";
        cin >> massiv[N-1];

    }

    void del() {
        cout << endl << "Index del: ";
        int index;
        cin >> index;
        T* temparr = new T[N];
        for (int i = 0; i < N; i++) {
            temparr[i] = massiv[i];
        }
        this->N = N - 1;
        T* massiv = new T[N];
        int i = 0;
        for (int g = 0; g < index; g++) {
            this->massiv[i] = temparr[g];
            i++;
        }
        for (int g = index + 1; g <= N; g++) {
            this->massiv[i] = temparr[g];
            i++;
        }
    }

    void search() {
        T find;
        cout << "Element value: ";
        cin >> find;
        int i = 0;
        while (massiv[i] != find) {
            i++;
        }
        cout << "Value number: " << i;
    }

    void ordering() {
        T temp;
        for (int i = 0; i < N - 1; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                if (massiv[i] > massiv[j])
                {
                    temp = massiv[i];
                    massiv[i] = massiv[j];
                    massiv[j] = temp;
                }
            }
        }
    }

    void Print() {
        cout << endl;
        for (int i = 0; i < N; i++) {
            cout << "Element [" << i << "] = " << massiv[i] << endl;
        }
    }

};


int main()
{
    setlocale(LC_ALL,"Russian");
    int n = 0;
    cout << "Kov-vo elementov massiva: ";
    cin >> n;

    int* msint = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "Element [" << i << "] = ";
        cin >> msint[i];
    }
    Massiv<int> arr(msint, n);


    int number = 0;
    do {

        cout << endl<< endl << endl << "------------MENU------------" << endl;
        cout << "1. Добавить элемент" << endl;
        cout << "2. Удалить элемент" << endl;
        cout << "3. Поиск элемента" << endl;
        cout << "4. Просмотр" << endl;
        cout << "5. Упорядочивание" << endl;
        cout << "0. Выход" << endl;
        cout << "----------------------------" << endl;

        cin >> number;

            switch (number) {
            case 1:
                arr.add();
                break;
            case 2:
                arr.del();
                break;
            case 3:
                arr.search();
                break;
            case 4:
                arr.Print();
                break;
            case 5:
                arr.ordering();
                break;
            }

    } while (number != 0);

    system("pause");

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
