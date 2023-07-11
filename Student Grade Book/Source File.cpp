#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class student
{
public:
	string name;
	int rollno;
	float marks;
	student()
	{
		name = "";
		rollno = 0;
		marks = 0;
	}
	void display(int n)
	{
		ifstream fin;
		fin.open("student.txt");
		string name;
		int rollno;
		float marks;
		while (fin >> name)
		{
			fin >> rollno;
			if (rollno == n)
			{
				cout << "Name: " << name << endl;
				cout << "Roll No: " << rollno << endl;
			}
		}
		fin.close();
		cout << endl;
		fin.open("marks1.txt");
		while (fin >> name)
		{
			fin >> rollno;
			fin >> marks;
			if (rollno == n)
			{
				cout << "Marks of DSA: " << marks << endl;
			}
		}
		fin.close();
		fin.open("marks2.txt");
		while (fin >> name)
		{
			fin >> rollno;
			fin >> marks;
			if (rollno == n)
			{
				cout << "Marks of DSA LAB: " << marks << endl;
			}
		}
		fin.close();
		fin.open("marks3.txt");
		while (fin >> name)
		{
			fin >> rollno;
			fin >> marks;
			if (rollno == n)
			{
				cout << "Marks of SDA LAB: " << marks << endl;
			}
		}
		fin.close();
		fin.open("marks4.txt");
		while (fin >> name)
		{
			fin >> rollno;
			fin >> marks;
			if (rollno == n)
			{
				cout << "Marks of SDA: " << marks << endl;
			}
		}
		fin.close();
		fin.open("marks5.txt");
		while (fin >> name)
		{
			fin >> rollno;
			fin >> marks;
			if (rollno == n)
			{
				cout << "Marks of Web: " << marks << endl;
			}
		}
		fin.close();
	}
	void display1(int n)
	{
		ifstream fin;
		fin.open("marks1.txt");
		string name;
		int rollno;
		float marks;
		while (fin >> name)
		{
			fin >> rollno;
			fin >> marks;
			if (rollno == n)
			{
				cout << "Name: " << name << endl;
				cout << "Roll No: " << rollno << endl;
				cout << "Marks of DSA: " << marks << endl;
			}
		}
		fin.close();
	}
	void display2(int n)
	{
		ifstream fin;
		fin.open("marks2.txt");
		string name;
		int rollno;
		float marks;
		while (fin >> name)
		{
			fin >> rollno;
			fin >> marks;
			if (rollno == n)
			{
				cout << "Name: " << name << endl;
				cout << "Roll No: " << rollno << endl;
				cout << "Marks of DSA LAB: " << marks << endl;
			}
		}
		fin.close();
	}
	void display3(int n)
	{
		ifstream fin;
		fin.open("marks3.txt");
		string name;
		int rollno;
		float marks;
		while (fin >> name)
		{
			fin >> rollno;
			fin >> marks;
			if (rollno == n)
			{
				cout << "Name: " << name << endl;
				cout << "Roll No: " << rollno << endl;
				cout << "Marks of SDA LAB: " << marks << endl;
			}
		}
		fin.close();
	}
	void display4(int n)
	{
		ifstream fin;
		fin.open("marks4.txt");
		string name;
		int rollno;
		float marks;
		while (fin >> name)
		{
			fin >> rollno;
			fin >> marks;
			if (rollno == n)
			{
				cout << "Name: " << name << endl;
				cout << "Roll No: " << rollno << endl;
				cout << "Marks of SDA: " << marks << endl;
			}
		}
		fin.close();
	}
	void display5(int n)
	{
		ifstream fin;
		fin.open("marks5.txt");
		string name;
		int rollno;
		float marks;
		while (fin >> name)
		{
			fin >> rollno;
			fin >> marks;
			if (rollno == n)
			{
				cout << "Name: " << name << endl;
				cout << "Roll No: " << rollno << endl;
				cout << "Marks of Web: " << marks << endl;
			}
		}
		fin.close();
	}
	void displayA(string n)
	{
		ifstream fin;
		fin.open("marks1.txt");
		string name;
		int rollno;
		float marks;
		while (fin >> name)
		{
			fin >> rollno;
			fin >> marks;
			if (name == n)
			{
				cout << "Marks of DSA: " << marks << endl;
			}
		}
		fin.close();
	}
	void displayB(string n)
	{
		ifstream fin;
		fin.open("marks2.txt");
		string name;
		int rollno;
		float marks;
		while (fin >> name)
		{
			fin >> rollno;
			fin >> marks;
			if (name == n)
			{
				cout << "Marks of DSA LAB: " << marks << endl;
			}
		}
		fin.close();
	}
	void displayC(string n)
	{
		ifstream fin;
		fin.open("marks3.txt");
		string name;
		int rollno;
		float marks;
		while (fin >> name)
		{
			fin >> rollno;
			fin >> marks;
			if (name == n)
			{
				cout << "Marks of SDA LAB: " << marks << endl;
			}
		}
		fin.close();
	}
	void displayD(string n)
	{
		ifstream fin;
		fin.open("marks4.txt");
		string name;
		int rollno;
		float marks;
		while (fin >> name)
		{
			fin >> rollno;
			fin >> marks;
			if (name == n)
			{
				cout << "Marks of SDA: " << marks << endl;
			}
		}
		fin.close();
	}
	void displayE(string n)
	{
		ifstream fin;
		fin.open("marks5.txt");
		string name;
		int rollno;
		float marks;
		while (fin >> name)
		{
			fin >> rollno;
			fin >> marks;
			if (name == n)
			{
				cout << "Marks of Web: " << marks << endl;
			}
		}
		fin.close();
	}
	void displayresult1(int n)
	{
		ifstream fin;
		fin.open("marks1.txt");
		string name;
		int rollno;
		float marks;
		float total = 0, avg = 0, per = 0;
		while (fin >> name)
		{
			per++;
			fin >> rollno;
			fin >> marks;
			total += marks;
			if (rollno == n)
			{
				cout << "Name: " << name << endl;
				cout << "Roll No: " << rollno << endl;
				cout << "Marks of DSA: " << marks << endl;
				cout << "Percentage of DSA: " << (marks / 100) * 100 << "%" << endl;
				cout << "Grade of DSA: ";
				if (marks >= 90)
				{
					cout << "A" << endl;
				}
				else if (marks >= 80)
				{
					cout << "B" << endl;
				}
				else if (marks >= 70)
				{
					cout << "C" << endl;
				}
				else if (marks >= 60)
				{
					cout << "D" << endl;
				}
				else if (marks >= 50)
				{
					cout << "E" << endl;
				}
				else
				{
					cout << "F" << endl;
				}
			}
		}
		avg = total / per;
		cout << "Average Marks of DSA: " << avg << endl;
		fin.close();
	}
	void displayresult2(int n)
	{
		ifstream fin;
		fin.open("marks2.txt");
		string name;
		int rollno;
		float marks;
		float total = 0, avg = 0, per = 0;
		while (fin >> name)
		{
			per++;
			fin >> rollno;
			fin >> marks;
			total += marks;
			if (rollno == n)
			{
				cout << "Name: " << name << endl;
				cout << "Roll No: " << rollno << endl;
				cout << "Marks of DSA LAB: " << marks << endl;
				cout << "Percentage of DSA LAB: " << (marks / 100) * 100 << "%" << endl;
				cout << "Grade of DSA LAB: ";
				if (marks >= 90)
				{
					cout << "A" << endl;
				}
				else if (marks >= 80)
				{
					cout << "B" << endl;
				}
				else if (marks >= 70)
				{
					cout << "C" << endl;
				}
				else if (marks >= 60)
				{
					cout << "D" << endl;
				}
				else if (marks >= 50)
				{
					cout << "E" << endl;
				}
				else
				{
					cout << "F" << endl;
				}
			}
		}
		avg = total / per;
		cout << "Average Marks of DSA LAB: " << avg << endl;
		fin.close();
	}
	void displayresult3(int n)
	{
		ifstream fin;
		fin.open("marks3.txt");
		string name;
		int rollno;
		float marks;
		float total = 0, avg = 0, per = 0;
		while (fin >> name)
		{
			per++;
			fin >> rollno;
			fin >> marks;
			total += marks;
			if (rollno == n)
			{
				cout << "Name: " << name << endl;
				cout << "Roll No: " << rollno << endl;
				cout << "Marks of SDA LAB: " << marks << endl;
				cout << "Percentage of SDA LAB: " << (marks / 100) * 100 << "%" << endl;
				cout << "Grade of SDA LAB: ";
				if (marks >= 90)
				{
					cout << "A" << endl;
				}
				else if (marks >= 80)
				{
					cout << "B" << endl;
				}
				else if (marks >= 70)
				{
					cout << "C" << endl;
				}
				else if (marks >= 60)
				{
					cout << "D" << endl;
				}
				else if (marks >= 50)
				{
					cout << "E" << endl;
				}
				else
				{
					cout << "F" << endl;
				}
			}
		}
		avg = total / per;
		cout << "Average Marks of SDA LAB: " << avg << endl;
		fin.close();
	}
	void displayresult4(int n)
	{
		ifstream fin;
		fin.open("marks4.txt");
		string name;
		int rollno;
		float marks;
		float total = 0, avg = 0, per = 0;
		while (fin >> name)
		{
			per++;
			fin >> rollno;
			fin >> marks;
			total += marks;
			if (rollno == n)
			{
				cout << "Name: " << name << endl;
				cout << "Roll No: " << rollno << endl;
				cout << "Marks of SDA: " << marks << endl;
				cout << "Percentage of SDA: " << (marks / 100) * 100 << "%" << endl;
				cout << "Grade of SDA: ";
				if (marks >= 90)
				{
					cout << "A" << endl;
				}
				else if (marks >= 80)
				{
					cout << "B" << endl;
				}
				else if (marks >= 70)
				{
					cout << "C" << endl;
				}
				else if (marks >= 60)
				{
					cout << "D" << endl;
				}
				else if (marks >= 50)
				{
					cout << "E" << endl;
				}
				else
				{
					cout << "F" << endl;
				}
			}
		}
		avg = total / per;
		cout << "Average Marks of SDA: " << avg << endl;
		fin.close();
	}
	void displayresult5(int n)
	{
		ifstream fin;
		fin.open("marks5.txt");
		string name;
		int rollno;
		float marks;
		float total = 0, avg = 0, per = 0;
		while (fin >> name)
		{
			per++;
			fin >> rollno;
			fin >> marks;
			total += marks;
			if (rollno == n)
			{
				cout << "Name: " << name << endl;
				cout << "Roll No: " << rollno << endl;
				cout << "Marks of Web: " << marks << endl;
				cout << "Percentage of Web: " << (marks / 100) * 100 << "%" << endl;
				cout << "Grade of Web: ";
				if (marks >= 90)
				{
					cout << "A" << endl;
				}
				else if (marks >= 80)
				{
					cout << "B" << endl;
				}
				else if (marks >= 70)
				{
					cout << "C" << endl;
				}
				else if (marks >= 60)
				{
					cout << "D" << endl;
				}
				else if (marks >= 50)
				{
					cout << "E" << endl;
				}
				else
				{
					cout << "F" << endl;
				}
			}
		}
		avg = total / per;
		cout << "Average Marks of Web: " << avg << endl;
		fin.close();
	}
	bool search(int n)
	{
		ifstream fin;
		fin.open("student.txt");
		string name;
		int rollno;
		while (fin >> name)
		{
			fin >> rollno;
			if (rollno == n)
			{
				return true;
			}
		}
		fin.close();
		return false;
	}
	bool search(string n)
	{
		ifstream fin;
		fin.open("student.txt");
		string name;
		int rollno;
		while (fin >> name)
		{
			fin >> rollno;
			if (name == n)
			{
				return true;
			}
		}
		fin.close();
		return false;
	}
	void displayallstudents()
	{
		ifstream fin;
		fin.open("student.txt");
		string name;
		int rollno;
		while (fin >> name)
		{
			fin >> rollno;
			cout << "Name: " << name << endl;
			cout << "Roll No: " << rollno << endl;
		}
		cout << endl;
		fin.close();
	}
	void getdata()
	{
		cout << "Enter Name: ";
		cin >> name;
		cout << "Enter Roll No: ";
		cin >> rollno;
	}
	void result(student s, string n)
	{
		float sum = 0, avg = 0, per = 0;
		ifstream fin;
		fin.open("student.txt");
		string name;
		int rollno;
		float marks;
		while (fin >> name)
		{
			fin >> rollno;
			if (name == n)
			{
				cout << "Name: " << name << endl;
				cout << "Roll No: " << rollno << endl;
			}
		}
		fin.close();
		fin.open("marks1.txt");
		while (fin >> name)
		{
			fin >> rollno;
			fin >> marks;
			if (name == n)
			{
				sum += marks;
				cout << "Marks of DSA: " << marks << endl;
			}
		}
		fin.close();
		fin.open("marks2.txt");
		while (fin >> name)
		{
			fin >> rollno;
			fin >> marks;
			if (name == n)
			{
				sum += marks;
				cout << "Marks of DSA LAB: " << marks << endl;
			}
		}
		fin.close();
		fin.open("marks3.txt");
		while (fin >> name)
		{
			fin >> rollno;
			fin >> marks;
			if (name == n)
			{
				sum += marks;
				cout << "Marks of SDA LAB: " << marks << endl;
			}
		}
		fin.close();
		fin.open("marks4.txt");
		while (fin >> name)
		{
			fin >> rollno;
			fin >> marks;
			if (name == n)
			{
				sum += marks;
				cout << "Marks of SDA: " << marks << endl;
			}
		}
		fin.close();
		fin.open("marks5.txt");
		while (fin >> name)
		{
			fin >> rollno;
			fin >> marks;
			if (name == n)
			{
				sum += marks;
				cout << "Marks of Web: " << marks << endl;
			}
		}
		fin.close();
		avg = sum / 5;
		cout << "Average Marks: " << avg << endl;
		per = (sum / 500) * 100;
		cout << "Percentage: " << per << "%" << endl;
		cout << "Grade: ";
		if (per >= 90)
		{
			cout << "A" << endl;
		}
		else if (per >= 80)
		{
			cout << "B" << endl;
		}
		else if (per >= 70)
		{
			cout << "C" << endl;
		}
		else if (per >= 60)
		{
			cout << "D" << endl;
		}
		else if (per >= 50)
		{
			cout << "E" << endl;
		}
		else
		{
			cout << "F" << endl;
		}
	}
};

