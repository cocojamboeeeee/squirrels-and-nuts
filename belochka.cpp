#include <iostream>
using namespace std;

int N, K, x;

int main()
{
    // ввод
    cout << "Enter the number of squirrels: "; // введите количество белочек
    cin >> N;
    cout << "Enter the number of nuts: "; // введите количество орешков
    cin >> K;

    // вычисление
    x = K / N; // количество орешков, которое достается каждой белочке
    int remaining = K % N; // количество оставшихся орешков

    // вывод
    cout << "The squirrels took " << x << " nuts each"; //  белочки взяли _ орешку каждая
    if (remaining > 0)
        cout << " and " << remaining << " squirrels took an extra nut"; // и _ остаток орешков
    cout << "." << endl;

    return 0;
}
