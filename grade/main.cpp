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
    int no;
    string name;
    string sex;
    string Program;
    string form;
    string Class;
    string tel;
    int f;
    double score[10];
    double min;
    double max;
    double avg;//平均分
};
struct Referee
{
    string name;
    string sex;
    string tel;
};
void Sort()
{
    
}
void input(Student *s)
{
    int i;
    int j;
    int flag=1;
    while(flag)
    {
        cout<<"请输入要评分的学生编号"<<endl;
        int n;
        cin>>n;
        for(i=0; i<s[0].f; )
        {
            if(s[i].no!=n)
            {
                i++;
            }
            else{
                break;
            }
        }
        if(i>=s[0].f||n<=0)
        {
            cout<<"该学生编号不存在，请重新输入"<<endl;
        }
        else
        {
            cout<<"请输入第一个评委打分:"<<endl;
            cin>>s[n-1].score[0];
            cout<<"请输入第二个评委打分:"<<endl;
            cin>>s[n-1].score[1];
            cout<<"请输入第三个评委打分:"<<endl;
            cin>>s[n-1].score[2];
            cout<<"请输入第四个评委打分:"<<endl;
            cin>>s[n-1].score[3];
            cout<<"请输入第五个评委打分:"<<endl;
            cin>>s[n-1].score[4];
            
            s[n-1].min=s[n-1].score[0];
            for(j=0; j<5; j++)
            {
                if(s[n-1].score[j]<s[n-1].min)
                {
                    s[n-1].min=s[n-1].score[j];
                }
            }
            
            s[n-1].max=s[n-1].score[0];
            for(j=0; j<5; j++)
            {
                if(s[n-1].score[j]>s[n-1].max)
                {
                    s[n-1].max=s[n-1].score[j];
                }
            }
            s[n-1].avg=(s[n-1].score[0]+s[n-1].score[1]+s[n-1].score[2]+s[n-1].score[3]+s[n-1].score[4]-s[n-1].min-s[n-1].max)/3;
            flag=0;
        }
    }
    
    

}

int inputs(Student *s)
{
    int n;
    cout<<"请输入参赛者人数";
    cin>>n;
    s[0].f=0;
    for(int i=0; i<n; i++)
    {
        cout<<"请输入学生编号：";
        cin>>s[i].no;
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
        cout<<"请输入电话号:";
        cin>>s[i].tel;
        s[0].f++;
    }
    return n;
}
void inputr(Referee *r)
{
    int i;
    for(i=0; i<5; i++)
    {
        cout<<"请输入第"<<i+1<<"号裁判的姓名:";
        cin>>r[i].name;
        cout<<"请输入第"<<i+1<<"号裁判的性别:";
        cin>>r[i].sex;
        cout<<"请输入第"<<i+1<<"号裁判的电话号:";
        cin>>r[i].tel;
    }
}
void output(Student *s,int n,Referee *r)
{
    int i;
    
    for(i=0; i<s[0].f; i++)
    {
        cout<<"编号为"<<s[i].no<<"的学生";
        cout<<"姓名是：";
        cout<<s[i].name<<endl;
        cout<<"性别：";
        cout<<s[i].sex<<endl;
        cout<<"节目名称：";
        cout<<s[i].Program<<endl;
        cout<<"表演形式：";
        cout<<s[i].form<<endl;
        cout<<"班级：";
        cout<<s[i].Class<<endl;
        cout<<"电话号：";
        cout<<s[i].tel<<endl;
        cout<<"第一个评委"<<r[0].name<<"的打分为：";
        cout<<s[i].score[0]<<endl;
        cout<<"第二个评委"<<r[1].name<<"的打分为：";
        cout<<s[i].score[1]<<endl;
        cout<<"第三个评委"<<r[2].name<<"的打分为：";
        cout<<s[i].score[2]<<endl;
        cout<<"第四个评委"<<r[3].name<<"的打分为：";
        cout<<s[i].score[3]<<endl;
        cout<<"第五个评委"<<r[4].name<<"的打分为：";
        cout<<s[i].score[4]<<endl;
        cout<<"去掉一个最低成绩为：";
        cout<<s[i].min<<endl;
        cout<<"去掉一个最高成绩为：";
        cout<<s[i].max<<endl;
        cout<<"平均分是：";
        cout<<s[i].avg<<endl;
        
    }
}
int main(int argc, const char * argv[]) {
    struct Student s[100];
    struct Referee r[100];
    inputs(s);
    inputr(r);
    input(s);
    
    output(s,s[0].f,r);
        return 0;
}
