#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class temp {
    string username, email, password;
    fstream file;

public:
    void login();
    void signup();
    void forgotpassword();
} obj;

int main() {
    char choice;

    cout << "1. Login\n";
    cout << "2. Sign-up\n";
    cout << "3. Reset password\n";
    cout << "4. Exit\n";

    cout << "Enter your choice?: ";
    cin >> choice;
    cin.ignore(); // clear leftover newline

    switch (choice) {
    case '1':
        obj.login();
        break;
    case '2':
        obj.signup();
        break;
    case '3':
        obj.forgotpassword();
        break;
    case '4':
        cout << "Exiting...\n";
        break;
    default:
        cout << "Invalid choice. Please try again.\n";
        break;
    }

    return 0;
}

void temp::signup() {
    cout << "Enter your username: ";
    getline(cin, username);

    cout << "Enter your email address: ";
    getline(cin, email);

    cout << "Enter your password: ";
    getline(cin, password);

    file.open("logindata.txt", ios::out | ios::app);
    if (file.is_open()) {
        file << username << " " << email << " " << password << "\n";
        file.close();
        cout << "Signup successful! Data saved.\n";
    } else {
        cout << "Error opening file!\n";
    }
}

void temp::login() {
    string u, p, e;
    bool found = false;

    cout << "Enter your username: ";
    getline(cin, u);

    cout << "Enter your password: ";
    getline(cin, p);

    file.open("logindata.txt", ios::in);
    if (file.is_open()) {
        string fu, fe, fp;
        while (file >> fu >> fe >> fp) {
            if (fu == u && fp == p) {
                cout << "Login successful! Welcome back, " << fu << ".\n";
                found = true;
                break;
            }
        }
        file.close();
        if (!found) {
            cout << "Login failed! Invalid username or password.\n";
        }
    } else {
        cout << "Error opening file!\n";
    }
}

void temp::forgotpassword() {
    string u, e;
    bool found = false;

    cout << "Enter your username: ";
    getline(cin, u);

    cout << "Enter your email address: ";
    getline(cin, e);

    file.open("logindata.txt", ios::in);
    if (file.is_open()) {
        string fu, fe, fp;
        while (file >> fu >> fe >> fp) {
            if (fu == u && fe == e) {
                cout << "Account found!\n";
                cout << "Enter your new password: ";
                getline(cin, password);

                // Rewrite file with updated password
                fstream tempFile("temp.txt", ios::out);
                file.clear();
                file.seekg(0, ios::beg);
                while (file >> fu >> fe >> fp) {
                    if (fu == u && fe == e) {
                        tempFile << fu << " " << fe << " " << password << "\n";
                    } else {
                        tempFile << fu << " " << fe << " " << fp << "\n";
                    }
                }
                tempFile.close();
                file.close();

                remove("logindata.txt");
                rename("temp.txt", "logindata.txt");

                cout << "Password reset successfully!\n";
                found = true;
                break;
            }
        }
        file.close();
        if (!found) {
            cout << "No account matches that username and email.\n";
        }
    } else {
        cout << "Error opening file!\n";
    }
}
