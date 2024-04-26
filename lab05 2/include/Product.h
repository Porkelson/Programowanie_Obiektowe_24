#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>


class Product
{
private:
    int type;
    int quantity;
protected:
public:
    /**
     * @brief Konstruktor obiektu Product
     * 
     */
    Product();

    /**
     * @brief Konstruktor obiektu Product z parametrami 
     * 
     * @param int a
     * @param int b 
     */
    Product(int , int);

    /**
     * @brief Zaprzyjazniona funkcja wypisujaca informacje o obiekcie Product do strumienia wyjsciowego os
     * 
     * @param std::ostream& os 
     * @param Product& other 
     * @return std::ostream& 
     */
    friend std::ostream& operator<<(std::ostream& os, const Product& other) ;

    /**
     * @brief Jeżeli indeks rowna sie 0, zwroc type, jezeli 1 zwroc quantity
     * 
     * @param size_t indeks 
     * @return int& 
     */
    int& operator[](size_t indeks); 

    /**
     * @brief Jeżeli indeks rowna sie 0, zwroc type, jezeli 1 zwroc quantity
     * 
     * @param size_t indeks 
     * @return const int& 
     */
    const int& operator[](size_t indeks) const;

    /**
     * @brief Dodaje do pola quantity 1
     * 
     * @return Product 
     */
    Product operator++();

    /**
     * @brief Dodaje do pola quantity parametr int
     * 
     * @param int
     * @return Product 
     */
    Product operator++(int);

    /**
     * @brief Odejmuje od pola quantity 1, zapewnia ze quantity nie bedzie mniejsze niz 0
     * 
     * @param int
     * @return Product 
     */
    Product operator--();

    /**
     * @brief Odejmuje od pola quantity parametr int, zapewnia ze quantity nie bedzie mniejsze niz 0
     * 
     * @param int
     * @return Product 
     */
    Product operator--(int);

    /**
     * @brief Dodaje do pola quantity parametr int
     * 
     * @param int a 
     * @return Product 
     */
    Product operator+(int a);

    /**
     * @brief Odejmuje od pola quantity parametr int, zapewnia ze quantity nie bedzie mniejsze niz 0
     * 
     * @param int a 
     * @return Product 
     */
    Product operator-(int a);

    /**
     * @brief Mnozy pole quantity przez parametr a
     * 
     * @param int a 
     * @return Product 
     */
    Product operator*(int a);

    /**
     * @brief Porownuje pole quantity obiektu z polem quantity obiektu other
     * 
     * @param Product& other 
     * @return int, zwraca 1 jesli quantity lewego obiektu jest mniejsze, 0 w przeciwnym wypadku
     */
    int operator<(Product& other);

    /**
     * @brief Porownoje pole quantity obiektu z polem quantity obiektu other
     * 
     * @param Product& other 
     * @return int, zwraca 1 jesli quantity lewego obiektu jest wieksze, 0 w przeciwnym wypadku
     */
    int operator>(Product& other);

    /**
     * @brief Porownoje pole quantity obiektu z polem quantity obiektu other
     * 
     * @param Product& other 
     * @return int, zwraca 1 jesli quantity lewego obiektu jest mniejsze lub rowne, 0 w przeciwnym wypadku
     */
    int operator<=(Product& other);

    /**
     * @brief Porownuje pole quantity obiektu z polem quantity obiektu other
     * 
     * @param Product& other 
     * @return int, zwraca 1 jesli quantity lewego obiektu jest wieksze lub rowne, 0 w przeciwnym wypadku
     */
    int operator>=(Product& other);

    /**
     * @brief Porownuje pole quantity obiektu z polem quantity obiektu other
     * 
     * @param Product& other 
     * @return int, zwraca 1 jesli quantity obu obiektow jest rozne, 0 w przeciwnym wypadku 
     */
    int operator!=(Product& other);

    /**
     * @brief Porownuje pole quantity obiektu z polem quantity obiektu other
     * 
     * @param Product& other 
     * @return int, zwraca 1 jesli quantity obu obiektow jest rowne, 0 w przeciwnym wypadku 
     */
    int operator==(Product& other);

};

#endif