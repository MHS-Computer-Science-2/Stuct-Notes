// Struct Notes

#include <iostream>
using namespace std;

// A STRUCT is used to define an object
// An OBJECT is a variable that holds multiple values

struct Product {
    string name;
    double price;
}; 

//structs end with ;

// Product is the identifier for the struct (you pick)
// We can now make Product objects (variables)
// Each Product will have a name and a price attribute


int main()
{
    Product milk;
    milk.name = "2% Milk";
    milk.price = 2.99;

    Product oreos;
    oreos.name = "Double Stuff Oreos";
    oreos.price = 3.50;

    // You try: Make 3 more Products



    // You try: Find the average price by adding the 5 prices together and dividing by 5
            

    system("pause");
}

