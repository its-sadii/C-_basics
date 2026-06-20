#include<iostream>
#include<string>
using namespace std;

class softwareApplication
{
private:
    string UI;
public:
    string language ;
    string IDE;
    string Compiler;

    void setUI(string newUI){
        UI = newUI;
    }
    string getUI(){
        return UI;
    }

};

int main (){
    softwareApplication s1;
    s1.language = "C++";
    s1.IDE = "Visual Studio Code";
    s1.Compiler = "g++ compiler";
    s1.setUI("Graphical User Interface");

    cout << s1.language << endl;
    cout << s1.IDE << endl;
    cout << s1.Compiler << endl;
    cout << s1.getUI() << endl;
    return 0;
}

