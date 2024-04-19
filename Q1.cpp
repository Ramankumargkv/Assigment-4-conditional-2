#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter A amount  = ";
    cin>>n;
    int n1,n2, n5,n10,n20,n50,n100,n200,n500,n2000;
    switch (1)
    {
        case 1:
            n2000=n/2000;
            n=n-(2000*n2000);
            {
                cout<<"2000 notes = "<<n2000 <<endl;
            }
        case 2: 
            n500=n/500;
            n=n-(500*n500);
            cout<<"500 notes = "<<n500 <<endl;
        case 3:
            n200=n/200;
            n=n-(200*n200);
            {
                cout<<"200 notes = "<<n200 <<endl;
            }    
        case 4 :
            n100=n/100;
            n=n-(100*n100);
            cout<<"100 notes = "<<n100 <<endl;
        case 5:
            n50=n/50;
            n=n-(50*n50);
            cout<<"50 notes = "<<n50 <<endl;
        case 6: 
            n20=n/20;
            n=n-(20*n20);
            cout<<"20 notes = "<<n20 <<endl;
        case 7:
            n10=n/10;
            n=n-(10*n10);
            cout<<"10 notes = "<<n10 <<endl;
        case 8:
            n5=n/5;
            n=n-(5*n5);
            cout<<"5 notes = "<<n5 <<endl;
        case 9: 
            n2=n/2;
            n=n-(2*n2);
            cout<<"2 notes = "<<n2 <<endl;
        case 10 :
            n1=n/1;
            n=n-(1*n1);
            cout<<"1 notes = "<<n1 <<endl;

    }
    cout<<"Total No of Notes = "<<n1+n2+n5+n10+n20+n50+n100+n200+n500+n2000;
    
}