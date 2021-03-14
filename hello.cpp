#include <iostream>

using namespace std;

class work
{
public:
    work operator +(const work &b)
    {
        work w;
        w.length = this->length + b.length; 
        return w;
    }

    int getLength()
    {
        return length;
        }

    int length;
};

int max(double f1, double f2)
{
    return 1;
}

int max(int n1, int n2)
{
    return 2;
}

int main(void)
{
    work t, u;
    t.length = 10;
    u.length = 5;
    cout << t.length << " " << t.getLength() << "\n";
    work v;
    v = t + u;
    cout << v.getLength() << "\n";
    return 1;
}

// D:/Sublime Text 3/sublime_text.exe [file name]:[line number]
