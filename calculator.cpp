#include<iostream>
using namespace std;

void displayMenu()
{

    cout<<"\nEnter the operation to perform:"<<endl;
    cout<<"1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n";

}
int main()
{
    int n1,n2,ope=0;

    while(true){
            cout<<"\nEnter two numbers :"<<endl;
    cin>>n1;
    cin>>n2;
    displayMenu();
    cin>>ope;

        if(ope==1){
            int ans = n1 + n2;
            cout<<"Result :"<<ans;
        }
        else if(ope==2){
            int ans = n1 - n2;
            cout<<"Result :"<<ans;
        }
        else if(ope==3){
            int ans = n1 * n2;
            cout<<"Result :"<<ans;
        }
        else if(ope==4){
                if(n2==0)
                    cout<<"Denominator cannot be zero";
                else{
                    int ans = n1 / n2;
                    cout<<"Result :"<<ans;
                    }
        }
        else if(ope==5){
                cout<<"Exiting calculator program. Goodbye"<<endl;
            break;
        }
    }
}
