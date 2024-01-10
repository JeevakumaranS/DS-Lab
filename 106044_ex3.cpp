#include<iostream>
#include<string.h>
using namespace std;
struct browser
{   string web;
    struct browser *next;
}*top=NULL;
void push( string website)
{
    struct browser *newwebsite;
    newwebsite=new struct browser;
     newwebsite->web=website;
    newwebsite->next=NULL;
    if(top==NULL)
    {
        top=newwebsite;}
    else
    {
        newwebsite->next=top;
        top=newwebsite;}}
void pop()
{   struct browser *delnode;
    delnode=top;
    top=top->next;
    delnode->next=NULL;
    free(delnode);
}
int counter()
{    struct browser *temp;
    int c=0;
    for(temp=top;temp!=NULL;temp=temp->next)
        {c++;}
        return c;
}
void disp()
    {struct browser*temp;
        temp=top;
        if(temp==NULL)
        {
            cout<<"\tNo more URL's to go back to...";
        }
        else{
        for(temp=top;temp!=NULL;temp=temp->next)
        {
           cout<<"\t"<<temp->web<<endl;}
    }}
void pos(string webs)
{  int counts=0,a=0;
    struct browser*temp;
    for(temp=top;temp!=NULL;temp=temp->next){
         if(webs==temp->web)
         {a=1;
             break;
         }
         counts++;}
    if(a==1)
        {
         cout<<"\tthe ";
         cout<<webs<<" found in position is:"<<counter()-counts<<endl;}
    else{
         cout<<"not found\n";}
}
int main()
{
    cout<<"(open URL 1)\n";
    push("www.example1.com");
    disp();
    cout<<"(open URL 2)\n";
    push("www.example2.com");
    disp();
    cout<<"(click back button)\n";
    pop();
    disp();
    cout<<"(open URL 3)\n";
    push("www.example3.com");
    disp();
    cout<<"(find position tab 3)\n";
    pos("www.example3.com");
    cout<<"(remove all URL)\n";
    pop();
    pop();
    disp();
}

