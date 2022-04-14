#include <iostream>
#include <cstring>
using namespace std;

//Defining a struct of type Books
struct Books {
     char title[50];
     char author[100];
     int bookid;
     float price;
};

//function prototype  of printstruct
void printstruct(struct Books bk);

int main(){
    
    struct Books book1 , book2;

    // bk book1 ;
     
    //book1 specifictaion 
    strcpy(book1.title,"CSA ");
    strcpy(book1.author,"Morris");
    book1.bookid=51728;
    book1.price=340.5;
    
    //print book1 info using function
    printstruct( book1); 

    cout<<endl;
    cout<<endl;

    //book2 specification
    // (.) member access operator dot for accessing structure members
    strcpy(book2.title,"C++");
    strcpy(book2.author,"Robert");
    book2.bookid=356463;
    book2.price=560.23;

    //printing book2 info in normal way
    cout<<"Title of book2 is "<<book2.title<<endl;
    cout<<"Author of book2 is "<<book2.author<<endl;
    cout<<"Bookid of book2 is "<<book2.bookid<<endl;
    cout<<"Price of book2 is "<<book2.price<<endl; 
     
     //same using function
    printstruct(book2);


    return 0;
}

//function definition for print structure 
void printstruct(struct Books bk){
    cout<<"Title of book is "<<bk.title<<endl;
    cout<<"Author of book is "<<bk.author<<endl;
    cout<<"Bookid of book is "<<bk.bookid<<endl;
    cout<<"Price of book is "<<bk.price<<endl;

}