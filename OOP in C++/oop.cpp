// #include <iostream>
// using namespace std;
// class Fruit
// {
//     public:
//     string name;
//     string color;
// };
// int main()
// {
//     Fruit apple;
//     apple.name = "Apple";
//     apple.color = "Red";
//     cout << "Name: " << apple.name << endl;
//     cout << "Color: " << apple.color << endl;

//     Fruit *mango=new Fruit();
//     mango->name = "Mango";
//     mango->color = "Yellow";
//     cout << "Name: " << mango->name << endl;
//     cout << "Color: " << mango->color << endl;
//     return 0;
// }

// Constructor

// #include <iostream>
// using namespace std;
// class Rectangle{
//     public:
//     int length;
//     int breadth;

//     Rectangle(){//default constructor
//         length = 0;
//         breadth = 0;
//         cout << "Rectangle object created." << endl;
//     }

//     Rectangle(int x,int y){//parameterised constructor
//         length = x;
//         breadth = y;
//         cout << "Rectangle object created with length " << length << " and breadth " << breadth << "." << endl;
//     }

//     Rectangle(Rectangle& r){//copy constructor-initialize an obj by existing obj.
//     length = r.length;
//     breadth = r.breadth;
//     }
// };
// int main(){
//     Rectangle r1;
//     cout<<r1.length << endl;
//     cout<<r1.breadth << endl;
//     Rectangle r2(5,10);
//     cout<<r2.length << endl;
//     cout<<r2.breadth << endl;

//     Rectangle r3=r2;
//     cout<<r3.length << endl;
//     cout<<r3.breadth << endl;
//     return 0;
// }

// Destructor

//  #include <iostream>
// using namespace std;
// class Rectangle{
//     public:
//     int length;
//     int breadth;

//     Rectangle(){//default constructor
//         length = 0;
//         breadth = 0;
//         cout << "Rectangle object created." << endl;
//     }

//     Rectangle(int x,int y){//parameterised constructor
//         length = x;
//         breadth = y;
//         cout << "Rectangle object created with length " << length << " and breadth " << breadth << "." << endl;
//     }

//     Rectangle(Rectangle& r){//copy constructor-initialize an obj by existing obj.
//     length = r.length;
//     breadth = r.breadth;
//     }

//     ~Rectangle(){//destructor
//         cout << "Destructor is called."<< endl;
//     }
// };
// int main(){
//     Rectangle *r1=new Rectangle();
//     cout<<r1->length << endl;
//     cout<<r1->breadth << endl;
//     delete r1;

//     Rectangle r2(5,10);
//     cout<<r2.length <<" "<<r2.breadth << endl;

//     Rectangle r3=r2;
//     cout<<r3.length <<" "<<r3.breadth << endl;
//     return 0;
// }





// Encapsulation

// #include <iostream>
// using namespace std;
// class ABC
// {
//     int x;

// public:
//     void setter(int n)
//     {
//         x = n;
//     }
//     int getter()
//     {
//         return x;
//     }
// };
// int main()
// {
//     ABC obj1;
//     obj1.setter(5);
//     cout << obj1.getter() << endl;
//     return 0;
// }


#include<iostream>
using namespace std;
class ABC{
    private:
    int x;
    public:
    void setter(int n){
        x=n;
    }
    int getter(){
        return x;
    }
};

int main(){
    ABC obj1;
    obj1.setter(5);
    cout<<obj1.getter()<<endl;
    return 0;
}