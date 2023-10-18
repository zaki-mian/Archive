#include <iostream>
#include <fstream>
#include <ctime>
#include <sstream>
#include <windows.h>
#include <iomanip>

using namespace std;

// Global variables
int income = 0;
int balance = 0;
int expense = 0;

// Function prototypes
void addIncome();
void addExpense();
void addSaving();
void calculateBalance();
void displayTransactionHistory();
void savingAmounts();
void screenclear();
void storedata(string, string, int);
void searchEngine();
void setColor(string);

// ANSI escape sequences for text colors
#define RESET "\033[0m"
#define CYAN "\033[36m"
#define YELLOW "\033[33m"

int main()
{

    int choice;
    int backToMenu;

    do
    {
        screenclear();
        cout << "********************************************************************************" << endl;
        cout << CYAN << "*                              Personal Finance System                          *" << RESET << endl;
        cout << "*                     Manage Your Finances with Ease and Joy!                   *" << endl;
        cout << "********************************************************************************" << endl;
        cout << YELLOW;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "                           Welcome to the Main Menu!                            " << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

        cout << "                       ======= Finance Account Menu =======\n\n\n";
        cout << setw(15) << "                                1. Add Income\n";
        cout << setw(15) << "                                2. Add Expense\n";
        cout << setw(15) << "                                3. Add Saving\n";
        cout << setw(20) << "                                4. Search\n";
        cout << setw(15) << "                                5. Saving accounts\n";
        cout << setw(15) << "                                6. Current Balance\n";
        cout << setw(20) << "                                7. Display Transaction History\n";
        cout << setw(10) << "                                8. Exit\n";
        cout << setw(15) << "                                Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            screenclear();
            addIncome();
            cout << "\n\n"
                 << "Press 1 to go back to menu - Reply: ";
            cin >> backToMenu;
            if (backToMenu == 1)
                goto label;
            else
                goto label01;

            break;
        case 2:
            screenclear();
            addExpense();
            cout << "\n\n"
                 << "Press 1 to go back to menu - Reply: ";
            cin >> backToMenu;
            if (backToMenu == 1)
                goto label;
            else
                goto label01;

            break;
        case 3:
            screenclear();
            addSaving();
            cout << "\n\n"
                 << "Press 1 to go back to menu - Reply: ";
            cin >> backToMenu;
            if (backToMenu == 1)
                goto label;
            else
                goto label01;

            break;
        case 4:
            screenclear();
            searchEngine();
            cout << "\n\n"
                 << "Press 1 to go back to menu - Reply: ";
            cin >> backToMenu;
            if (backToMenu == 1)
                goto label;
            else
                goto label01;

            break;
        case 5:
            screenclear();
            savingAmounts();
            cout << "\n\n"
                 << "Press 1 to go back to menu - Reply: ";
            cin >> backToMenu;
            if (backToMenu == 1)
                goto label;
            else
                goto label01;

            break;
        case 6:
            screenclear();
            calculateBalance();
            cout << "\n\n"
                 << "Press 1 to go back to menu - Reply: ";
            cin >> backToMenu;
            if (backToMenu == 1)
                goto label;
            else
                goto label01;

        case 7:
            screenclear();
            displayTransactionHistory();
            cout << "\n\n"
                 << "Press 1 to go back to menu - Reply: ";
            cin >> backToMenu;
            if (backToMenu == 1)
                goto label;
            else
                goto label01;

            break;
        case 8:
            screenclear();
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice! Please try again.\n";
        }
    label:
        cout << endl;
    } while (choice != 8);
label01:
    return 0;
}

