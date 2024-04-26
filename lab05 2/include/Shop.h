#ifndef SHOP_H
#define SHOP_H
#include "Product.h"

using namespace std;

class Shop
{
    public:

    /**
     * @brief Usuwa ostatni element z wektora, jezeli jest pusty wyswietla komunikat
     * 
     */
    void Remove();

    /**
     * @brief Dodaje obiekt Product do wektora
     * 
     * @param Product& other 
     */
    void Add(Product& other);

    /**
     * @brief Usuwa wszystkie elementy z wektora
     * 
     */
    void Clear();

    /**
     * @brief Zwraca sume wartosci pol quantity z wektora
     * 
     * @return int 
     */
    int Sum();

    /**
     * @brief Konstruktor obiektu Shop
     * 
     */
    Shop();

    /**
     * @brief Przeciazony operator, zwraca obiekt Shop zawierajacy obiekty wektora o indeksach od a do b
     * 
     * @param size_t a 
     * @param size_t b 
     * @return Shop 
     */
    Shop operator()(size_t a, size_t b);

    /**
     * @brief Konstruktor obiektu Shop z obiektem Shop
     * 
     * @param Shop& other 
     */
    Shop(const Shop& other);

    /**
     * @brief Zaprzyjazniona funkcja wypisujaca wszystkie elementy wektora do strumienia wyjsciowego os
     * 
     * @param std::ostream& os 
     * @param Shop& other 
     * @return std::ostream& 
     */
    friend std::ostream& operator<<(std::ostream& os, const Shop& other) ;

    /**
     * @brief Zwraca obiekt Product z wektora o indeksie a
     * 
     * @param size_t a 
     * @return Product& 
     */
    Product& operator[](size_t a);

    /**
     * @brief Zwraca obiekt Product z wektora o indeksie a
     * 
     * @param size_t a 
     * @return const Product& 
     */
    const Product& operator[](size_t a) const;

    /**
     * @brief Odejmuje wartosc parametru a do pola quantity kazdego obiektu Product w wektorze 
     * 
     * @param int a 
     * @return Shop 
     */
    Shop operator-(int a);

    /**
     * @brief Dodaje wartosc parametru a do pola quantity kazdego obiektu Product w wektorze  
     * 
     * @param int a 
     * @return Shop 
     */
    Shop operator+(int a);

    /**
     * @brief Mnozy pola quantity kazdego obiektu Product w wektorze o wartosc parametru a   
     * 
     * @param int a 
     * @return Shop 
     */
    Shop operator*(int a);

    /**
     * @brief Porownuje wartosc sumy pol quantity obiektow Product w wektorze z obiektem Shop other
     * 
     * @param Shop& other 
     * @return int, 1 jezeli suma jest mniejsza, 0 w przeciwnym wypadku
     */
    int operator<(Shop& other);

    /**
     * @brief Porownuje wartosc sumy pol quantity obiektow Product w wektorze z obiektem Shop other
     * 
     * @param Shop& other 
     * @return int, 1 jezeli suma jest wieksza, 0 w przeciwnym wypadku
     */
    int operator>(Shop& other);

    /**
     * @brief Porownuje wartosc sumy pol quantity obiektow Product w wektorze z obiektem Shop other
     * 
     * @param Shop& other 
     * @return int, 1 jezeli suma jest mniejsza lub rowna, 0 w przeciwnym wypadku
     */
    int operator<=(Shop& other);

    /**
     * @brief Porownuje wartosc sumy pol quantity obiektow Product w wektorze z obiektem Shop other
     * 
     * @param Shop& other 
     * @return int, 1 jezeli suma jest wieksza lub rowna, 0 w przeciwnym wypadku
     */
    int operator>=(Shop& other);

    /**
     * @brief Porownuje wartosc sumy pol quantity obiektow Product w wektorze z obiektem Shop other
     * 
     * @param Shop& other 
     * @return int, 1 jezeli suma jest rozna, 0 w przeciwnym wypadku
     */
    int operator!=(Shop& other);

    /**
     * @brief Porownuje wartosc sumy pol quantity obiektow Product w wektorze z obiektem Shop other
     * 
     * @param Shop& other 
     * @return int, 1 jezeli suma jest rowna, 0 w przeciwnym wypadku
     */
    int operator==(Shop& other);

    protected:
    vector<Product> sklep;
    private:

};

#endif