#include <iostream>

using namespace std;

class Product {
    public:
    int productID;
    float price;


    Product(){
        productID=0;
        price=100;
    }

    Product(int i,float p){
        productID=i;
        price=p;
    }

    Product(const Product &S){
        productID=S.productID;
        price=S.price;
    }

    void display(){
        cout<<"productID : "<<productID<<endl;
        cout<<"price : "<<price<<endl;

    }

    void applyDiscount(double discountAmount);
};

void Product::applyDiscount(double discountAmount) {
    if (discountAmount > 0 && discountAmount <= price) {
        price -= discountAmount;
        cout << "Discount applied successfully!\n";
    } else {
        cout << "Invalid discount amount!\n";
    }
}

int main(){
  Product p1;
  p1.applyDiscount(50);
  Product p2(101,500);
  Product p3(p2);
  p1.display();
  p2.display();
  p3.display();

}
