#include<iostream>
#include<string>

class Book {
public:
    Book(std::string title, std::string author) {
        this->title = title;
        this->author = author;
        std::cout << "Book Created: '" << title << "' by " << author << "\n";
    }
    ~Book() {
        std::cout << "Book Destroyed: '" << title << "' by " << author << "\n";
    }
private:
    std::string title;
    std::string author;
};

int main() {
    Book myBook("The Great Gatsby", "F. Scott Fitzgerald");
    return 0;
}

