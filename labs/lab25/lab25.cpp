#include <iostream>
#include <string>

using namespace std;

class book {
    
  private:
  string book_title;
  string author;
  int copy_year;
  
  public:
  void SetTitle (string title);
  void SetAuthor(string name);
  void SetYear(int year);
  
  string GetTitle();
  string GetAuthor();
  int GetYear();
  
  void PrintBook();
  
    
};

void book::SetTitle(string title)
{
    book_title = title;
}

void book::SetAuthor(string name)
{
    author = name;
}

void book::SetYear(int year)
{
    copy_year = year;
}

string book::GetTitle()
{
    return book_title;
}

string book::GetAuthor()
{
    return author;
}

int book::GetYear()
{
    return copy_year;
}

void book::PrintBook()
{
    cout << "Book Title: " << GetTitle() << endl;
    cout << "Author: " << GetAuthor() << endl;
    cout << "Copyright Year: " << GetYear() << endl;
    cout << endl;
}

int main()
{
    book book1;
    book1.SetTitle ("The Hunger Games");
    book1.SetAuthor ("Susan Collins");
    book1.SetYear(2008);
    book1.PrintBook();
    
    book book2;
    book2.SetTitle ("Harry Potter and the Order of the Phoenix");
    book2.SetAuthor ("J.K. Rowling");
    book2.SetYear(2004);
    book2.PrintBook();
    
    book book3;
    book3.SetTitle ("To Kill a Mockingbird");
    book3.SetAuthor ("Harper Lee");
    book3.SetYear(2006);
    book3.PrintBook();
    
    book book4;
    book4.SetTitle ("Pride and Prejudice");
    book4.SetAuthor ("Jane Austen");
    book4.SetYear(2000);
    book4.PrintBook();
    
    book book5;
    book5.SetTitle ("Twilight");
    book5.SetAuthor ("Stephenie Meyer");
    book5.SetYear(2006);
    book5.PrintBook();
}

/*
Book Title: The Hunger Games
Author: Susan Collins
Copyright Year: 2008

Book Title: Harry Potter and the Order of the Phoenix
Author: J.K. Rowling
Copyright Year: 2004

Book Title: To Kill a Mockingbird
Author: Harper Lee
Copyright Year: 2006

Book Title: Pride and Prejudice
Author: Jane Austen
Copyright Year: 2000

Book Title: Twilight
Author: Stephenie Meyer
Copyright Year: 2006
*/