//
//  main.cpp
//  LAB0
//
//  Created by keven bategereza on 02/02/2022.
//

#include<iostream>
using namespace std;

int sum(int,int);
int sum(int a,int b)
{
    int total;
    total= a+b;
    return total;
}

int Area(int);
int Area(int r)
{
    double Area= 3.1456*r*r;
    return Area;
}

int Circumference(int);
int Circumference(int r)
{
    double Circumference= 3.1456*2*r;
    return Circumference;
}

int Price(double, int);
int Price(double v, int k)
{
    double Price = k +(k* v/100);
    return Price;
}







int main()
{
    int x,y,s;
    cout<<"enter first number :";
    cin>>x;

    cout<<"enter second number :";
    cin>>y;

    s= sum(x,y);
    cout<<"the sum is :"<<s<<endl;





    int r,a;
    cout<<"enter the radius :";
    cin>>r;

    a= Area(r);
    cout<<"the area is :"<<a<<endl;


    int c, k;
    cout<<"enter the radius :";
    cin>>k;

    c= Circumference(k);
    cout<<"the circumference is :"<<c<<endl;



    int f,g,h;
    cout<<"enter the price :";
    cin>>f;

    cout<<"enter the VAT in percentage :";
    cin>>g;

    h= Price(f,g);
    cout<<"the price with VAT is :"<<h<<endl;

    return 0;
}


