#include "Product.h"
#include <iostream>

using namespace std;

Product::Product()
{

}

Product::Product(int a, int b)
{
    type=a;
    quantity=b;
}


int &Product::operator[](size_t indeks)
{
    if(indeks == 0) return type;
    else if(indeks == 1) return quantity;
}

const int &Product::operator[](size_t indeks) const
{
    if(indeks == 0) return type;
    else if(indeks == 1) return quantity;
}

Product Product::operator++()
{
    ++quantity;
    return *this;
}

Product Product::operator++(int)
{
    Product tmp = *this;
    quantity++;
    return tmp;
}

Product Product::operator--()
{
    --quantity;
    if(quantity<0)quantity=0;
    return *this;
}

Product Product::operator--(int)
{
    Product tmp = *this;
    quantity--;
    if(quantity<0)quantity=0;
    return tmp;
}

Product Product::operator+(int a)
{
    Product tmp = *this;
    tmp.quantity +=a;
    return tmp;
}

Product Product::operator-(int a)
{
    Product tmp = *this;
    tmp.quantity -=a;
    if(tmp.quantity<0)tmp.quantity = 0;
    return tmp;
}


Product Product::operator*(int a)
{
    Product tmp = *this;
    tmp.quantity *=a;
    return tmp;
}


int Product::operator<(Product &other)
{
    return quantity<other.quantity;
}

int Product::operator>(Product &other)
{
    return quantity>other.quantity;
}

int Product::operator<=(Product &other)
{
    return quantity<=other.quantity;
}

int Product::operator>=(Product &other)
{
    return quantity>=other.quantity;
}

int Product::operator!=(Product &other)
{
    return quantity!=other.quantity;
}

int Product::operator==(Product &other)
{
    return quantity==other.quantity;
}

std::ostream& operator<<(std::ostream &os, const Product &other)
{
    
    os<<"typ: "<<other.type<<", ilosc sztuk: "<<other.quantity<<endl;
    return os;
}
