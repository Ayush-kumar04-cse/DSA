# include <iostream>

using namespace std;
void fn1(int x)
{
    x = 12;
}
void fn2(int &y)
{
    y = 12;
}

int main()
{
    int a = 10;
    fn1(a);
    cout<<a<<endl;

    fn2(a);
    cout<<a;
    return 0;

}