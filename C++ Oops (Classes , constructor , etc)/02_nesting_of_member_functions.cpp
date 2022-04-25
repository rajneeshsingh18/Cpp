#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "\nEnter a binary number : ";
    cin >> s;
}

void binary ::chk_bin(void)
{

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect binary format ";
            exit(0);
        }
    }
}

void binary ::ones_compliment()
{
      chk_bin(); //nesting of member function
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i)='1';
        }

        else{
            s.at(i)='0';
        }
    }
}

void binary::display(void){
    cout<<"\nDisplaying binary number :  ";

    for(int i=0 ; i<s.length();i++){
        cout<<s.at(i);
    }
    cout<<endl;
}

int main()
{

    binary bin;
    bin.read();
    // bin.chk_bin();
    bin.display();
    
    bin.ones_compliment();
    cout<<"\nAfter ones compliment : "<<endl;
    bin.display();


    return 0;
}