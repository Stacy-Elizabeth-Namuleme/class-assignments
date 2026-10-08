/*Scope is the specific stretch of source text in which a variable, function or class can legally be used.
a names that is declared inside a scope is said to be "in scope" starting at the line of it's declaration*/

//a correct one.
#include <iostream>
using namespace std;
void confirm_payment()
{
    log_transaction(); //error because log_transaction is not yet in scope because the compiler has not seen a declaration for it
}
void log_transaction(){
    confirm_payment(); //is fine because confirm_payment is in scope bc by the time the compiler sees it, it has been declared above
}