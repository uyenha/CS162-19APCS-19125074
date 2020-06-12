#pragma once
struct week;
struct Class {
	int no;
	char name[100];
	char ID[100];
	char lname[100];
	char fname[100];
	char gen[100];
	char dob[100];
	float ass;
	float mid;
	float final;
	float total;
	week* week1;
	week* week2;
	week* week3;
	week* week4;
	Class* pNext;
};
struct week
{
	int check;
	//char date[50];
	//char start[50];
	//char end[50];
};