#include <iostream>
#include "Account.h"

int main()
{
    Account asem_acount(1000);
    Account hosssam_acount(2000);
    asem_acount.displayStatus();
    asem_acount.makeDeposit(500);
    asem_acount.displayStatus();
    asem_acount.makeWithdrawal(200);
    asem_acount.displayStatus();
    asem_acount.makeWithdrawal(2000);
    asem_acount.displayStatus();
    hosssam_acount.displayStatus();
    hosssam_acount.makeDeposit(500);
    hosssam_acount.displayStatus();
    hosssam_acount.makeWithdrawal(200);
    hosssam_acount.displayStatus();
    hosssam_acount.makeWithdrawal(2000);
    hosssam_acount.displayStatus();
    Account::displayAccountsInfos();


    return 0;
}