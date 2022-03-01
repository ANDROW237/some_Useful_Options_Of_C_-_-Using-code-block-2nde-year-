 #include <iostream>
using namespace std ;
int main ()
{
    // calculate the circumference of a circle
    // those signs are used to comment
    /*
     this is a block of comments stating by /* and ending by the inverse
     that spans multiple lines of comment


    */
     const double PI = 3.14159; // const it use to indicate a constant
     int intRadius = 0; // we are initializing the radius

     cout << "Please enter the radius of the circle:"; // cout << is used to output variables
     cin >> intRadius ; // cin >> is used to input variables

     double dblCircumference = (2*intRadius*PI);
     cout << "the Circumference of the circle with Radius " << intRadius
     <<   "is:" << dblCircumference<< endl;

     // this section converts lower case to upper case

     char chLowerCase ='\0'; // initializing
     char chUpperCase ='\0';// initializing
     cout<< "Please enter your favourite character" ;

     cin >> chLowerCase;

    chUpperCase = chLowerCase -32 ; // see ASCII table

     cout<< " The upper case character for " << chLowerCase
    << " Is " <<chUpperCase <<endl;

    // this section will test  if a number is even or odd
    int intNum =0;
    cout<< " Please enter a whole number";
    cin >>intNum;

    int intMod = intNum % 2;

    cout<< " The modulus 2  of " <<intNum<< "Is " << intMod << endl;

   return 0;
}
