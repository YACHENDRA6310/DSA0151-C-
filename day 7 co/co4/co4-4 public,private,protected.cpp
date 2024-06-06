#include <iostream>

class BaseClass {
public:
    int publicMember;    
protected:
    int protectedMember;
private:
    int privateMember;  

public:
    
    BaseClass(int pub, int prot, int priv) : publicMember(pub), protectedMember(prot), privateMember(priv) {}
    void displayMembers() {
        std::cout << "Public member: " << publicMember << std::endl;
        std::cout << "Protected member: " << protectedMember << std::endl;
        std::cout << "Private member: " << privateMember << std::endl;
    }
};

class DerivedClass : public BaseClass {
public:

    DerivedClass(int pub, int prot, int priv) : BaseClass(pub, prot, priv) {}
    void displayDerivedMembers() {
    
        std::cout << "Public member in derived class: " << publicMember << std::endl;
        std::cout << "Protected member in derived class: " << protectedMember << std::endl;    
    }
};

int main() {
    DerivedClass derived(1, 2, 3);
    derived.displayDerivedMembers();

    return 0;
}