class teacher
{
public:
	void searchbynameA(string n, student s)
	{
		s.displayA(n);
	}
	void searchbynameB(string n, student s)
	{
		s.displayB(n);
	}
	void searchbynameC(string n, student s)
	{
		s.displayC(n);
	}
	void searchbynameD(string n, student s)
	{
		s.displayD(n);
	}
	void searchbynameE(string n, student s)
	{
		s.displayE(n);
	}
	void searchbyroll1(int r, student s)
	{
		s.display1(r);
	}
	void searchbyroll2(int r, student s)
	{
		s.display2(r);
	}
	void searchbyroll3(int r, student s)
	{
		s.display3(r);
	}
	void searchbyroll4(int r, student s)
	{
		s.display4(r);
	}
	void searchbyroll5(int r, student s)
	{
		s.display5(r);
	}
	student addstudent()
	{
		student s;
		s.getdata();
		ifstream fin;
		fin.open("student.txt", ios::in);
		string name;
		int rollno;
		while (fin >> name)
		{
			fin >> rollno;
			if (rollno == s.rollno)
			{
				cout << "Student already exists" << endl;
				return s;
			}
			else if (name == s.name)
			{
				cout << "Student already exists" << endl;
				return s;
			}
		}
		ofstream fout;
		fout.open("student.txt", ios::app);
		fout << s.name << endl;
		fout << s.rollno << endl;
		fout.close();
		return s;
	}
	void deletestudent(int r)
	{
		ifstream fin;
		ofstream fout;
		fin.open("student.txt", ios::in);
		fout.open("temp.txt", ios::out);
		string name;
		int rollno;
		while (fin >> name)
		{
			fin >> rollno;
			if (rollno != r)
			{
				fout << name << endl;
				fout << rollno << endl;
			}
		}
		fin.close();
		fout.close();
		remove("student.txt");
		rename("temp.txt", "student.txt");
		deletesub1(r);
		deletesub2(r);
		deletesub3(r);
		deletesub4(r);
		deletesub5(r);
	}
	void deletesub1(int n)
	{
		ifstream fin;
		ofstream fout;
		fin.open("marks1.txt", ios::in);
		fout.open("temp.txt", ios::out);
		string name;
		int rollno;
		float marks;
		while (fin >> name)
		{
			fin >> rollno;
			fin >> marks;
			if (rollno != n)
			{
				fout << name << endl;
				fout << rollno << endl;
				fout << marks << endl;
			}
		}
		fin.close();
		fout.close();
		remove("marks1.txt");
		rename("temp.txt", "marks1.txt");
	}
	void deletesub2(int n)
	{
		ifstream fin;
		ofstream fout;
		fin.open("marks2.txt", ios::in);
		fout.open("temp.txt", ios::out);
		string name;
		int rollno;
		float marks;
		while (fin >> name)
		{
			fin >> rollno;
			fin >> marks;
			if (rollno != n)
			{
				fout << name << endl;
				fout << rollno << endl;
				fout << marks << endl;
			}
		}
		fin.close();
		fout.close();
		remove("marks2.txt");
		rename("temp.txt", "marks2.txt");
	}
	void deletesub3(int n)
	{
		ifstream fin;
		ofstream fout;
		fin.open("marks3.txt", ios::in);
		fout.open("temp.txt", ios::out);
		string name;
		int rollno;
		float marks;
		while (fin >> name)
		{
			fin >> rollno;
			fin >> marks;
			if (rollno != n)
			{
				fout << name << endl;
				fout << rollno << endl;
				fout << marks << endl;
			}
		}
		fin.close();
		fout.close();
		remove("marks3.txt");
		rename("temp.txt", "marks3.txt");
	}
	void deletesub4(int n)
	{
		ifstream fin;
		ofstream fout;
		fin.open("marks4.txt", ios::in);
		fout.open("temp.txt", ios::out);
		string name;
		int rollno;
		float marks;
		while (fin >> name)
		{
			fin >> rollno;
			fin >> marks;
			if (rollno != n)
			{
				fout << name << endl;
				fout << rollno << endl;
				fout << marks << endl;
			}
		}
		fin.close();
		fout.close();
		remove("marks4.txt");
		rename("temp.txt", "marks4.txt");
	}
	void deletesub5(int n)
	{
		ifstream fin;
		ofstream fout;
		fin.open("marks5.txt", ios::in);
		fout.open("temp.txt", ios::out);
		string name;
		int rollno;
		float marks;
		while (fin >> name)
		{
			fin >> rollno;
			fin >> marks;
			if (rollno != n)
			{
				fout << name << endl;
				fout << rollno << endl;
				fout << marks << endl;
			}
		}
		fin.close();
		fout.close();
		remove("marks5.txt");
		rename("temp.txt", "marks5.txt");
	}
	void addsub1(student s)
	{
		s.getdata();
		cout << "Enter marks of DSA: ";
		cin >> s.marks;
		ifstream fin;
		fin.open("student.txt", ios::in);
		string name;
		int rollno;
		bool x = false;
		while (fin >> name)
		{
			fin >> rollno;
			if (rollno == s.rollno&&name == s.name)
			{
				ofstream fout;
				fout.open("marks1.txt", ios::app);
				fout << s.name << endl;
				fout << s.rollno << endl;
				fout << s.marks << endl;
				fout.close();
				break;
			}
			else
			{
				x = true;
			}
		}
		if (x == true)
		{
			cout << "Student not found" << endl;
		}
	}
	void addsub2(student s)
	{
		s.getdata();
		cout << "Enter marks of DSA LAB: ";
		cin >> s.marks;
		ifstream fin;
		fin.open("student.txt", ios::in);
		string name;
		int rollno;
		bool x = false;
		while (fin >> name)
		{
			fin >> rollno;
			if (rollno == s.rollno&&name == s.name)
			{
				ofstream fout;
				fout.open("marks2.txt", ios::app);
				fout << s.name << endl;
				fout << s.rollno << endl;
				fout << s.marks << endl;
				fout.close();
				break;
			}
			else
			{
				x = true;
			}
		}
		if (x == true)
		{
			cout << "Student not found" << endl;
		}
	}
	void addsub3(student s)
	{
		s.getdata();
		cout << "Enter marks of SDA LAB: ";
		cin >> s.marks;
		ifstream fin;
		fin.open("student.txt", ios::in);
		string name;
		int rollno;
		bool x = false;
		while (fin >> name)
		{
			fin >> rollno;
			if (rollno == s.rollno&&name == s.name)
			{
				ofstream fout;
				fout.open("marks3.txt", ios::app);
				fout << s.name << endl;
				fout << s.rollno << endl;
				fout << s.marks << endl;
				fout.close();
				break;
			}
			else
			{
				x = true;
			}
		}
		if (x == true)
		{
			cout << "Student not found" << endl;
		}
	}
	void addsub4(student s)
	{
		s.getdata();
		cout << "Enter marks of SDA: ";
		cin >> s.marks;
		ifstream fin;
		fin.open("student.txt", ios::in);
		string name;
		int rollno;
		bool x = false;
		while (fin >> name)
		{
			fin >> rollno;
			if (rollno == s.rollno&&name == s.name)
			{
				ofstream fout;
				fout.open("marks4.txt", ios::app);
				fout << s.name << endl;
				fout << s.rollno << endl;
				fout << s.marks << endl;
				fout.close();
				break;
			}
			else
			{
				x = true;
			}
		}
		if (x == true)
		{
			cout << "Student not found" << endl;
		}
	}
	void addsub5(student s)
	{
		s.getdata();
		cout << "Enter marks of WEb: ";
		cin >> s.marks;
		ifstream fin;
		fin.open("student.txt", ios::in);
		string name;
		int rollno;
		bool x = false;
		while (fin >> name)
		{
			fin >> rollno;
			if (rollno == s.rollno&&name == s.name)
			{
				ofstream fout;
				fout.open("marks5.txt", ios::app);
				fout << s.name << endl;
				fout << s.rollno << endl;
				fout << s.marks << endl;
				fout.close();
				break;
			}
			else
			{
				x = true;
			}
		}
		if (x == true)
		{
			cout << "Student not found" << endl;
		}
	}
	void updatesub1(student s)
	{
		s.getdata();
		ifstream fin;
		ofstream fout;
		fin.open("marks1.txt", ios::in);
		fout.open("temp.txt", ios::out);
		string name;
		int rollno;
		float marks;
		while (fin >> name)
		{
			fin >> rollno;
			fin >> marks;
			if (name == s.name && rollno == s.rollno)
			{
				cout << "Enter new marks: ";
				cin >> marks;
				fout << name << endl;
				fout << rollno << endl;
				fout << marks << endl;
			}
			else
			{
				fout << name << endl;
				fout << rollno << endl;
				fout << marks << endl;
			}
		}
		fin.close();
		fout.close();
		remove("marks1.txt");
		rename("temp.txt", "marks1.txt");
	}
	void updatesub2(student s)
	{
		s.getdata();
		ifstream fin;
		ofstream fout;
		fin.open("marks2.txt", ios::in);
		fout.open("temp.txt", ios::out);
		string name;
		int rollno;
		float marks;
		while (fin >> name)
		{
			fin >> rollno;
			fin >> marks;
			if (name == s.name && rollno == s.rollno)
			{
				cout << "Enter new marks: ";
				cin >> marks;
				fout << name << endl;
				fout << rollno << endl;
				fout << marks << endl;
			}
			else
			{
				fout << name << endl;
				fout << rollno << endl;
				fout << marks << endl;
			}
		}
		fin.close();
		fout.close();
		remove("marks2.txt");
		rename("temp.txt", "marks2.txt");
	}
	void updatesub3(student s)
	{
		s.getdata();
		ifstream fin;
		ofstream fout;
		fin.open("marks3.txt", ios::in);
		fout.open("temp.txt", ios::out);
		string name;
		int rollno;
		float marks;
		while (fin >> name)
		{
			fin >> rollno;
			fin >> marks;
			if (name == s.name && rollno == s.rollno)
			{
				cout << "Enter new marks: ";
				cin >> marks;
				fout << name << endl;
				fout << rollno << endl;
				fout << marks << endl;
			}
			else
			{
				fout << name << endl;
				fout << rollno << endl;
				fout << marks << endl;
			}
		}
		fin.close();
		fout.close();
		remove("marks3.txt");
		rename("temp.txt", "marks3.txt");
	}
	void updatesub4(student s)
	{
		s.getdata();
		ifstream fin;
		ofstream fout;
		fin.open("marks4.txt", ios::in);
		fout.open("temp.txt", ios::out);
		string name;
		int rollno;
		float marks;
		while (fin >> name)
		{
			fin >> rollno;
			fin >> marks;
			if (name == s.name && rollno == s.rollno)
			{
				cout << "Enter new marks: ";
				cin >> marks;
				fout << name << endl;
				fout << rollno << endl;
				fout << marks << endl;
			}
			else
			{
				fout << name << endl;
				fout << rollno << endl;
				fout << marks << endl;
			}
		}
		fin.close();
		fout.close();
		remove("marks4.txt");
		rename("temp.txt", "marks4.txt");
	}
	void updatesub5(student s)
	{
		s.getdata();
		ifstream fin;
		ofstream fout;
		fin.open("marks5.txt", ios::in);
		fout.open("temp.txt", ios::out);
		string name;
		int rollno;
		float marks;
		while (fin >> name)
		{
			fin >> rollno;
			fin >> marks;
			if (name == s.name && rollno == s.rollno)
			{
				cout << "Enter new marks: ";
				cin >> marks;
				fout << name << endl;
				fout << rollno << endl;
				fout << marks << endl;
			}
			else
			{
				fout << name << endl;
				fout << rollno << endl;
				fout << marks << endl;
			}
		}
		fin.close();
		fout.close();
		remove("marks5.txt");
		rename("temp.txt", "marks5.txt");
	}
	void displayresult1(student s)
	{
		cout << "Enter Roll No: ";
		cin >> s.rollno;
		s.displayresult1(s.rollno);
	}
	void displayresult2(student s)
	{
		cout << "Enter Roll No: ";
		cin >> s.rollno;
		s.displayresult2(s.rollno);
	}
	void displayresult3(student s)
	{
		cout << "Enter Roll No: ";
		cin >> s.rollno;
		s.displayresult3(s.rollno);
	}
	void displayresult4(student s)
	{
		cout << "Enter Roll No: ";
		cin >> s.rollno;
		s.displayresult4(s.rollno);
	}
	void displayresult5(student s)
	{
		cout << "Enter Roll No: ";
		cin >> s.rollno;
		s.displayresult5(s.rollno);
	}
	void displayallteachers()
	{
		ifstream fin;
		fin.open("teacher.txt");
		string name, subject;
		while (fin >> name)
		{
			fin >> subject;
			cout << "\nTeacher Name: " << name << endl;
			cout << "Subject: " << subject << endl;
		}
		cout << endl;
		fin.close();
	}
};

