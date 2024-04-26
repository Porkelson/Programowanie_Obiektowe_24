#include "SortShop.h"
using namespace std;



SortShop::SortShop():Shop()
{
   
}



SortShop::SortShop(const Shop &shop) : Shop(shop)
{
    Sort();
}

void SortShop::Sort()
{
    sort(sklep.begin(),sklep.end(), [](Product& a, Product& b)
    {
        return a<b;
    });
}

void SortShop::Add(Product &other)
{
    Shop::Add(other);
    this->Sort();

}
Product &SortShop::operator[](size_t a) 
{
    this->Sort();
    return sklep[a];
}

SortShop SortShop::operator()(size_t a, size_t b)
{
    this->Sort();
    SortShop other=Shop::operator()(a,b);
    return other;
    
}

std::ostream &operator<<(std::ostream &os,  SortShop &other)
{
    
    other.Sort();
    return operator<<(os, static_cast<Shop>(other));;
}
