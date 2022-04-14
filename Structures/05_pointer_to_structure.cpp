#include <iostream>
#include <cstring>

using namespace std;

//Defining struct of type Cars

struct Cars{
    char company[20];
    char model[20];
    int price;
    int carid;
     
};

void printstruct(struct Cars *cr );
int main(){
    //decalaring a struct of type Cars having variable name car1 
    struct Cars car1;
    
    //car1.specification
    strcpy(car1.company,"BMW");
    strcpy(car1.model,"S class");
    car1.price=1200000000;
    car1.carid=163712;

    //printing car1 info
    printstruct(&car1); 



    return 0;

}

// accesiing struct using pointer in function required  " -> " arrow perator .
void printstruct( struct Cars *cr){
    cout<<"Company : "<<cr->company<<endl;
    cout<<"Model : "<<cr->model<<endl;
    cout<<"Price : "<<cr->price<<endl;
    cout<<"carid : "<<cr->carid<<endl;
}