void addIncome()
{
    int choice;
    cout << "                                Select income category:\n\n";
    cout << "                                1. Salary\n";
    cout << "                                2. Bonus\n";
    cout << "                                3. Side Hustle\n";
    cout << "                                Enter your choice: ";
    cin >> choice;

    string category;
    int amount;
    switch (choice)
    {
    case 1:
        category = "                                Salary";
        cout << "                                Enter salary amount: ";
        cin >> amount;
        break;
    case 2:
        category = "                                Bonus";
        cout << "                                Enter bonus amount: ";
        cin >> amount;
        break;
    case 3:
        category = "                                Side Hustle";
        cout << "                                Enter side hustle amount: ";
        cin >> amount;
        break;
    default:
        cout << "                                Invalid choice! Please try again.\n";
        return;
    }
    string mainbranch = "Income: ";
    storedata(mainbranch, category, amount);
}

void addExpense()
{
    int choice;
    cout << "                                Select expense category:\n";
    cout << "                                1. Transport\n";
    cout << "                                2. Education\n";
    cout << "                                3. Food\n";
    cout << "                                Enter your choice: ";
    cin >> choice;

    string category;
    int amount;
    switch (choice)
    {
    case 1:
        category = "                                Transport";
        cout << "                                Enter transport expense amount: ";
        cin >> amount;
        break;
    case 2:
        category = "                                Education";
        cout << "                                Enter education expense amount: ";
        cin >> amount;
        break;
    case 3:
        category = "                                Food";
        cout << "                                Enter food expense amount: ";
        cin >> amount;
        break;
    default:
        cout << "                                Invalid choice! Please try again.\n";
        return;
    }
    string mainbranch = "Expense: ";
    storedata(mainbranch, category, amount);
}

void addSaving()
{
    int choice;
    cout << "                                Select saving category:\n";
    cout << "                                1. House\n";
    cout << "                                2. Emergency\n";
    cout << "                                3. Vacation\n";
    cout << "                                Enter your choice: ";
    cin >> choice;

    string category;
    int amount;
    switch (choice)
    {
    case 1:
        category = "                                House";
        cout << "                                Enter house saving amount: ";
        cin >> amount;
        break;
    case 2:
        category = "                                Emergency";
        cout << "                                Enter emergency saving amount: ";
        cin >> amount;
        break;
    case 3:
        category = "                                Vacation";
        cout << "                                Enter vacation saving amount: ";
        cin >> amount;
        break;
    default:
        cout << "                                Invalid choice! Please try again.\n";
        return;
    }
    string mainbranch = "Savings: ";
    storedata(mainbranch, category, amount);
}

void calculateBalance()
{
    int totalIncome = 0, totalSaving = 0, totalExpense = 0;

    ifstream file("transaction_history.txt");
    string line;

    if (file.is_open())
    {
        while (getline(file, line))
        {
            // Check if the line starts with "Income:", "Expense:", or "Saving:"
            if (line.find("Income:") == 0)
            {
                // Extract the amount from the line
                int amount = stoi(line.substr(line.find("-") + 1));
                totalIncome += amount;
            }
            else if (line.find("Expense:") == 0)
            {
                // Extract the amount from the line
                int amount = stoi(line.substr(line.find("-") + 1));
                totalExpense += amount;
            }
            else if (line.find("Saving:") == 0)
            {
                // Extract the amount from the line
                int amount = stoi(line.substr(line.find("-") + 1));
                totalSaving += amount;
            }
        }
        file.close();
    }
    else
    {
        cout << "                                Unable to open file.\n";
    }
    balance = totalIncome - totalExpense - totalSaving;
    cout << "                                Your balance is: " << balance << endl;
}

void displayTransactionHistory()
{
    ifstream file("transaction_history.txt");
    string line;

    if (file.is_open())
    {
        cout << "                                ======= Transaction History =======\n";
        while (getline(file, line))
        {
            cout << line << endl;
        }
        file.close();
    }
    else
    {
        cout << "                                Unable to open file.\n";
    }
}

