#include <iostream>
#define SIZE 100

using namespace std;

class String 
{
private:
    char* str;
    int size;

public:
    static int count;

    String() : str{ new char[80] }, size{ 80 }
    {
        count++;
    }

    String(int size2) :str{ new char[size2] }, size{ size2 } 
    {
        count++;
    }

    String(const char* str2) 
    {
        size = strlen(str2) + 1;
        str = new char[size];
        strcpy_s(str, size, str2);
        count++;
    }

    String(const String& a) 
    {
        strcpy_s(str, size, a.str);
        count++;
    }

    void setstr()
    {
        gets_s(str, SIZE);
    }

    void getstr() const
    {
        cout << "\n" << str;
    }

    static int getCount() 
    {
        return count;
    }

    ~String() 
    {
        delete[] str;
        count--;
    }
};

int main() 
{
    setlocale(LC_ALL, "RUS");

    int size = 50;

    String str;
    String str2(size);
    String str3("hihihiha");

    cout << "Введите строки: ";
    str.setstr();
    str2.setstr();

    cout << "Кол-во строк созданных: \n" << str.getCount();

    cout << "stroki: ";
    str.getstr();
    str2.getstr();
    str3.getstr();

    return 0;
}

