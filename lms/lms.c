#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

// library structure
struct library {
	char *book_title[60]; //name of the book
	char *book_author[50]; // name of the book author
	int ISBN[20]; // total digits of the book ISBN
	char availability; // true if available, false if not
}

struct user {
	int *userID; //user ID used by the user
	char *name[50]; // name of the user
	char *borrowedBooks; //stores name of borrowed books
}

// Here we are going to define prototypes

// book prototypes
void addBook();
void displayBook();
void borrowBook();
void returnBook();
void listBookStatus();

// user prototype
void addUser();

struct library lib[1000]; // Limit number of books to 1000
int bookCount = 0; // Initialize book count to 0

void addUser() {
	printf("Enter user ID: \n");
	scanf("%d", &users[userCount].userID);
	printf("Enter your name: \n");
	scanf("%s", &users[userCount].name);
	strcpy(users[userCount].borrowedBook, ""); // initialize borrowed books to empty
}

void addBook() {
	// function used to add books to the library by title, isbn and author
	printf("Enter book title: \n");
	scanf("%s", lib[bookCount].title);
	printf("Enter name of book author: \n");
	scanf("%s", lib[bookCount].author);
	printf("Enter book ISBN: \n");
	scanf("%s", lib[bookCount].ISBN);

	lib[bookCount].available = true;
	bookCount++;
}

void displayBook() {
	// function used to display available books to the user
	for (i = 0; i < bookCount; i++) {
		printf("Title: %s\n", lib[i].title);
		printf("Author: %s\n", lib[i].author);
		printf("ISBN: %s\n", lib[i].isbn);
		printf("Availability: %s\n" lib[i].available);
	}

void borrowBook() {
	int userID;
	char book_title[26];

	printf("Enter your userID: \n");
	scanf("%d", &userID);
	printf("What is the name of the book you want to borrow?: \n");
	scanf("%s", &book_title);


	for (i = 0; i < userCount; i++) {
		if (users[i].userID == userID) {
			if (strcpy(users[i].borrowed_title, "") != 0) {
				printf("Book taken, cannot borrow the book! \n", users[i].borroewd_title);
				return;
			}
		}
	}
}

void returnBook() {
	int userID;
	printf("enter userID: \n");
	scanf("%d", &userID);

	for (i = 0; i < userCount; i++) {
		if (users[i].userID == userID) {
			if(strcmp(users[i].borrowed_title, "") == 0) {
				printf("User has not borrowed any book.\n");
				return;
			}
		}
	}
}

void listBooksStatus() {

