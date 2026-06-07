#include <iostream>
#include <fstream>
using namespace std;
void registerUser() {
    string username, password;
    cout << "Enter Username: ";
    cin >> username;
    cout << "Enter Password: ";
    cin >> password;
    ofstream file("users.txt", ios::app);
    file << username << " " << password << endl;
    file.close();
    cout << "Registration Successful!"<<endl;
}
void loginUser() {
    string username, password, user, pass;
    bool found = false;
    cout << "Enter Username: ";
    cin >> username;
    cout << "Enter Password: ";
    cin >> password;
    ifstream file("users.txt");
    while (file >> user >> pass) {
        if (username == user && password == pass) {
            found = true;
            break;
        }
    }
    file.close();
    if (found)
        cout << "Login Successful!\n";
    else
        cout << "Invalid Username or Password!\n";
}
int main() {
    int choice;
    cout << "1. Register"<<endl;
    cout<<"2.Login"<<endl;
    cout << "Enter Choice: ";
    cin >> choice;
    if (choice == 1)
        registerUser();
    else if (choice == 2)
        loginUser();
    else
        cout << "Invalid Choice!";
    return 0;
}