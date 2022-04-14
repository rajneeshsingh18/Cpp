/*
Ques32.
 Create a class Room with room’s length, width, height as private members. Create default
and parametrized constructor to initialise values, create a function to calculate area and
volume of the room. Create objects of room1 & room2 and display their area and volume.
 */

#include <iostream>
using namespace std;

class Room{
    private:
        double lenght;
        double width;
        double height;
    public:
       Room(){
           lenght=width=height=0;
       }

       Room(double l , double w , double h){
           lenght=l;
           width=w;
           height=h;

       }

       double CalclutaeArea(){
           return this->lenght * this->width;
       }

       double Calculatevolume(){
           return this->lenght * this -> width * this -> height ;
       }

};

int main(){
    double l,w,h;
    

    cout<<"\nEnter room1 dimensions : ";
    cin>>l>>w>>h;

    Room room1(l,w,h);
    cout<<"\nArea of room1 : " <<room1.CalclutaeArea()<<endl;
    cout<<"\nvolume of room1 : " <<room1.Calculatevolume()<<endl;

     cout<<"\nEnter room2 dimensions : ";
    cin>>l>>w>>h;

    Room room2(l,w,h);
    cout<<"\nArea of room2 : " <<room2.CalclutaeArea()<<endl;
    cout<<"\nvolume of room2 : " <<room2.Calculatevolume()<<endl;
    return 0 ;
}
