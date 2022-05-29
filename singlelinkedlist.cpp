#include<iostream>
using namespace std;
void display();
void Insertend();
void Insertfront(int id);
struct muller{
int id;
muller *next;

};
muller *head=NULL;



int main(){


Insertend();


 display();
Insertfront(1000);
Insertfront(1088800);
Insertfront(1099900);
Insertfront(1056566500);
 display();

}


void Insertend(){
muller *temp=new muller;
int x;
cout<<"enter id"<<endl;
cin>>temp->id;
temp->next=NULL;
if(head==NULL)
    head=temp;

    else
{
muller *temp2=head;
while(temp2!=NULL)
{
   temp2= temp2->next;
}
 temp2->next=temp;
}
}
void display(){
if(head==NULL)

cout<<"no data is in linked lists"<<endl;
else{

  // for(muller *temp=head;temp!=NULL;temp=temp->next) {

muller *temp=head;
 cout<<"id is     "<<endl;
while(temp!=NULL){
  cout<<temp->id<<endl;
  temp=temp->next; }


}
}



void Insertfront(int id){
muller *temp=new muller;
temp->id=id;
temp->next=NULL;
if(head==NULL)
    head=temp;

    else
    {
        temp->next=head;
        head=temp;
    }

}







