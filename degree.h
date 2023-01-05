/*
 * Degree.h
 *
 *  Created on: Dec 15, 2022
 *      Author: JoshuaBochelen
 */

#ifndef DEGREE_H_
#define DEGREE_H_

#pragma once
#include <string>

 /*Enumerated data type DegreeProgram for the degree programs*/
enum DegreeProgram {
	SECURITY, NETWORK, SOFTWARE
};

/*Creating strings for each degree program to be used as an index*/
static const std::string DegreeProgramStrings[] = {
	"SECURITY","NETWORK","SOFTWARE"
};

#endif /* DEGREE_H_ */

/*Enumerated data type DegreeProgram containing Security, Network, and Software (Part C)*/