#include <iostream>
#include <string>

using namespace std;

class Admin {
private:
    string first_name;
    string last_name;
    string user_name;
    string password;
    string phone_number;
    string hiring_date;

public:
    Admin(string first, string last, string user, string pass, string phone, string hire)
        : first_name(first), last_name(last), user_name(user), password(pass), phone_number(phone), hiring_date(hire) {}

    bool login() {
        return (user_name == "admin" && password == "admin");
    }

    void displayBankBalance() {
        cout << "Bank Balance: $ " << endl;
    }

    void createClientAccount() {
    }

    void viewBankClients() {
    }

    void viewBankBranches() {

    }

    void displayCreditCardRequests() {
    }

    void displayChequebookRequests() {
    }
};

class Client {
private:
    string client_code;
    string first_name;
    string last_name;
    string user_name;
    string password;
    string phone_number;
    double balance;
    string joining_date;

public:
    Client(string code, string first, string last, string user, string pass, string phone, double bal, string join)
        : client_code(code), first_name(first), last_name(last), user_name(user), password(pass), phone_number(phone), balance(bal), joining_date(join) {}

    bool login() {
        return true;
    }

    void payInBalance(double amount) {
        balance += amount;
    }

    void withdrawBalance(double amount) {
        balance -= amount;
    }

    void viewBalance() {
        cout << "Current Balance: $" << balance << endl;
    }

    void requestCreditCard() {
    }

    void requestChequebook() {

    }
};

