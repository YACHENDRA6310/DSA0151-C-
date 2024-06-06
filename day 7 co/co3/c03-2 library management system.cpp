#include <iostream>
#include <stack>
#include <string>

using namespace std;
class Book {
private:
    int bookID;
    string bookName;

public:
    Book(int id, const string& name) : bookID(id), bookName(name) {}

    int getBookID() const {
        return bookID;
    }
    string getBookName() const {
        return bookName;
    }
};
class User {
private:
    int regNo;
    string userName;

public:
    User(int reg, const string& name) : regNo(reg), userName(name) {}
    int getRegNo() const {
        return regNo;
    }
    string getUserName() const {
        return userName;
    }
};
class Library {
private:
    stack<Book> bookStack;
    stack<User> userStack;

public:
    void addBook(int id, const string& name) {
        Book book(id, name);
        bookStack.push(book);
    }
    void addUser(int reg, const string& name) {
        User user(reg, name);
        userStack.push(user);
    }
    bool isBookAvailable() const {
        return !bookStack.empty();
    }
    void distributeBook() {
        if (!isBookAvailable()) {
            cout << "No books available in the library." << endl;
            return;
        }

        Book book = bookStack.top();
        bookStack.pop();

        if (userStack.empty()) {
            cout << "No users available to distribute the book." << endl;
            bookStack.push(book); 
            return;
        }
        User user = userStack.top();
        userStack.pop();

        cout << "Book \"" << book.getBookName() << "\" with ID " << book.getBookID()
             << " has been distributed to User \"" << user.getUserName() << "\" with Reg No. " << user.getRegNo() << endl;
    }
};
int main() {
    Library library;
    library.addBook(101, "Introduction to C++");
    library.addBook(102, "Data Structures and Algorithms");
    library.addUser(1001, "John Doe");
    library.addUser(1002, "Jane Smith");
    library.distributeBook();
    library.distributeBook();
    library.distributeBook();
    library.distributeBook();

    return 0;
}
