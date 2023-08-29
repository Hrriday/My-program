/* A book shop maintains the inventory of books that are being sold at the shop. the list includes details such 
as author, title, price, publisher and stock position. whenever a customer wants a book, the sales person 
inputs the title and author and the system searches the list and displays whether it is available or not. 
if it is not, an appropriate message is displayed. If it is, then the system displays the book details and 
requests for the number of copies required. if the requested copies are available, the total cost of the 
requested copies is displayed, otherwise the message "Required copies not in stock" is displayed.*/
#include<iostream>
#include<string>
using namespace std;
class Book
{
    string author,title,publisher;
    int price,stock_position,copies;
    public:
    void setdata(string a,string t,string p,int pr,int sp,int copy)//Better option would be to use cout and
    //cin to take input from user and make argument list as void.
    {
        author=a;
        title=t;
        publisher=p;
        price=pr;
        stock_position=sp;
        copies=copy;
    }
    void printdata();
    friend void find(Book b[],string t,string a,int n);
};
void Book::printdata()
{
    int c;
    cout<<"Author: "<<author<<endl<<"Title: "<<title<<endl;
    cout<<"Publisher: "<<publisher<<endl<<"Price: "<<price<<endl<<"Stock Position: "<<stock_position;
    cout<<"\nEnter the no. of copies required "<<endl;
    cin>>c;
    if(c>copies)
    {
        cout<<"Required copies not in stock."<<endl;
    }
    else
    {
        int tp;
        tp=c*price;
        copies=copies-c;
        cout<<"The total cost is: "<<tp<<endl;
    }
}
void find(Book b[],string t,string a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if((t==b[i].title)&&(a==b[i].author))
        b[i].printdata();
    }
}
int main()
{
    Book b1[2];
    b1[0].setdata("George R.R Martin","A Game Of Thrones","Bantam Spectra",1650,102,50);
    b1[1].setdata("Suzanne Collins","The Hunger Games","Scholastic Corporation",1600,304,20);
    find(b1,"A Game Of Thrones","George R.R Martin",2);
    find(b1,"A Game Of Thrones","George R.R Martin",2);
    return 0;
}