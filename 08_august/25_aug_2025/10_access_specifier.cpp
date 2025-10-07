#include <iostream>
using namespace std;

class Base {
public:
    void publicFunction() { cout << "Public function of Base" << endl; }
protected:
    void protectedFunction() { cout << "Protected function of Base" << endl; }
private:
    void privateFunction() { cout << "Private function of Base" << endl; }
};

// Public inheritance
class DerivedPublic : public Base {
public:
    void show() {
        publicFunction();       // Accessible
        protectedFunction();    // Accessible
        // privateFunction();   // Not accessible
    }
};

// Private inheritance
class DerivedPrivate : private Base {
public:
    void show() {
        publicFunction();       // Accessible inside class
        protectedFunction();    // Accessible inside class
    }
};

int main() {
    DerivedPublic dp;
    dp.publicFunction();        // Accessible due to public inheritance

    DerivedPrivate dpr;
    // dpr.publicFunction();    // Not accessible due to private inheritance
    return 0;
}
