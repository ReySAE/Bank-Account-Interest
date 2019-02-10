 /*****************************************************************************************************************
 * program asks the user for a bank savings account balance and an annual interest rate that is paid to the account.  
 * It displays what the balance will be after one year, after two years, and after three years,
 * it will then proceed to inform the user of the financial club they are a member of.
 * 
 * @author Rey Saeed
 * @version 1.0
 ******************************************************************************************************************/

#include <iostream>
using namespace std;
int main()
{

/* 
* variables are declared in this segment  
*/

int basebalance ; //starting account value
 double I_rate ;  //interest rate divided by 100 to make the program more streamlined
  int primaryvalue1, primaryvalue2, primaryvalue3 ; // the value of the 1st, 2nd, 3rd year balance * interest rate 
   int Year1balance, Year2balance, Year3balance ; // the final value for the year after the interest rate is applied and the growth is added
     int final1, final2, final3 ; // these variables hold the difference between the balance and the club eligibility amount to display to the user
 
int silver, gold, platinum ; //club eligibility amounts declared for streamlined use
 silver = 1000;
  gold = 5000;
   platinum = 10000;

/*   
* this segment asks the user for input and stores those inputs as variables
* it also instructs the end-user on program function
*/
cout << "-----------------------------------------------------------------------------------------" << "\n" ;
cout << "|   Hello user, this program will calculate the balance of your account for 3 years,    |" << "\n" ;                                                                                                            
cout << "|   based on your current account balance and interest rate.                            |" << "\n" ;
cout << "|   Additionally, it will inform you on your financial club membership status           |" << "\n" ;                                                     
cout << "|   Please enter your account balance and interest rate as whole numbers, Thank you.    |" << "\n" ; 
cout << "-----------------------------------------------------------------------------------------" << "\n" ;


cout << "Enter your current account balance: $" ;
 cin >> basebalance ;
  cout << "\n";

    cout << "Enter the percent of interest rate paid: %";
     cin >> I_rate ;
       cout << "\n";

/*      
* this segment of code performs the mathematic operations too determine the yearly account balances, 
* each primary value is the value that is found when the interest rate is applied to the account balance,
* this is then added to the prior years balance (or the users base balance) to achieve the final balance for that year.
*/
I_rate /= 100 ;
primaryvalue1 = (basebalance * I_rate) ;
 Year1balance = (primaryvalue1 + basebalance) ;
  //creates the balance for year 1
    
    primaryvalue2 = (Year1balance * I_rate);
        Year2balance = (primaryvalue2 + Year1balance) ;
         //creates the balance for year 2
 
            primaryvalue3 = (Year2balance * I_rate);
                Year3balance = (primaryvalue3 + Year2balance) ;
                 //creates the balance for year 3

/*      
* this segement of code lists the users inputs and thanks them for using the system 
*/
cout << "---------------------------------------------------------------------------------------------------" << endl ;
cout << "|  Thank you user, here is your 3-year financial outlook, including your financial club status.   |" << endl ;
cout << "---------------------------------------------------------------------------------------------------" "\n""\n";

/*    
*
* (yr1 ) this segement of code utilizes loop functions in order to determine the users financial club status for the first year,
* each if branch begins by comparing the values of the yearly balance against the club eligibility amounts
* once a club is found the yearly balance is subtracted from the eligibility amount and stored in "final" to display to the user.
*
*/
cout << "Balance at year 1: $" << Year1balance << ". "  ;

if ((Year1balance >= silver) && (Year1balance < gold))
 {
      final1 = (Year1balance - silver) ;  
        cout << " You are a member of the silver bank club. You have exceeded the minimum for the silver club by $" << final1 <<"." "\n""\n"; 
 }
//end [Year1balance-silver] evaluation  

    else if ((Year1balance >= gold) && (Year1balance < platinum))
    {
        final1 = (Year1balance - gold) ;  
            cout << " You are a member of the gold bank club. You have exceeded the minimum for the gold club by $" << final1 <<"." "\n""\n";
    }
//end [Year1balance-gold] evaluation  

        else if (Year1balance >= platinum)  
        {
            final1 = (Year1balance - platinum) ;  
                cout << " You are a member of the platinum bank club. You have exceeded the minimum for the platinum club by $" << final1 <<"." "\n""\n";
        }
//end [Year1balance-platinum] evaluation

            else 
            {
                cout << " your account does not qualify for any financial club. We are sorry." << "\n""\n";
            }

/*    
*
* (yr2 ) this segement of code utilizes loop functions in order to determine the users financial club status for the second year,
* each if branch begins by comparing the values of the yearly balance against the club eligibility amounts
* once a club is found the yearly balance is subtracted from the eligibility amount and stored in "final" to display to the user.
* if no club is found the program informs the user they are currently not eligible for any financial club.
*
*/
cout << "Balance at year 2: $" << Year2balance << ". "  ;

if ((Year2balance >= silver) && (Year2balance < gold))
 {
      final2 = (Year2balance - silver) ;  
        cout << " You are a member of the silver bank club. You have exceeded the minimum for the silver club by $" << final2 <<"." "\n""\n"; 
 }
//end [Year2balance-silver] evaluation  

    else if ((Year2balance >= gold) && (Year2balance < platinum))
    {
        final2 = (Year2balance - gold) ;  
            cout << " You are a member of the gold bank club. You have exceeded the minimum for the gold club by $" << final2 <<"." "\n""\n";
    }
//end [Year2balance-gold] evaluation  

        else if (Year2balance >= platinum)  
        {
            final2 = (Year2balance - platinum) ;  
                cout << " You are a member of the platinum bank club. You have exceeded the minimum for the platinum club by $" << final2 <<"." "\n""\n";
        }
//end [Year2balance-platinum] evaluation

            else 
            {
                cout << " your account does not qualify for any financial club. We are sorry." << "\n""\n";
            }

/*  
*
* (yr3 ) this segement of code utilizes loop functions in order to determine the users financial club status for the third year,
* each if branch begins by comparing the values of the yearly balance against the club eligibility amounts
* once a club is found the yearly balance is subtracted from the eligibility amount and stored in "final" to display to the user.
*
*/
cout << "Balance at year 3: $" << Year3balance << ". "  ;

if ((Year3balance >= silver) && (Year3balance < gold))
 {
      final3 = (Year3balance - silver) ;  
        cout << " You are a member of the silver bank club. You have exceeded the minimum for the silver club by $" << final3 <<"." "\n""\n"; 
 }
//end [Year3balance-silver] evaluation  

    else if ((Year3balance >= gold) && (Year3balance < platinum))
    {
        final3 = (Year3balance - gold) ;  
            cout << " You are a member of the gold bank club. You have exceeded the minimum for the gold club by $" << final3 <<"." "\n""\n";
    }
//end [Year3balance-gold] evaluation  

        else if (Year3balance >= platinum)  
        {
            final3 = (Year3balance - platinum) ;  
                cout << " You are a member of the platinum bank club. You have exceeded the minimum for the platinum club by $" << final3 <<"." "\n""\n";
        }
//end [Year3balance-platinum] evaluation

            else 
            {
                cout << " your account does not qualify for any financial club. We are sorry." << "\n""\n";
            }



/*
*PROGRAM END
*/
}


