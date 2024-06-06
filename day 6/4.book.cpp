#include <iostream>
#include <string>
class Book {
private:
    std::string title;
    std::string author;
    int pages;
public:
    Book(std::string t, std::string a, int p) : title(t), author(a), pages(p) {
        std::cout << "Creating book: " << title << std::endl;
    }
    ~Book() {
        std::cout << "Destroying book: " << title << std::endl;
    }
    void displayDetails() {
        std::cout << "Title: " << title << std::endl;
        std::cout << "Author: " << author << std::endl;
        std::cout << "Pages: " << pages << std::endl;
    }
};
int main() {
    Book book1("The Great Gatsby", "F. Scott Fitzgerald", 180);
    book1.displayDetails();  
    return 0;
}
