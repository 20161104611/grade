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
    int no;//学生编号
    string name;//学生姓名
    string sex;//学生性别
    string Program;//节目名称
    string form;//表演形式
    string Class;//学生班级
    string tel;//学生电话
    int f;//计数器
    double score[10];//学生成绩
    double min;//最低分
    double max;//最高分
    double avg;//平均分
}stu;
struct Referee
{
    string name;//裁判姓名
    string sex;//裁判性别
    string tel;//裁判电话
};
//函数申明
void output(Student *s,int n,Referee *r);
void search(Student * s,Referee *r);
int searchByNo(Student *s,Referee *r);
int searchByName(Student *s,Referee *r);
void input(Student *s);
int inputs(Student *s);
void inputr(Referee *r);
void output(Student *s,int n,Referee *r);
int Update(Student *s);
//全局变量
struct Student s[100];
struct Referee r[100];
void Sort()
{
    
}
int Update(Student *s)
{
    int a;
    int i;
    int Num;
    int flag=1;
    struct Student x;
    int j;
    cout<<"请输出要查找的学生编号";
    cin>>a;
    for(i=0; i<s[0].f; )
    {
        if(s[i].no!=a)
        {
            i++;
        }
        else{
            break;
        }
    }
    if(i>=s[0].f||a<=0)
    {
        cout<<"该学生编号不存在，请重新输入"<<endl;
    }
    else
    {
        
        cout<<"修改学生信息请输入1，修改学生成绩情输入2（1/2）";
        cin>>Num;
        while(flag)
        {
            if(Num<1||Num>2)
            {
                cout<<"输入错误请重新输入：";
                cin>>Num;
            }
            else if(Num==1)
            {
                cout<<"请输入姓名：";
                cin>>x.name;
                s[i].name=x.name;
                cout<<"请输入性别：";
                cin>>x.sex;
                s[i].sex=x.sex;
                cout<<"请输入节目名称：";
                cin>>x.Program;
                s[i].Program=x.Program;
                cout<<"请输入表演形式：";
                cin>>x.form;
                s[i].form=x.form;
                cout<<"请输入班级：";
                cin>>x.Class;
                s[i].Class=x.Class;
                cout<<"请输入电话号:";
                cin>>x.tel;
                s[i].tel=x.tel;
                flag=0;
            }
            else if(Num==2)
            {
                cout<<"请输入第一个评委打分:"<<endl;
                cin>>x.score[0];
                s[i].score[0]=x.score[0];
                cout<<"请输入第二个评委打分:"<<endl;
                cin>>x.score[1];
                s[i].score[1]=x.score[1];
                cout<<"请输入第三个评委打分:"<<endl;
                cin>>x.score[2];
                s[i].score[2]=x.score[2];
                cout<<"请输入第四个评委打分:"<<endl;
                cin>>x.score[3];
                s[i].score[3]=x.score[3];
                cout<<"请输入第五个评委打分:"<<endl;
                cin>>x.score[4];
                s[i].score[4]=x.score[4];
                s[i].min=s[i].score[0];
                for(j=0; j<5; j++)
                {
                    if(s[i].score[j]<s[i].min)
                    {
                        s[i].min=s[i].score[j];
                    }
                }
                
                s[i].max=s[i].score[0];
                for(j=0; j<5; j++)
                {
                    if(s[i].score[j]>s[i].max)
                    {
                        s[i].max=s[i].score[j];
                    }
                }
                s[i].avg=(s[i].score[0]+s[i].score[1]+s[i].score[2]+s[i].score[3]+s[i].score[4]-s[i].min-s[i].max)/3;
                flag=0;
            }

                flag=0;
            }
        }
    
    return 0;
}
void search(Student * s,Referee *r)
{
    int menu;
    printf("	| ------------------------------------------------|\n");
    printf("	|                    查询子菜单项                 |\n");
    printf("	| ------------------------------------------------|\n");
    printf("	|                    1---按照学生编号查询           |\n");
    printf("	|                    2---按照学生姓名查询             |\n");
    printf("	|                    0---返回主菜单               |\n");
    printf("	| ------------------------------------------------|\n");
    do
    {
        printf("\n请输入菜单项数字(0-2):");
        fflush(stdin);
        scanf("%d",&menu);
    }while(menu<0||menu>2);
    switch(menu)
    {
        case 1:
            searchByNo(s,r);
            break;
        case 2:
            searchByName(s,r);
            break;
    }
}
int searchByNo(Student *s,Referee *r)
{
    int a;
    int i;
    cout<<"请输出要查找的学生编号";
    cin>>a;
    
    for(i=0; i<s[0].f; )
    {
        if(s[i].no!=a)
        {
            i++;
        }
        else{
            break;
        }
    }
    if(i>=s[0].f||a<=0)
    {
        cout<<"该学生编号不存在，请重新输入"<<endl;
    }
    else
    {
        cout<<"编号为"<<s[i-1].no<<"的学生";
        cout<<"姓名是：";
        cout<<s[i-1].name<<endl;
        cout<<"性别：";
        cout<<s[i-1].sex<<endl;
        cout<<"节目名称：";
        cout<<s[i-1].Program<<endl;
        cout<<"表演形式：";
        cout<<s[i-1].form<<endl;
        cout<<"班级：";
        cout<<s[i-1].Class<<endl;
        cout<<"电话号：";
        cout<<s[i-1].tel<<endl;
        cout<<"第一个评委"<<r[0].name<<"的打分为：";
        cout<<s[i-1].score[0]<<endl;
        cout<<"第二个评委"<<r[1].name<<"的打分为：";
        cout<<s[i-1].score[1]<<endl;
        cout<<"第三个评委"<<r[2].name<<"的打分为：";
        cout<<s[i-1].score[2]<<endl;
        cout<<"第四个评委"<<r[3].name<<"的打分为：";
        cout<<s[i-1].score[3]<<endl;
        cout<<"第五个评委"<<r[4].name<<"的打分为：";
        cout<<s[i-1].score[4]<<endl;
        cout<<"去掉一个最低成绩为：";
        cout<<s[i-1].min<<endl;
        cout<<"去掉一个最高成绩为：";
        cout<<s[i-1].max<<endl;
        cout<<"平均分是：";
        cout<<s[i-1].avg<<endl;

    }
    return 0;
}
int searchByName(Student *s,Referee *r)
{
    string S;
    int i;
    cout<<"请输出要查找的学生姓名";
    cin>>S;
    for(i=0; i<s[0].f; )
    {
        if(s[i].name!=S)
        {
            i++;
        }
        else{
            break;
        }
    }
    if(i>=s[0].f)
    {
        cout<<"该学生姓名不存在，请重新输入"<<endl;
    }
    else
    {
        cout<<"编号为"<<s[i-1].no<<"的学生";
        cout<<"姓名是：";
        cout<<s[i-1].name<<endl;
        cout<<"性别：";
        cout<<s[i-1].sex<<endl;
        cout<<"节目名称：";
        cout<<s[i-1].Program<<endl;
        cout<<"表演形式：";
        cout<<s[i-1].form<<endl;
        cout<<"班级：";
        cout<<s[i-1].Class<<endl;
        cout<<"电话号：";
        cout<<s[i-1].tel<<endl;
        cout<<"第一个评委"<<r[0].name<<"的打分为：";
        cout<<s[i-1].score[0]<<endl;
        cout<<"第二个评委"<<r[1].name<<"的打分为：";
        cout<<s[i-1].score[1]<<endl;
        cout<<"第三个评委"<<r[2].name<<"的打分为：";
        cout<<s[i-1].score[2]<<endl;
        cout<<"第四个评委"<<r[3].name<<"的打分为：";
        cout<<s[i-1].score[3]<<endl;
        cout<<"第五个评委"<<r[4].name<<"的打分为：";
        cout<<s[i-1].score[4]<<endl;
        cout<<"去掉一个最低成绩为：";
        cout<<s[i-1].min<<endl;
        cout<<"去掉一个最高成绩为：";
        cout<<s[i-1].max<<endl;
        cout<<"平均分是：";
        cout<<s[i-1].avg<<endl;
    }
    return 0;
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
void output(Student *s,Referee *r)
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
    
    inputs(s);
    inputr(r);
    input(s);
    Update(s);
    //search(s,r);
    output(s,r);
        return 0;
}
