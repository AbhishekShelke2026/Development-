#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
    
    private:
        int j;

    protected:
        int k;

    public:
        Demo()
        {
            i = 10;
            j = 20;
            k = 30;
        }
        friend void Fun();
        friend void Gun();
};

void Fun()
{
    Demo obj;
    cout<<obj.i<<"\n";
    cout<<obj.j<<"\n";
    cout<<obj.k<<"\n";

}
void Gun()
{
    cout<<"Gun pn friend ahe re kelya\n";
}

int main()
{
    Fun();
    Gun();

    return 0;
}