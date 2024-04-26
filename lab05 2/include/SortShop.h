#include "Shop.h"

class SortShop : public Shop
{
private:
    

public:

    /**
     * @brief Konstruktor obiektu typu SortShop 
     * 
     */
    SortShop();

    /**
     * @brief Konsturktor obiektu SortShop z obiektem Shop, sortuje wektor produktow
     * 
     * @param Shop shop
     */
    SortShop(const Shop& shop);

    /**
     * @brief Zaprzyjazniona funkcja wypisujaca wszystkie elementy wektora SortShop do strumienia wyjsciowego os
     * 
     * @param std::ostream& os 
     * @param SortShop& other 
     * @return std::ostream& 
     */
    friend std::ostream& operator<<(std::ostream& os,  SortShop& other);

    /**
     * @brief Metoda sortuje wektor produktow i zwraca obiekt Produt o indeksie a z wektora
     * 
     * @param size_t a 
     * @return Product& 
     */
    Product &operator[](size_t a);

    /**
     * @brief Operator sortujacy wektor produktow i zwracajacy obiekt SortShop z wektorem produktow o indeksach a i b
     * 
     * @param size_t a 
     * @param size_t b 
     * @return SortShop 
     */
    SortShop operator()(size_t a, size_t b);
    
    /**
     * @brief Metoda sortujaca wektor obiektu SortShop
     * 
     */
    void Sort();

    /**
     * @brief Metoda dodajaca obiekt Product do wektora SortShop i nastepnie sortujaca go
     * 
     * @param Product other 
     */
    void Add(Product &other);
};