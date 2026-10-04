# class Library:
#     def __init__(self,No_of_books,Books):
#         self.Number = No_of_books
#         self.Books = Books
#         type(Books) == list
#         print(f"{No_of_books} books issued and the books are {Books}")

# a = Library(56,"Automate boring Stuff")
# b = Library(10,"Rich Dad Poor Dad")
# print(a.Number,"=",a.Books,"\n",b.Number,"=",b.Books)

class Library:
    def __init__(self):
        self.NoOfBooks = 0
        self.Books = []

    def AddBook(self ,Book):
        self.Books.append(Book)
        self.NoOfBooks = len(self.Books)

    def info(self):
        print(f"The Library has {self.NoOfBooks} books and the books are {self.Books}")

b1 = Library()
b1.AddBook("Automate Boring Stuff Using Python")
b1.AddBook("Rich Dad Poor Dad")
b1.AddBook("Harry Potter and the Philosopher's Stone")
b1.info()

