#include <iostream>
#include <string>

class product{

    private:
        std::string name;
        

    protected: 
        int price;
        int quantity;

    public:
        void setName (int name){
            this-> name = name;
        }

        void getName(){
            std::cout << "Name: " << name << std::endl;
        }

        void setPrice(int price) {
            this-> product = product;
        }

        void getPrice(){
            std::cout << "Price: " << price << std::endl;
        }

        void setQuantity (int quantity){
            this-> quantity =  quantity;
        }

        void getQuantity() {
            std::cout << "Quantity: " << quantity << std::endl;
        }

class Soap : public Product{

    public:
        void showProduct() {
        std::cout << "Product: Soap" << std::endl;
        getName();
        getPrice();
        getQuantity();

        int total = price * quantity;
        std::cout << "Total: " << total << std::endl;
    }
        int total

        int main() {
            Soap soap;
            soap.setName("Bath soap");
            soap.setPrice(5);
            soap.setQuantity(3);

            soap.showProduct();


    return 0;
}