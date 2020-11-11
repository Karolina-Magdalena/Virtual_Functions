#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Person
{
public:

string name;
int age;

        virtual void getdata()=0;

        virtual void putdata()=0;

        Person(string n, int a)
        {
            name = n;
            age = a;
        }

};
class Professor:public Person
{
  int publications;
  static int cur_id;

public:
    void getdata()
    {
        cin>>name>>age>>publications;
    }
    void putdata()
    {
        cout<<name<<" "<<age<<" "<<publications<<" "<<cur_id++<<endl;
    }
    Professor(string n="Nowak", int a=55, int p=90)
    :Person(n,a)
    {
        publications = p;
    }
};
int Professor::cur_id=1;

class Student:public Person
{
    int mark[6];
    int number;
    static int cur_id;
public:
    void getdata()
    {
        cin>>name>>age;
        for (int i=0;i<6;i++){
            cin>>number;
            mark[i]=number;
        }
    }
    void putdata()
    {
        cout<<name<<" "<<age<<" "<<sum(mark)<<" "<<cur_id++<<endl;
    }
    int sum(int arr[6])
    {
        int sum=0;
        for (int i=0;i<6;i++) {
            sum=sum+arr[i];
        }
        return sum;
    }
    Student(string n="Bob", int a=20)
    :Person(n,a)
    {

    }
};
int Student::cur_id=1;
int main(){.......
