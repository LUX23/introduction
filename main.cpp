/* � ������ ������ ����� ���������� 1 ����� �����. �� ������ ������  ������ 15 ����� �����.
* ��������� ������ ������� ���� � ��������� �������� �������� ����� �� ������ ������ � ������ ������ �� ������ ������.
* �������� ���� ������ ��������� 15 ����� � ���������� ���������� �������� ��������.
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream FileIn("Input.txt");
    if (!FileIn.is_open())
        cout << "���� �� ����� ���� ������!\n";
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
