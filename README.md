# Project-Idea5-bank-system-oop-
Project Idea5: bank system oop  c++


-------------------------------------------------------------------------------------------------------------------------

1- Classes in the system:

Admin:

Attributes:

first_name (string): Admin's first name
last_name (string): Admin's last name
user_name (string): Admin's username
password (string): Admin's password
phone_number (string): Admin's phone number
hiring_date (string): Admin's hiring date
Functions:

bool login(): Logs in the admin to the system.
void displayBankBalance(): Displays the bank balance.
void createClientAccount(): Creates a client account.
void viewBankClients(): Displays the bank's clients.
void viewBankBranches(): Displays bank branches.
void displayCreditCardRequests(): Displays credit card requests.
void displayChequebookRequests(): Displays chequebook requests.
Client:

2- Attributes:

client_code (string): Client's code
first_name (string): Client's first name
last_name (string): Client's last name
user_name (string): Client's username
password (string): Client's password
phone_number (string): Client's phone number
balance (double): Client's account balance
joining_date (string): Client's joining date

 3-Functions:

bool login(): Logs in the client to the system.
void payInBalance(double amount): Adds funds to the client's balance.
void withdrawBalance(double amount): Withdraws funds from the client's balance.
void viewBalance(): Displays the client's current balance.
void requestCreditCard(): Requests a credit card for clients with a current account.
void requestChequebook(): Requests a chequebook for clients with a deposit account.
