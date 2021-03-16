#include <iostream>
#include <string>


using namespace std;


class Player
{
private:
    string name{"Cornel"};
    int health;
    int xp;
    
public:
    void say_something(string text_to_say)
    {
        cout<<name<<" said "<<text_to_say<<endl;
    }
    
    bool is_dead();
};


int main()
{
    Player coco;
    //coco.name="Pulea";  //error caused by the access modifier which is private
    coco.say_something(" Cocar!!! ");
    
    Player *bibbestos=new Player();
    bibbestos->say_something(" La multi ani!!!");
    
    return 0;
}