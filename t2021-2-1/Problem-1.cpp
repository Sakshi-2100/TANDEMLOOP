#include <iostream>
#include <string>
using namespace std;
 
class Calculator
{
   double a, b;
public:
   
    // Function to take input
    // from user
    void result()
    {
        cout << "Enter First Number: ";   
        cin >> a;
        cout << "Enter Second Number: ";  
        cin >> b;
    }
   
    double add()
    {
        return a + b;
    }
   
    double sub()
    {
        return a - b;
    }
   
    double mul()
    {
        return a * b;
    }
   
    double div()
    {
        if (b == 0)
        {
            cout << "Division By Zero" <<
                     endl;
            return 0;
        }
        else
        {
            return a / b;
        }
    }
};
 
// Driver code
int main()
{
    string s;
    Calculator c;
    cout << "Enter + to Add 2 Numbers" <<
            "\nEnter - to Subtract 2 Numbers" <<
            "\nEnter * to Multiply 2 Numbers" <<
            "\nEnter / to Divide 2 Numbers" <<
            "\nEnter 0 To Exit";
         
        cout << "\nEnter Choice: ";
        cin>>s;
        if(s=="+"){
            c.result();    
             
            cout << "Result: " <<
                     c.add() << endl;
        }
        else if(s=="-"){
             
            c.result();
            cout << "Result: " <<
                     c.sub() << endl;
}

        else if(s=="*"){
            c.result();
             
            cout << "Result: " <<
                     c.mul() << endl;
        }
        else if(s=="/"){
            c.result();
             
            cout << "Result: " <<
                     c.div() << endl;
        }
        else {
            cout<<"INVALID INPUT"<<endl;
        }
         
     
    return 0;
}
