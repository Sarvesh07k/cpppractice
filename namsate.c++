// Your First C++ Program

#include <iostream>
using namespace std;

int main()
{
//     cout << "namaste duniya" << endl;
//     cout<< "enter the values "<< endl ;
//  int a , b ;
//  cin >> a >> b ;
// cout<<"the value of a and b are "<< a  <<" "<< b<< endl;


// int a =10;
// if (a<10){
//     cout<<"youre short "<< endl;
// }
// else{
//     cout<<"goood"<<endl;
// }

// int a ;

// a = cin.get();
// cout<<"the value of a is "<<a<<endl;

// int a ;
// cin >>a;
 
//  if (a>0){
//     cout<<"a is positive"<<endl;
//  }
//  else 
//  {   if(a<0){
//     cout<<"a is negative"<<endl;
//             }
//             else{
//                 cout<<"a is zero" ;
//             }

//  }

// if (a>0){
//     cout<<"postive"<<endl;
// }
// else if (a<0)
// {
// cout<<"negative"<<endl;
// }
// else if (a==0)
// {
//     cout<<"a is zero";
// }



//LOOPS:-

// int n ,sum;
// cin >>n;

// while (n<10)
// {
//     sum += n;
//     n++;
// }
// cout<<"the sum is "<<sum;


// int n , i =2;
// cin >>n;

// while (i<n)
// {
//     if(n%i==0){
//         cout<<"not prime for "<<i<<endl;
//     }
//     else{
//         cout<<"prime for  "<<i<<endl;
//     }
//     i++;
// }

int n ;
cout<<"enter the value"<<endl;
cin >> n;
int sum =0;
int i = 1;
while (i<=n)
{

    sum += i;
    i+= 2; 
}
cout<<"the sum is" <<sum;




 

}
