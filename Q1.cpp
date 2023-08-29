/*Q1) The benefits of OOPS are as follows:
      1) OOP language allows to break the program into the bit-sized problems that can be solved easily.
      2) It makes the code clearer and easily maintainable.
      3) The code written is re-usable, i.e, once a class has been written, created, and debugged, it can be distributed to other programmers for use in their own programs.
      4) New data types can easily be created.
      5) It hides unnecessary information from the user which is called data abstraction.
      OOP helps in representing the real world through the use of objects and class. Complex real-world objects have both attributes and behavior. 
      Suppose we have a class house. We can define that class to have some basic characteristics. Now, we can create objects of the class house which will
      vary in some aspects but will have the same basic characters as defined in the class. The class basically acts like the blueprint for all the objects.
  
  Q2) C++ is known as hybrid language because C++ supports both procedural and object oriented programming. It is able to use various features of OOP which cannot
      be used by C as C is a procedural programming language. The features like encapsulation, inheritance and data abstraction can be used in C++ unlike C. C++
      can be said to be a superset of C. A program in C++ can look like a program in C while the reverse is not true. C++ has 63 keywords while C has 32 keywords.
      Some other features like namespace, reference variables, and exception handling are only supported by C++.

  Q3) References in C++ are variables which are aliases for some other variable it is used on. Any changes made in reference variable will have the same effect
      on the original variable.
      #include<iostream>
      using namespace std;
      void swap(int& a,int& b)
      {
        int c;
        c=a;
        a=b;
        b=c;
      }
      int main()
      {
        int a=5, b=9;
        int &x=a;
        int &y=b;
        swap(x,y);
        cout<<a<<" "<<b;
        cout<<"\nHrriday Agarwal IT-58";
        return 0;
      }  

  Q4) A namespace is a declarative region that provides a scope to the identifiers (the names of types, functions, variables, etc) inside it. It enables the
      identifiers to have namespace scope rather than global scope. A namespace definition begins with the keyword namespace followed by the namespace name.
      For ex: namespace n1
              {
                  int x=20;
              } 
      Now this namespace can be accessed by any function using n1::x, in which case the value of x will be 20.(Here, :: is the scope resolution operator).
      Namespaces are useful in case of a very large program which is done by numerous people simultaneously. In such cases, different parts of code are 
      assigned to different people. In such cases, it is very likely for the names of variables and functions to clash. Therefore, each person is required
      to create their own namespaces which expels all the complications that could arise in case of same variable and function names.

Q5)*//* #include<iostream>
      using namespace std;
      class account
      {
          public:
          string name;
          long int accno;
          string typeofacc;
          long int balamount;
          void assign();
          void deposit(int d);
          void withdraw(int w);
          void display();
      };
      void account::assign()
      {
          cout<<"Enter Name:"<<endl;
          cin>>name;
          cout<<"Enter Account Number:"<<endl;
          cin>>accno;
          cout<<"Enter Type of Account:"<<endl;
          cin>>typeofacc;
          cout<<"Enter Balance Amount:"<<endl;
          cin>>balamount;
      }
      void account::deposit(int d)
      {
          balamount=balamount+d;
      }    
      void account::withdraw(int w)
      {
          balamount=balamount-w;
      }
      void account::display()
      {
          cout<<"Name: "<<name<<endl;
          cout<<"Account Number: "<<accno<<endl;
          cout<<"Type of Account: "<<typeofacc<<endl;
          cout<<"Balance Amount: "<<balamount<<endl;
      }
      int main()
      {
          account obj;
          obj.assign();
          int d,w;
          cout<<"Enter Amount to be Deposited and Withdrawn Respectively"<<endl;
          cin>>d>>w;
          obj.deposit(d);
          obj.withdraw(w);
          obj.display();
          return 0;
      }*/
