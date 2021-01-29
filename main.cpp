#include <iostream>

using namespace std;

int main()
{
    string customerName;
    int UniqueId;
    string printer = "printer";
    string phone = "phone";
    string table = "table";
    string customerItem;
    int numberOfItems;
    double vat = 0.12;
    double amountPaid;
    double amount;
    double totalAmount;
    double balance;

    cout << "Please Enter Your Name: "<<endl;
    cin>> customerName;

    cout << "Please Enter Your Unique Id: "<<endl;
    cin>> UniqueId;

    cout << "Would You Like To Buy a Printer, a Phone or a Table"<<endl;
    cin>> customerItem;



     if(customerItem == printer || customerItem == phone || customerItem == table){
        cout<<"How Many " << customerItem << "s Would You Like To Buy"<<endl;
        cin>> numberOfItems;
         amount = 15 * numberOfItems;
         totalAmount = amount + vat;
        cout<<"The Price of a Printer is GHS" << totalAmount<<endl;


     }
     else{
        cout <<"Sorry, Item Is Unavailable"<<endl;
     }


     cout<<"Please Enter The Amount You Would Like Pay"<<endl;
        cin>> amountPaid;


        if(amountPaid > totalAmount || amountPaid == totalAmount){
            balance = amountPaid - totalAmount;
        }
        else{
            cout<<"Insufficient Funds!!"<<endl;
        }
        cout<<"Customer's Name: "<<customerName<<endl;
        cout<<"Unique Id: "<<UniqueId<<endl;
        cout<<"Item Bought: "<<customerItem<<endl;
        cout<<"Quantity Bought: "<<numberOfItems<<endl;
        cout<<"Vat Amount: "<<vat<<endl;
        cout<<"Total Cost: GHS"<<totalAmount<<endl;
        cout<<"Total Amount Paid: GHS"<<amountPaid<<endl;
        cout<<"Balance: GHS"<<balance<<endl;
        cout<<"Thank You For Transacting with us"<<endl;
}
