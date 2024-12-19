#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string newBook;
    int bookAmmount;
    int menuChoice;
    string searchPhrase;
    vector<string> books;
    while(true){
        cout << "What do you want to do?" << endl;
        cout << "[1] Add books" << endl;
        cout << "[2] Display all books" << endl;
        cout << "[3] Search for a book" << endl;
        cout << "Choose an option: ";
        cin >> menuChoice;
        if(menuChoice == 1)
        {
            cin >> bookAmmount;

            for(int i = 0; i <= bookAmmount; i++){
                cout << "Please enter a name of a book: ";
                cin >> newBook;
                books.push_back(newBook);
            }
        }
        else if(menuChoice == 2)
        {
            for (int i = 0; i < books.size(); i++) {
                cout << books[i] << "\n";
            }
        }
        else if(menuChoice == 3)
        {
            cout << "Please enter a search phrase: ";
            cin >> searchPhrase;

            // Fixed line
            auto it = find(books.begin(), books.end(), searchPhrase);
            if (it != books.end()) {
                cout << "Book found: " << *it << endl;
            } else {
                cout << "Book not found." << endl;
            }
        }
        else
        {
            cout << "WRONG OPTION!" << endl;
        }
    }


    return 0;
}
