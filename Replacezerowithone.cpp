#include<iostream>
    using namespace std;
    //main program
    int main()
    {
        int num,num2=0;
        cout<<“Enter number: “;
        //user input
        cin>>num;
        //checking for 0 input
        if(num == 0)
            num2=1;
        //converting 0 to 1
        
        //converted number
        cout<<“Converted number is: “<<num2;
        return 0;
    }
