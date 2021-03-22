//MOVE CONSTRUCTORS

#include <iostream>
#include  <vector>

using namespace std;

class Move
{
    //Attributes
private:
    int *data;
    
    //Methods
public:
    void set_data_value(int d)
    {
        *data=d;
    }
    
    int get_data_value()
    {
        return *data;
    }
    
    //Constructor
    Move(int d);
    //Deep copy constructor
    Move(const Move &source);
    //Move constructor
    Move(Move &&source) noexcept;
    
    //Destructor
    ~Move();
};

Move::Move(int d)
{
    data=new int;
    *data=d;
}

Move::Move(const Move &source)
{
    data=new int;
    *data=*source.data;
    cout<<"Copy Constructor - deep copy for: "<<*data<<endl;
}


Move::Move(Move &&source) noexcept
: data(source.data)  //steal the data and null out the source data
{
    source.data=nullptr;
    cout<<"Move constructor - moving resource for: "<<*data<<endl;
}


Move::~Move()
{
    if(data!=nullptr)
    {
         cout<<"Destructor appealed for: "<<*data<<endl;
    }
    else
    {
        cout<<"Destructor appealed for nullptr"<<endl;
    }
    
    delete data;
   
}


int main()
{
    vector<Move> my_vector;
    my_vector.push_back(Move{10});
    
    my_vector.push_back(Move{20});
    my_vector.push_back(Move{30});
    my_vector.push_back(Move{40});
    my_vector.push_back(Move{50});
    
    return 0;
}