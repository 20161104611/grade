//
//  main.cpp
//  grade
//
//  Created by s20161104611 on 18/6/25.
//  Copyright © 2018年 s20161104611. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <String>
using namespace std;
struct Student
{
    string name;
    string sex;
    string Program;
    string form;
    string Class;
    string tel;
    int f;
};

void Sort()
{
    
}

int input(Student *s)
{
    int n;
    cout<<"请输入参赛者人数";
    cin>>n;
    s[0].f=0;
    for(int i=0; i<n; i++)
    {
        cout<<"请输入姓名：";
        cin>>s[i].name;
        cout<<"请输入性别：";
        cin>>s[i].sex;
        cout<<"请输入节目名称：";
        cin>>s[i].Program;
        cout<<"请输入表演形式：";
        cin>>s[i].form;
        cout<<"请输入班级：";
        cin>>s[i].Class;
        cout<<"请输入电话号:";s
        cin>>s[i].tel;
        s[0].f++;
    }
    return n;
}
void output(Student *s,int n)
{
    int i;
    for(i=0; i<s[0].f; i++)
    {
        cout<<"姓名"<<i+1<<"是："<<endl;
        cout<<s[i].name<<endl;
    }
}
int main(int argc, const char * argv[]) {
    struct Student s[100];
    input(s);
    output(s,s[0].f);
        return 0;
}
