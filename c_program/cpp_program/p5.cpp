#include <iostream>
using namespace std;
class Employee
{
    public:
          Employee()
          {
            cout<<"Default Constructor Invoked";

          }
          ~Employee()
          {
            cout<<"Destructor Evoked \n";
          }
};
int main(void)
{
    cout<<"in main func\n";
    cout<<"1st obj";
    Employee e1;
    cout<<"2nd obj\n";
    Employee e2;
    cout<<"ending main func\n";
        return 0;
}