#include <iostream>
using namespace std;

class MenuItem {
private:
    string name;
    double price;
public:
    MenuItem(string n, double p) : name(n), price(p) {}
    string getName() { return name; }
    double getPrice() { return price; }
};

void displayMenu() {
    cout << "\n----Menu----\n"
         << "1) Pizzas\n"
         << "2) Burgers\n"
         << "3) Sandwich\n"
         << "4) Rolls\n"
         << "5) Biryani\n";
}

int main() {
    string name;
    char choice;
    do {
        cout << "Please Enter Your Name: ";
        getline(cin, name);
        cout << "\nHello " << name << "\n";
        displayMenu();
        int option;
        cout << "\nPlease Enter your Choice: ";
        cin >> option;

        // Clear input buffer
      

        switch (option) {
            case 1: {
                // Handle Pizzas
                MenuItem tandooriPizza("Tandoori Pizza", 240.0);
                MenuItem cheesePizza("Cheese Pizza", 160.0);
                MenuItem vegPizza("Veg Pizza", 100.0);
                cout << "\n1) " << tandooriPizza.getName() << " Rs." << tandooriPizza.getPrice() << endl;
                cout << "2) " << cheesePizza.getName() << " Rs." << cheesePizza.getPrice() << endl;
                cout << "3) " << vegPizza.getName() << " Rs." << vegPizza.getPrice() << endl;
                cout << "\nPlease Enter which Pizza you would like to have?: ";
                int pizzaChoice;
                cin >> pizzaChoice;
                cout << "Please Enter Quantity: ";
                int pizzaQuantity;
                cin >> pizzaQuantity;
                double total = 0.0;
                switch (pizzaChoice) {
                    case 1:
                        total = tandooriPizza.getPrice() * pizzaQuantity;
                        break;
                    case 2:
                        total = cheesePizza.getPrice() * pizzaQuantity;
                        break;
                    case 3:
                        total = vegPizza.getPrice() * pizzaQuantity;
                        break;
                    default:
                        cout << "Invalid choice!\n";
                }
                cout << "\nYour Total Bill is " << total << "\n";
                cout << "Your Order Will be delivered in 40 Minutes\n";
                break;
            }
            case 2: {
                // Handle Burgers
                MenuItem zingerBurger("Zinger Burger", 240.0);
                MenuItem crispyBurger("Veg. Crispy Burger", 160.0);
                MenuItem vegBurger("Veg Burger", 100.0);
                cout << "\n1) " << zingerBurger.getName() << " Rs." << zingerBurger.getPrice() << endl;
                cout << "2) " << crispyBurger.getName() << " Rs." << crispyBurger.getPrice() << endl;
                cout << "3) " << vegBurger.getName() << " Rs." << vegBurger.getPrice() << endl;
                cout << "\nPlease Enter which Burger you would like to have?: ";
                int burgerChoice;
                cin >> burgerChoice;
                cout << "Please Enter Quantity: ";
                int burgerQuantity;
                cin >> burgerQuantity;
                double total = 0.0;
                switch (burgerChoice) {
                    case 1:
                        total = zingerBurger.getPrice() * burgerQuantity;
                        break;
                    case 2:
                        total = crispyBurger.getPrice() * burgerQuantity;
                        break;
                    case 3:
                        total = vegBurger.getPrice() * burgerQuantity;
                        break;
                    default:
                        cout << "Invalid choice!\n";
                }
                cout << "\nYour Total Bill is " << total << "\n";
                cout << "Your Order Will be delivered in 40 Minutes\n";
                break;
            }
            case 3: {
                // Handle Sandwiches
                MenuItem clubSandwich("Club Sandwich", 240.0);
                MenuItem crispySandwich("Veg. Crispy Sandwich", 160.0);
                MenuItem vegSandwich("Extream Veg Sandwich", 100.0);
                cout << "\n1) " << clubSandwich.getName() << " Rs." << clubSandwich.getPrice() << endl;
                cout << "2) " << crispySandwich.getName() << " Rs." << crispySandwich.getPrice() << endl;
                cout << "3) " << vegSandwich.getName() << " Rs." << vegSandwich.getPrice() << endl;
                cout << "\nPlease Enter which Sandwich you would like to have?: ";
                int sandwichChoice;
                cin >> sandwichChoice;
                cout << "Please Enter Quantity: ";
                int sandwichQuantity;
                cin >> sandwichQuantity;
                double total = 0.0;
                switch (sandwichChoice) {
                    case 1:
                        total = clubSandwich.getPrice() * sandwichQuantity;
                        break;
                    case 2:
                        total = crispySandwich.getPrice() * sandwichQuantity;
                        break;
                    case 3:
                        total = vegSandwich.getPrice() * sandwichQuantity;
                        break;
                    default:
                        cout << "Invalid choice!\n";
                }
                cout << "\nYour Total Bill is " << total << "\n";
                cout << "Your Order Will be delivered in 40 Minutes\n";
                break;
            }
            case 4: {
                // Handle Rolls
                MenuItem tandooriRoll("Sandwich Roll", 240.0);
                MenuItem crispyRoll("Veg. Crispy Roll", 160.0);
                MenuItem vegRoll("Veg Roll", 100.0);
                cout << "\n1) " << tandooriRoll.getName() << " Rs." << tandooriRoll.getPrice() << endl;
                cout << "2) " << crispyRoll.getName() << " Rs." << crispyRoll.getPrice() << endl;
                cout << "3) " << vegRoll.getName() << " Rs." << vegRoll.getPrice() << endl;
                cout << "\nPlease Enter which Roll you would like to have?: ";
                int rollChoice;
                cin >> rollChoice;
                cout << "Please Enter Quantity: ";
                int rollQuantity;
                cin >> rollQuantity;
                double total = 0.0;
                switch (rollChoice) {
                    case 1:
                        total = tandooriRoll.getPrice() * rollQuantity;
                        break;
                    case 2:
                        total = crispyRoll.getPrice() * rollQuantity;
                        break;
                    case 3:
                        total = vegRoll.getPrice() * rollQuantity;
                        break;
                    default:
                        cout << "Invalid choice!\n";
                }
                cout << "\nYour Total Bill is " << total << "\n";
                cout << "Your Order Will be delivered in 40 Minutes\n";
                break;
            }
            case 5: {
                // Handle Biryani
                MenuItem tandooriBiryani("Tandoori Biryani", 240.0);
                MenuItem tikkaBiryani("Tikka Biryani", 160.0);
                MenuItem vegBiryani("Veg Biryani", 100.0);
                cout << "\n1) " << tandooriBiryani.getName() << " Rs." << tandooriBiryani.getPrice() << endl;
                cout << "2) " << tikkaBiryani.getName() << " Rs." << tikkaBiryani.getPrice() << endl;
                cout << "3) " << vegBiryani.getName() << " Rs." << vegBiryani.getPrice() << endl;
                cout << "\nPlease Enter which Biryani you would like to have?: ";
                int biryaniChoice;
                cin >> biryaniChoice;
                cout << "Please Enter Quantity: ";
                int biryaniQuantity;
                cin >> biryaniQuantity;
                double biryaniTotal = 0.0;
                switch (biryaniChoice) {
                    case 1:
                        biryaniTotal = tandooriBiryani.getPrice() * biryaniQuantity;
                        break;
                    case 2:
                        biryaniTotal = tikkaBiryani.getPrice() * biryaniQuantity;
                        break;
                    case 3:
                        biryaniTotal = vegBiryani.getPrice() * biryaniQuantity;
                        break;
                    default:
                        cout << "Invalid choice!\n";
                }
                cout << "\nYour Total Bill is " << biryaniTotal << "\n";
                cout << "Your Order Will be delivered in 40 Minutes\n";
                break;
            }
            default:
                cout << "Invalid choice!\n";
        }
        cout << "Thank you For Ordering From Tops Tech Fast Food\n";
        cout << "Would you like to order anything else? (Y / N): ";
        cin >> choice;

        

    } while (choice == 'Y' || choice == 'y');
    return 0;
}
