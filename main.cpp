//
//  main.cpp
//  Bomber
//
//  Created by Ayush Khurana on 8/25/22.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool Logged()
{
    string user;
    string pass;
    string u;
    string p;
    cout<<"Enter Username: "<<endl;
    cin>>user;
    cout<<"Enter Password: "<<endl;
    cin>>pass;
    ifstream read("data\\" +user + ".txt");
    getline(read,u);
    getline(read,p);
    if(user==u && p==pass)
    {
        return true;
        
    }
    else
        return false;
}
int main() {
    int ch;
    cout<<"1. Register User: "<<endl;
    cout<<"2. Login: "<<endl;
    cout<<"Enter your choice";
    cin>>ch;
    if(ch==1)
    {
        string user,pass;
        cout<<"Enter username: "<<endl;
        cin>>user;
        cout<<"Enter Password: "<<endl;
        cin>>pass;
        ofstream file;
        file.open("data\\" + user + ".txt");
        file<<user<<"\t\t"<<pass;
        file.close();
        main();
    }
    else if(ch==2)
    {
        bool status = Logged();
        if(status)
        {
            cout<<"Logged in successfully..."<<endl;
            system("PAUSE");
            return 1;
        }
        else
        {
            cout<<"Try Again!!"<<endl;
            system("PAUSE");
            return 0;
        }
    }
    return 0;
}
