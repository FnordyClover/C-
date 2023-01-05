/*
 * Main.cpp
 *
 *  Created on: Dec 15, 2022
 *      Author: JoshuaBochelen
 */

#include "roster.h"


int main() {

	/*Print out my information*/
	cout << "Course: C867 Scripting and Programming - Applications\n" << "Programming Language: C++\n" << "Student ID: 010394036\n" << "Name: Joshua Bochelen" << std::endl << std::endl;

	/*String data to parse*/
	const string studentData[] = {
			"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
			"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
			"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
			"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
			/*Modified to include my personal information (Part A)*/
			"A5,Joshua,Bochelen,Jbochele@wgu.edu,24,12,10,2,SOFTWARE"
	};

	const int DataTable = 5;

	/*Creates instance of Roster class*/
	Roster classRoster;

	/*Adds each student to roster*/
	for (int i = 0; i < DataTable; i++) classRoster.parse(studentData[i]);
	cout << "All students:" << std::endl;
	classRoster.printAll();
	cout << std::endl;


	/*Software Students printed out*/
	cout << "Software Students:" << std::endl;
	classRoster.printByDegreeProgram(DegreeProgram::SOFTWARE);
	cout << std::endl;

	/*Display invalid emails*/
	cout << "Invalid Emails:" << std::endl;
	classRoster.printInvalidEmails();
	cout << std::endl;

	/*Average number of days for course completion*/
	cout << "Average Days in Course:" << std::endl;
	for (int i = 0; i < DataTable; i++) {
		classRoster.printAverageDaysInCourse(classRoster.classRosterArray[i]->getstudentID());
	}
	cout << std::endl;

	/*remove student A3 and print remaining*/
	cout << "Removing student..." << std::endl;
	classRoster.remove("A3");
	cout << std::endl;

	/*Print error that student is not found*/
	cout << "Removing student..." << std::endl;
	classRoster.remove("A3");
	cout << std::endl;

	system("pause");
	return 0;
}



