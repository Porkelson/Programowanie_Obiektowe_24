#include "Shop.h"
#include "Product.h"
#include <iostream>

void Shop::Remove()
{
    if(!sklep.empty())sklep.pop_back();
    else cout<<"BLAD: PUSTO !"<<endl;
}

void Shop::Add(Product &other)
{
    sklep.push_back(other);
}

void Shop::Clear()
{
    sklep.clear();
}

int Shop::Sum()
{
    int sum = accumulate(sklep.begin(), sklep.end(), 0, [](int sum, const Product &produkt)
    {
        return sum+produkt[1];
    });
    return sum;
}

Shop::Shop()
{
}

Shop Shop::operator()(size_t a, size_t b)
{
    Shop other;
    for(int i = a; i<=b; i++)
    {
        other.Add(sklep[i]);
    }
    return other;
}

Shop::Shop(const Shop &other) : sklep(other.sklep)
{
    
}

Product &Shop::operator[](size_t a)
{
    return sklep[a];
}

const Product &Shop::operator[](size_t a) const
{
    return sklep[a];
}

Shop Shop::operator-(int a)
{
    Shop tmp = *this;
    for(auto &produkt : tmp.sklep)
    {
        produkt=produkt-a;
    }
    return tmp;
}

Shop Shop::operator+(int a)
{
    Shop tmp = *this;
    for(auto &produkt : tmp.sklep)
    {
        produkt=produkt+a;
    }
    return tmp;
}

Shop Shop::operator*(int a)
{
    Shop tmp = *this;
    for(auto &produkt : tmp.sklep)
    {
        produkt=produkt*a;
    }
    return tmp;
}

int Shop::operator<(Shop &other)
{
    return Sum()<other.Sum();
}

int Shop::operator>(Shop &other)
{
    return Sum()>other.Sum();
}

int Shop::operator<=(Shop &other)
{
    return Sum()<=other.Sum();
}

int Shop::operator>=(Shop &other)
{
    return Sum()>=other.Sum();
}

int Shop::operator!=(Shop &other)
{
    return Sum()!=other.Sum();
}

int Shop::operator==(Shop &other)
{
    return Sum()==other.Sum();
}

std::ostream &operator<<(std::ostream &os, const Shop &other)
{
    os<<"---"<<endl<<"# Zawartosc/sklad:"<<endl;
    if(1)
    {
        for(auto &produkt : other.sklep)
        {
            os<<produkt;
        }
    }
    os<<"---"<<endl;
    return os;
}
