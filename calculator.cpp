#include <iostream>
using namespace std;
double calculator(double x, double y, char c)
{
    switch (c)
    {
    case '+':
        return x + y;
        break;
    case '-':
        return x - y;
        break;
    case '*':
        return x * y;
        break;
    case '/':
        return x / y;
        break;

    default:
        cout << "Wrong operation entered please enter again"<<endl;
    }
}
int main()
{   char c;
    cout<<"Enter the operation perform"<<endl;
    cout<<"+ for Addition"<<endl<<"- for substraction"<<endl<<"* for Multiplication"<<endl<<"/ for Division"<<endl;
    cin>>c;

    double a,b;
    cout<<"Enter the first number"<<endl;
    cin>>a;
    cout<<"Enter the second number"<<endl;
    cin>>b;
    double ans=calculator(a,b,c);
    cout<<"Your answer is:"<<ans;

    return 0;
    
}