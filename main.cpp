/* В первой строке файла содержится 1 целое число. Во второй строке  задано 15 целых чисел.
* Программа должна считать файл и выполнить операцию сложения числа из первой строки с каждым числом из второй строки.
* Выходной файл должен содержать 15 чисел – результаты выполнения операций сложения.
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream FileIn("Input.txt");
    if (!FileIn.is_open())
        cout << "Файл не может быть открыт!\n";
    ofstream FileOut("Output.txt", ios_base::trunc);

    int read_a, read_b;
    FileIn >> read_a >> read_b;

    for (int i = 0; i < 15; i++)
    {
        FileOut << read_a + read_b << ' ';
        FileIn  >> read_b;
    }

    FileIn.close();
    FileOut.close();

    return 0;
}
