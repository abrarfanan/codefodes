#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Product
{
private:
    string name;
    double price;
    int quantity;

public:
    Product(string name, double price, int quantity)
    {
        this->name = name;
        this->price = price;
        this->quantity = quantity;
    }

    string getName() const
    {
        return name;
    }

    double getPrice() const
    {
        return price;
    }

    int getQuantity() const
    {
        return quantity;
    }

    void setQuantity(int quantity)
    {
        this->quantity = quantity;
    }
};

class ShoppingCart
{
private:
    vector<Product> items;

public:
    void addItem(const Product &product)
    {
        items.push_back(product);
    }

    void removeItem(int index)
    {
        if (index >= 0 && index < items.size())
        {
            items.erase(items.begin() + index);
        }
    }

    void displayCart() const
    {
        cout << "Shopping Cart:" << endl;
        for (const Product &product : items)
        {
            cout << "Product: " << product.getName() << ", Price: BDT  " << product.getPrice() << endl;
        }
    }
};

class Payment
{
private:
    string method;
    string cardNumber;
    string expirationDate;

public:
    Payment(string method, string cardNumber, string expirationDate)
    {
        this->method = method;
        this->cardNumber = cardNumber;
        this->expirationDate = expirationDate;
    }

    string getMethod() const
    {
        return method;
    }

    string getCardNumber() const
    {
        return cardNumber;
    }

    string getExpirationDate() const
    {
        return expirationDate;
    }
};

class User
{
private:
    string username;
    string password;

public:
    User(string username, string password)
    {
        this->username = username;
        this->password = password;
    }

    string getUsername() const
    {
        return username;
    }

    string getPassword() const
    {
        return password;
    }
};

int main()
{

    Product product1("Shirt", 1499, 2);
    Product product2("Jeans", 1249, 1);
    Product product3("Shoes", 2990, 1);

    ShoppingCart cart;

    cart.addItem(product1);
    cart.addItem(product2);
    cart.addItem(product3);

    cart.displayCart();

    cart.removeItem(1);

    cart.displayCart();

    Payment payment("Credit Card", "1234567890123456", "12/2023");

    User user("Anan", "2008008");

    cout << "Payment Method: " << payment.getMethod() << endl;
    cout << "Card Number: " << payment.getCardNumber() << endl;
    cout << "Expiration Date: " << payment.getExpirationDate() << endl;

    cout << "Username: " << user.getUsername() << endl;
    cout << "Password: " << user.getPassword() << endl;

    return 0;
}
