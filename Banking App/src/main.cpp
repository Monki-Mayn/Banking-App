#include <iostream>
#include <string>

class Account {
private:
	std::string mName{};
	int mAccountNumber{};
	double mBalance{};

public:
	Account(std::string name, int accountNumber, double balance) {
		mName = name;
		mAccountNumber = accountNumber;
		mBalance = balance;
	}

	void deposit(double amount) {
		mBalance += amount;
		std::cout << "Successfully Deposited " << amount << " in account " << mAccountNumber;
	}
	void withdraw(double amount) {
		if (mBalance >= amount) {
			mBalance -= amount;
			std::cout << "Successfully Withdrew " << amount << " from account " << mAccountNumber;
		}
		else
			std::cout << "Insufficient Funds";
	}
	double getBalance() {
		return mBalance;
	}
};

class User {
private:
	std::string mUsername{};
	std::string mPassword{};

public:
	User(std::string username, std::string password) {
		mUsername = username;
		mPassword = password;
	}
};

int main()
{
	Account a1("Rudy", 12102, 15000.0);
	a1.deposit(5000.0);
	std::cout << "\nCurrent Balance: " << a1.getBalance() << std::endl;

	a1.withdraw(5000.0);
	std::cout << "\nCurrent Balance: " << a1.getBalance() << std::endl;

	a1.withdraw(15000.0);
	std::cout << "\nCurrent Balance: " << a1.getBalance() << std::endl;

	a1.withdraw(16000.0);
	std::cout << "\nCurrent Balance: " << a1.getBalance() << std::endl;

}