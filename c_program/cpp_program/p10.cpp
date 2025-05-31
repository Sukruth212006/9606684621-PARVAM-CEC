#include<iostream> 
using namespace std;
class base {
    protected:
    int protectedVar;
};
class derived : public base {
    public:
    void setProtectedVar(int value) {
        protectedVar = val; 
    }
    
    void showProtectedVar() {
        cout << "Protected Variable: " << protectedVar << endl;  
    }
};
int main()  {
    derived d;
    d.setProtectedVar(10);
     d.showprotectVar();
    return 0;
}