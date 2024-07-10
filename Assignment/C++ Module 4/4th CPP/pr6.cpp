// 6. Write a C++ Program to show access to Private Public and Protected using Inheritance

#include <iostream>
using namespace std;

class Base {
private:
    int a = 10;
protected:
    int b = 20;
public:
    int c = 30;
};

class PublicDerived : public Base {
public:
    void accessPublic() {
        cout << "Public member of Base: " << c << endl;
    }
    void accessProtected() {
        cout << "Protected member of Base: " << b << endl;
    }
};

class ProtectedDerived : protected Base {
public:
    void accessPublic() {
        cout << "Public member of Base: " << c << endl;
    }
    void accessProtected() {
        cout << "Protected member of Base: " << b << endl;
    }
};

class PrivateDerived : private Base {
public:
    void accessPublic() {
        cout << "Public member of Base: " << c << endl;
    }
    
};

int main() {
    cout << "Public Inheritance: " << endl;

    PublicDerived publicDerived;
    publicDerived.accessPublic();
    publicDerived.accessProtected(); 

    cout << "\nProtected Inheritance: " << endl;
    ProtectedDerived protectedDerived;

    protectedDerived.accessPublic();
    protectedDerived.accessProtected();
   
    cout << "\nPrivate Inheritance: " << endl;
    PrivateDerived privateDerived;
    privateDerived.accessPublic();
    return 0;
}