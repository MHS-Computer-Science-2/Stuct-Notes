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
    //Create 2 Products
    Product milk;
    milk.name = "2% Milk";
    milk.price = 2.99;

    Product oreos;
    oreos.name = "Double Stuff Oreos";
    oreos.price = 3.50;

    // You try: Make 3 more Products
    Product butter;
    butter.name = "Salted Butter";
    butter.price = 3.99;

    Product peeps;
    peeps.name = "Marshmallow Peets";
    peeps.price = 0.99;

    Product pbcups;
    pbcups.name = "Reeses Peanut Butter Cups";
    pbcups.price = 1.50;


    // You try: Find the average price by adding the 5 prices together and dividing by 5
    double average = (milk.price + oreos.price + butter.price + peeps.price + pbcups.price) / 5;
    cout << "Average Price: $" << average << endl;


    system("pause");
}