void savingAmounts()
{
    ifstream file("transaction_history.txt");
    string line;
    int totalSaving = 0;
    int totalHouse = 0, totalvacation = 0, totalemergency = 0;

    if (file.is_open())
    {
        while (getline(file, line))
        {
            if (line.find("Savings:") == 0)
            {
                // Extract the amount and category from the line
                int amount = stoi(line.substr(line.find("-") + 1));
                string category = line.substr(line.find(":") + 2, line.find("-") - line.find(":") - 3);

                totalSaving += amount;

                // Update the total amount for each category of expenses
                if (category == "House")
                {
                    totalHouse += amount;
                }
                else if (category == "Emergency")
                {
                    totalemergency += amount;
                }
                else if (category == "Vacation")
                {
                    totalvacation += amount;
                }
            }
            else if (line.find("Saving:") == 0)
            {
                // Extract the amount from the line
                int amount = stoi(line.substr(line.find("-") + 1));
                totalSaving += amount;
            }
        }
        file.close();

        cout << "                                ======= Total Amounts =======\n";
        cout << "                                Total Savings: " << totalSaving << endl
             << endl;
        cout << "                                ======= Category-wise Savings =======\n";
        cout << "                                House: " << totalHouse << endl;
        cout << "                                Emergency: " << totalemergency << endl;
        cout << "                                Vacation: " << totalvacation << endl;
    }
    else
    {
        cout << "                                Unable to open file.\n";
    }
}
// storing data into a file .txt using file handling which store data in this format like Expense: Transport - 100 [08-06-23]
void storedata(string mainbranch, string category, int amount)
{

    // Get current date
    time_t now = time(0);
    tm *time_info = localtime(&now);
    char date[10];
    strftime(date, sizeof(date), "%d-%m-%y", time_info);

    ofstream file("transaction_history.txt", ios::app);
    if (file.is_open())
    {
        file << mainbranch << category << " - " << amount << " [" << date << "]" << endl;
        file.close();
    }
    else
    {
        cout << "                                Unable to open file.\n";
    }
}
// fucntion to clear the screen so that it looks pleasing and things don't cultter up
void screenclear()
{
    cout << "\033[2J\033[1;1H";
}

// using this function in search engine fucntion to covert the in the format that i'll use to filter content during search
time_t convertToDate(const string &dateString)
{
    tm timeInfo = {};
    istringstream ss(dateString);
    ss >> get_time(&timeInfo, "%d-%m-%y");
    return mktime(&timeInfo);
}

void searchEngine()
{
    ifstream file("transaction_history.txt");
    string line;

    if (file.is_open())
    {
        // Get the main category choice from the user
        int mainCategoryChoice;
        cout << "                                Select main category:\n";
        cout << "                                1. Income\n";
        cout << "                                2. Expense\n";
        cout << "                                3. Saving\n";
        cout << "                                Enter your choice: ";
        cin >> mainCategoryChoice;

        // Get the start and end dates from the user
        string startDate, endDate;
        cout << "                                Enter the start date (dd-mm-yy): ";
        cin >> startDate;
        cout << "                                Enter the end date (dd-mm-yy): ";
        cin >> endDate;

        cout << "                                ======= Transaction History =======\n";

        // Convert start and end dates to time_t values
        time_t startTime = convertToDate(startDate);
        time_t endTime = convertToDate(endDate);

        while (getline(file, line))
        {
            // Extract the main category from the line
            string mainCategory = line.substr(0, line.find(":"));

            // Check if the main category matches the user's choice
            if ((mainCategoryChoice == 1 && mainCategory == "Income") ||
                (mainCategoryChoice == 2 && mainCategory == "Expense") ||
                (mainCategoryChoice == 3 && mainCategory == "Saving"))
            {
                // Extract the date from the line
                string date;
                size_t dateStartPos = line.find("[") + 1;
                size_t dateEndPos = line.find("]");
                if (dateStartPos != string::npos && dateEndPos != string::npos && dateEndPos > dateStartPos)
                {
                    date = line.substr(dateStartPos, dateEndPos - dateStartPos);

                    // Convert the date to a time_t value
                    time_t transactionTime = convertToDate(date);

                    // Compare the date with the start and end dates
                    if (transactionTime >= startTime && transactionTime <= endTime)
                    {
                        cout << line << endl;
                    }
                }
            }
        }

        file.close();
    }
    else
    {
        cout << "                                Unable to open file.\n";
    }
}
