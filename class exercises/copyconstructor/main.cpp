#include <string>
#include <iostream>
#include <cstring>

using namespace std;

class String
{
private:
    char* m_Buffer;
    unsigned int m_Size;
public:
    String(const char* string)
    {
        m_Size = strlen(string);
        m_Buffer = new char[m_Size + 1];
        memcpy(m_Buffer, string, m_Size);
        m_Buffer[m_Size] = 0;
    }

    String(const String& other)
        :m_Size(other.m_Size)
    {
        cout << "Copied!" << endl;
        m_Buffer = new char [m_Size + 1];
        memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
    }

    ~String()
    {
        delete[] m_Buffer;
    }

    char& operator[](unsigned int index)
    {
        return m_Buffer[index];
    }
    friend ostream& operator<<(ostream& COUT, const String& string);
};

ostream& operator<<(ostream& COUT, const String& string)
{
    COUT << string.m_Buffer;
    return COUT;
}

void PrintString(const String& string)
{
    cout << string << endl;
}


int main()
{
    String string = "Ferit";
    String second = string; 
    PrintString(string);
    PrintString(second);
    return 0;
}