int main()
{
	student s;
	teacher t1;
	for (int i = 0; i >= 0; i++)
	{
		cout << "************************************" << endl;
		cout << "*  Welcome to Student Grade Book   *" << endl;
		cout << "*               system             *" << endl;
		cout << "************************************" << endl;
		cout << "Enter Username: ";
		string username;
		cin >> username;
		cout << "Enter Password: ";
		string password;
		cin >> password;
		bool x = false, y = false;
		ifstream fin;
		fin.open("student.txt");
		string temp;
		int u = 0;
		while (fin >> temp)
		{
			fin >> u;
			if (temp == username)
			{
				x = true;
				break;
			}
		}
		fin.close();
		fin.open("teacher.txt");
		string N, S;
		if (fin.is_open())
		{
			while (fin >> N)
			{
				fin >> S;
				if (N == username)
				{
					y = true;
					break;
				}
			}
		}
		else
		{
			cout << "File not found" << endl;
		}
		if (username == "Admin" && password == "112233")
		{
			system("cls");
			cout << "************************************" << endl;
			cout << "*  Welcome to Student Grade Book   *" << endl;
			cout << "*               system             *" << endl;
			cout << "************************************" << endl;
			cout << "******   Admin Details   *********" << endl;
			cout << "Name: "
				<< "           Admin" << endl;
			cout << "Department: "
				<< "     FOIT" << endl;
			cout << "Subject: "
				<< "         All" << endl;
			cout << "***         Main Menu         ***" << endl;
			cout << "*************************************" << endl
				<< endl;
			cout << "***         Select Option         ***" << endl;
			cout << "Press 1 to Add Student" << endl;
			cout << "Press 2 to delete Student" << endl;
			cout << "Press 3 to Display all Students" << endl;
			cout << "Press 4 to Display all Teachers" << endl;
			cout << "Press any other number to exit" << endl;
			int ch1;
			cin >> ch1;
			if (ch1 == 1)
			{
				system("cls");
				cout << "************************************" << endl;
				cout << "*  Welcome to Student Grade Book   *" << endl;
				cout << "*               system             *" << endl;
				cout << "************************************" << endl;
				cout << "******   Admin Details   *********" << endl;
				cout << "Name: "
					<< "           Admin" << endl;
				cout << "Department: "
					<< "     FOIT" << endl;
				cout << "Subject: "
					<< "         All" << endl;
				cout << "***         Main Menu         ***" << endl;
				cout << "*************************************" << endl
					<< endl;
				cout << "***         Add Student         ***" << endl;
				cout << "*************************************" << endl
					<< endl;
				t1.addstudent();
				cout << "Student Added Successfully" << endl;
				cout << "Press 1 to go to Main Menu" << endl;
				cout << "Press any other key to Exit" << endl;
				int ch2;
				cin >> ch2;
				if (ch2 == 1)
				{
					system("cls");
					continue;
				}
				else
				{
					cout << "EXIT" << endl;
					break;
				}
			}
			else if (ch1 == 2)
			{
				system("cls");
				cout << "************************************" << endl;
				cout << "*  Welcome to Student Grade Book   *" << endl;
				cout << "*               system             *" << endl;
				cout << "************************************" << endl;
				cout << "******   Admin Details   *********" << endl;
				cout << "Name: "
					<< "           Admin" << endl;
				cout << "Department: "
					<< "     FOIT" << endl;
				cout << "Subject: "
					<< "         All" << endl;
				cout << "***         Delete Student         ***" << endl;
				cout << "*************************************" << endl
					<< endl;
				cout << "Enter Roll No of Student to Delete: ";
				int rollno;
				cin >> rollno;
				for (int i = 0; i < 20; i++)
				{
					if (s.search(rollno))
					{
						t1.deletestudent(rollno);
						cout << "Student Deleted Successfully" << endl;
						break;
					}
					else
					{
						cout << "Student not found" << endl;
					}
					cout << "Press 1 to go to Main Menu" << endl;
					cout << "Press any other key to Exit" << endl;
					int ch3;
					cin >> ch3;
					if (ch3 == 1)
					{
						system("cls");
						continue;
					}
					else
					{
						cout << "EXIT" << endl;
						break;
					}
				}
			}
			else if (ch1 == 3)
			{
				system("cls");
				cout << "************************************" << endl;
				cout << "*  Welcome to Student Grade Book   *" << endl;
				cout << "*               system             *" << endl;
				cout << "************************************" << endl;
				cout << "******   Admin Details   *********" << endl;
				cout << "Name: "
					<< "           Admin" << endl;
				cout << "Department: "
					<< "     FOIT" << endl;
				cout << "Subject: "
					<< "         All" << endl;
				cout << "***         Display all Students         ***" << endl;
				cout << "*************************************" << endl
					<< endl;
				s.displayallstudents();
				cout << "Press 1 to go to Main Menu" << endl;
				cout << "Press any other key to Exit" << endl;
				int ch3;
				cin >> ch3;
				if (ch3 == 1)
				{
					system("cls");
					continue;
				}
				else
				{
					cout << "EXIT" << endl;
					break;
				}
			}
			else if (ch1 == 4)
			{
				system("cls");
				cout << "************************************" << endl;
				cout << "*  Welcome to Student Grade Book   *" << endl;
				cout << "*               system             *" << endl;
				cout << "************************************" << endl;
				cout << "******   Admin Details   *********" << endl;
				cout << "Name: "
					<< "           Admin" << endl;
				cout << "Department: "
					<< "     FOIT" << endl;
				cout << "Subject: "
					<< "         All" << endl;
				cout << "***         Display all Teachers         ***" << endl;
				cout << "*************************************" << endl
					<< endl;
				t1.displayallteachers();
				cout << "Press 1 to go to Main Menu" << endl;
				cout << "Press any other key to Exit" << endl;
				int ch3;
				cin >> ch3;
				if (ch3 == 1)
				{
					system("cls");
					continue;
				}
				else
				{
					cout << "EXIT" << endl;
					break;
				}
			}
		}
		else if (y && password == "123456")
		{
			int temp = 0;
			if (username == "Adnan")
			{
				temp = 1;
			}
			else if (username == "Rehan")
			{
				temp = 2;
			}
			else if (username == "Iqra")
			{
				temp = 3;
			}
			else if (username == "Sarah")
			{
				temp = 4;
			}
			else if (username == "Rubab")
			{
				temp = 5;
			}
			else
			{
				cout << "Invalid Username" << endl;
			}
			system("cls");
			cout << "************************************" << endl;
			cout << "*    Welcome to Teacher Portal     *" << endl;
			cout << "************************************" << endl;
			cout << "******   Teacher Details   *********" << endl;
			cout << "Name: "
				<< "           Professor " << N << endl;
			cout << "Department: "
				<< "     FOIT" << endl;
			cout << "Subject: "
				<< "         " << S << endl;
			cout << "***         Main Menu         ***" << endl;
			cout << "*************************************" << endl
				<< endl;
			cout << "***         Select Option         ***" << endl;
			cout << "Press 1 to Insert Marks" << endl;
			cout << "Press 2 to Display Result" << endl;
			cout << "Press 3 to Update Marks" << endl;
			cout << "Press 4 to Search Student" << endl;
			cout << "Press any other number to exit" << endl;
			int ch1;
			cin >> ch1;
			if (ch1 == 1)
			{
				system("cls");
				cout << "************************************" << endl;
				cout << "*    Welcome to Teacher Portal     *" << endl;
				cout << "************************************" << endl;
				cout << "******   Teacher Details   *********" << endl;
				cout << "Name: "
					<< "           Professor " << N << endl;
				cout << "Department: "
					<< "     FOIT" << endl;
				cout << "Subject: "
					<< "         " << S << endl;
				cout << "***         Main Menu         ***" << endl;
				cout << "*************************************" << endl
					<< endl;
				cout << "***          Insert Marks         ***" << endl;
				cout << "*************************************" << endl
					<< endl;
				if (temp == 1)
				{
					t1.addsub1(s);
				}
				else if (temp == 2)
				{
					t1.addsub2(s);
				}
				else if (temp == 3)
				{
					t1.addsub3(s);
				}
				else if (temp == 4)
				{
					t1.addsub4(s);
				}
				else if (temp == 5)
				{
					t1.addsub5(s);
				}
				cout << "Press 1 to go to Main Menu" << endl;
				cout << "Press any other key to exit" << endl;
				int ch2;
				cin >> ch2;
				if (ch2 == 1)
				{
					system("cls");
					continue;
				}
				else
				{
					cout << "EXIT" << endl;
					break;
				}
			}
			else if (ch1 == 2)
			{
				system("cls");
				cout << "************************************" << endl;
				cout << "*    Welcome to Teacher Portal     *" << endl;
				cout << "************************************" << endl;
				cout << "******   Teacher Details   *********" << endl;
				cout << "Name: "
					<< "           Professor " << N << endl;
				cout << "Department: "
					<< "     FOIT" << endl;
				cout << "Subject: "
					<< "         " << S << endl;
				cout << "***         Main Menu         ***" << endl;
				cout << "*************************************" << endl
					<< endl;
				cout << "***         Display Result         ***" << endl;
				cout << "*************************************" << endl
					<< endl;
				cout << "Press 1 to Search result by name" << endl;
				cout << "Press 2 to Search result by roll number" << endl;
				cout << "Press any other key to exit" << endl;
				int ch4;
				cin >> ch4;
				if (ch4 == 1)
				{
					cout << "Enter name of student" << endl;
					string name;
					cin >> name;
					if (temp == 1)
					{
						s.displayA(name);
					}
					else if (temp == 2)
					{
						s.displayB(name);
					}
					else if (temp == 3)
					{
						s.displayC(name);
					}
					else if (temp == 4)
					{
						s.displayD(name);
					}
					else if (temp == 5)
					{
						s.displayE(name);
					}
				}
				else if (ch4 == 2)
				{
					cout << "Enter roll number of student" << endl;
					int roll;
					cin >> roll;
					if (temp == 1)
					{
						s.display1(roll);
					}
					else if (temp == 2)
					{
						s.display2(roll);
					}
					else if (temp == 3)
					{
						s.display3(roll);
					}
					else if (temp == 4)
					{
						s.display4(roll);
					}
					else if (temp == 5)
					{
						s.display5(roll);
					}
				}
				else
				{
					cout << "EXIT" << endl;
					break;
				}
				cout << "Press 1 to go to Main Menu" << endl;
				cout << "Press any other key to exit" << endl;
				int ch2;
				cin >> ch2;
				if (ch2 == 1)
				{
					system("cls");
					continue;
				}
				else
				{
					cout << "EXIT" << endl;
					break;
				}
			}
			else if (ch1 == 3)
			{
				system("cls");
				cout << "************************************" << endl;
				cout << "*    Welcome to Teacher Portal     *" << endl;
				cout << "************************************" << endl;
				cout << "******   Teacher Details   *********" << endl;
				cout << "Name: "
					<< "           Professor " << N << endl;
				cout << "Department: "
					<< "     FOIT" << endl;
				cout << "Subject: "
					<< "         " << S << endl;
				cout << "***         Main Menu         ***" << endl;
				cout << "*************************************" << endl
					<< endl;
				cout << "***         Update Marks          ***" << endl;
				cout << "*************************************" << endl
					<< endl;
				if (temp == 1)
				{
					t1.updatesub1(s);
				}
				else if (temp == 2)
				{
					t1.updatesub2(s);
				}
				else if (temp == 3)
				{
					t1.updatesub3(s);
				}
				else if (temp == 4)
				{
					t1.updatesub4(s);
				}
				else if (temp == 5)
				{
					t1.updatesub5(s);
				}
				cout << "Press 1 to go to Main Menu" << endl;
				cout << "Press any other key to exit" << endl;
				int ch2;
				cin >> ch2;
				if (ch2 == 1)
				{
					system("cls");
					continue;
				}
				else
				{
					cout << "EXIT" << endl;
					break;
				}
			}
			else if (ch1 == 4)
			{
				system("cls");
				cout << "************************************" << endl;
				cout << "*    Welcome to Teacher Portal     *" << endl;
				cout << "************************************" << endl;
				cout << "******   Teacher Details   *********" << endl;
				cout << "Name: "
					<< "           Professor " << N << endl;
				cout << "Department: "
					<< "     FOIT" << endl;
				cout << "Subject: "
					<< "         " << S << endl;
				cout << "***         Main Menu         ***" << endl;
				cout << "*************************************" << endl
					<< endl;
				cout << "***         Search Student         ***" << endl;
				cout << "*************************************" << endl
					<< endl;
				cout << "Press 1 to search by Name" << endl;
				cout << "Press 2 to search by Roll No" << endl;
				cout << "Press any other key to exit" << endl;
				int ch3;
				cin >> ch3;
				if (ch3 == 1)
				{
					cout << "Enter name of student to Search" << endl;
					string name;
					cin >> name;
					if (temp == 1)
					{
						t1.searchbynameA(name, s);
					}
					else if (temp == 2)
					{
						t1.searchbynameB(name, s);
					}
					else if (temp == 3)
					{
						t1.searchbynameC(name, s);
					}
					else if (temp == 4)
					{
						t1.searchbynameD(name, s);
					}
					else if (temp == 5)
					{
						t1.searchbynameE(name, s);
					}
				}
				else if (ch3 == 2)
				{
					cout << "Enter roll number of student to search" << endl;
					int roll;
					cin >> roll;
					if (temp == 1)
					{
						t1.searchbyroll1(roll, s);
					}
					else if (temp == 2)
					{
						t1.searchbyroll2(roll, s);
					}
					else if (temp == 3)
					{
						t1.searchbyroll3(roll, s);
					}
					else if (temp == 4)
					{
						t1.searchbyroll4(roll, s);
					}
					else if (temp == 5)
					{
						t1.searchbyroll5(roll, s);
					}
				}
				else
				{
					cout << "EXIT" << endl;
					break;
				}
				cout << "Press 1 to go to Main Menu" << endl;
				cout << "Press any other key to exit" << endl;
				int ch2;
				cin >> ch2;
				if (ch2 == 1)
				{
					system("cls");
					continue;
				}
				else
				{
					cout << "EXIT" << endl;
					break;
				}
			}
			else
			{
				cout << "EXIT" << endl;
				break;
			}
		}
		else if (x && password == "1234")
		{
			system("cls");
			cout << "************************************" << endl;
			cout << "*    Welcome to Student Portal     *" << endl;
			cout << "************************************" << endl;
			cout << "******   Student Details   *********" << endl;
			cout << "Name: " << temp << endl;
			cout << "Roll No: " << u << endl;
			cout << "***         Main Menu         ***" << endl;
			cout << "*************************************" << endl
				<< endl;
			cout << "***         Select Option         ***" << endl;
			cout << "Press 1 to View Result" << endl;
			cout << "Press 2 to View Marks" << endl;
			cout << "Press 3 to View all Students" << endl;
			cout << "Press any other number to exit" << endl;
			int ch1;
			cin >> ch1;
			if (ch1 == 1)
			{
				system("cls");
				cout << "************************************" << endl;
				cout << "*    Welcome to Student Portal     *" << endl;
				cout << "************************************" << endl;
				cout << "******   Student Details   *********" << endl;
				cout << "Name: " << temp << endl;
				cout << "Roll No: " << u << endl;
				cout << "***         Main Menu         ***" << endl;
				cout << "*************************************" << endl
					<< endl;
				cout << "***         View Result         ***" << endl;
				cout << "*************************************" << endl
					<< endl;
				cout << "Press 1 to view result of all subjects" << endl;
				cout << "Press 2 to view result of a particular subject" << endl;
				cout << "Press any other key to exit" << endl;
				int ch5;
				cin >> ch5;
				if (ch5 == 1)
				{
					s.result(s, username);
				}
				else if (ch5 == 2)
				{
					cout << "Enter subject name to view result" << endl;
					string sub;
					cin >> sub;
					if (sub == "DSA")
					{
						ifstream fin;
						fin.open("student.txt");
						string v;
						int a;
						while (fin >> v)
						{
							fin >> a;
							if (v == username)
							{
								break;
							}
						}
						s.displayresult1(a);
						fin.close();
					}
					else if (sub == "DSA LAB")
					{
						ifstream fin;
						fin.open("student.txt");
						string v;
						int a;
						while (fin >> v)
						{
							fin >> a;
							if (v == username)
							{
								break;
							}
						}
						s.displayresult2(a);
						fin.close();
					}
					else if (sub == "SDA LAB")
					{
						ifstream fin;
						fin.open("student.txt");
						string v;
						int a;
						while (fin >> v)
						{
							fin >> a;
							if (v == username)
							{
								break;
							}
						}
						s.displayresult3(a);
						fin.close();
					}
					else if (sub == "SDA")
					{
						ifstream fin;
						fin.open("student.txt");
						string v;
						int a;
						while (fin >> v)
						{
							fin >> a;
							if (v == username)
							{
								break;
							}
						}
						s.displayresult4(a);
						fin.close();
					}
					else if (sub == "WEB")
					{
						ifstream fin;
						fin.open("student.txt");
						string v;
						int a;
						while (fin >> v)
						{
							fin >> a;
							if (v == username)
							{
								break;
							}
						}
						s.displayresult5(a);
						fin.close();
					}
					else
					{
						cout << "Subject not found" << endl;
					}
				}
				else
				{
					cout << "EXIT" << endl;
					break;
				}
				cout << "Press 1 to go to Main Menu" << endl;
				cout << "Press any other key to exit" << endl;
				int ch2;
				cin >> ch2;
				if (ch2 == 1)
				{
					system("cls");
					continue;
				}
				else
				{
					cout << "EXIT" << endl;
					break;
				}
			}
			else if (ch1 == 2)
			{
				system("cls");
				cout << "************************************" << endl;
				cout << "*    Welcome to Student Portal     *" << endl;
				cout << "************************************" << endl;
				cout << "******   Student Details   *********" << endl;
				cout << "Name: " << temp << endl;
				cout << "Roll No: " << u << endl;
				cout << "***         Main Menu         ***" << endl;
				cout << "*************************************" << endl
					<< endl;
				cout << "***         View Marks         ***" << endl;
				cout << "*************************************" << endl
					<< endl;
				cout << "Press 1 to view marks of DSA" << endl;
				cout << "Press 2 to view marks of DSA LAB" << endl;
				cout << "Press 3 to view marks of SDA LAB" << endl;
				cout << "Press 4 to view marks of SDA" << endl;
				cout << "Press 5 to view marks of Web" << endl;
				cout << "Press 6 to view marks of all subjects" << endl;
				cout << "Press any other key to exit" << endl;
				int ch3;
				cin >> ch3;
				if (ch3 == 1)
				{
					ifstream fin;
					fin.open("student.txt");
					string v;
					int a;
					while (fin >> v)
					{
						fin >> a;
						if (v == username)
						{
							break;
						}
					}
					s.display1(a);
					fin.close();
				}
				else if (ch3 == 2)
				{
					ifstream fin;
					fin.open("student.txt");
					string v;
					int a;
					while (fin >> v)
					{
						fin >> a;
						if (v == username)
						{
							break;
						}
					}
					s.display2(a);
					fin.close();
				}
				else if (ch3 == 3)
				{
					ifstream fin;
					fin.open("student.txt");
					string v;
					int a;
					while (fin >> v)
					{
						fin >> a;
						if (v == username)
						{
							break;
						}
					}
					s.display3(a);
					fin.close();
				}
				else if (ch3 == 4)
				{
					ifstream fin;
					fin.open("student.txt");
					string v;
					int a;
					while (fin >> v)
					{
						fin >> a;
						if (v == username)
						{
							break;
						}
					}
					s.display4(a);
					fin.close();
				}
				else if (ch3 == 5)
				{
					ifstream fin;
					fin.open("student.txt");
					string v;
					int a;
					while (fin >> v)
					{
						fin >> a;
						if (v == username)
						{
							break;
						}
					}
					s.display5(a);
					fin.close();
				}
				else if (ch3 == 6)
				{
					ifstream fin;
					fin.open("student.txt");
					string v;
					int a;
					while (fin >> v)
					{
						fin >> a;
						if (v == username)
						{
							break;
						}
					}
					s.display(a);
					fin.close();
				}
				cout << "Press 1 to go to Main Menu" << endl;
				cout << "Press any other key to exit" << endl;
				int ch2;
				cin >> ch2;
				if (ch2 == 1)
				{
					system("cls");
					continue;
				}
				else
				{
					cout << "EXIT" << endl;
					break;
				}
			}
			else if (ch1 == 3)
			{
				system("cls");
				cout << "************************************" << endl;
				cout << "*    Welcome to Student Portal     *" << endl;
				cout << "************************************" << endl;
				cout << "******   Student Details   *********" << endl;
				cout << "Name: " << temp << endl;
				cout << "Roll No: " << u << endl;
				cout << "***         Main Menu         ***" << endl;
				cout << "*************************************" << endl
					<< endl;
				cout << "***         View all Students         ***" << endl;
				cout << "*************************************" << endl
					<< endl;
				s.displayallstudents();
				cout << "Press 1 to go to Main Menu" << endl;
				cout << "Press any other key to exit" << endl;
				int ch2;
				cin >> ch2;
				if (ch2 == 1)
				{
					system("cls");
					continue;
				}
				else
				{
					cout << "EXIT" << endl;
					break;
				}
			}
			else
			{
				cout << "EXIT" << endl;
				break;
			}
		}
		else
		{
			cout << "Incorrect Username or Password" << endl;
			cout << "Press 1 to try again" << endl;
			cout << "Press any other key to exit" << endl;
			int ch2;
			cin >> ch2;
			if (ch2 == 1)
			{
				system("cls");
				continue;
			}
			else
			{
				cout << "EXIT" << endl;
				break;
			}
		}
	}
	system("pause");
	return 0;
}