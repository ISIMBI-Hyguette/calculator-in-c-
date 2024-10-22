#include<iostream>
using namespace std;

int main(){
     char repeat;
   do{

 int choice;
    int a,b;

    cout<<"Enter the operands"<<endl;
    cout<< "a:" <<endl;
    cin >> a ;
    cout<<"b:"<<endl;
    cin >> b;
    

    int sum = a + b;
    int multiply=a * b;
    float division=0;
    int subtraction = a -  b;
    
     

    cout << "enter your choice:" << endl;
    cin >> choice;

    switch(choice){

        case 1:
        cout << "sum:" << sum << endl;
        break;

        case 2:
        cout << "Multiplication:"<< multiply << endl;
        break;

        case 3:
       if(b!=0){
        division=static_cast<float>(a/b);

         
         
       }
        else{
            cout << "Math error:Division by zero"<< endl;

        }
        
        break;

        case 4:
        cout <<"subtraction:"<<subtraction << endl;
        break;

        default:
        cout <<"There is no other operation please!!" << endl;
        break;
        
       
    }
    
        cout<<"Do you want to repeat the steps(Y/N)?"<<endl;
        cin >> repeat;

   }while(repeat == 'Y'||repeat == 'y');


   
    return 0;
}