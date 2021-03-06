/*
 * Student.h
 *
 *  Created on: 2018��1��24��
 *      Author: XiaoCase
 */

#ifndef STUDENT_H_
#define STUDENT_H_

#include "AbstractPersonAPI.h"
#include <string>

namespace edu {
namespace neu {
namespace csye6205 {

class Student : public AbstractPersonAPI{
private:
	using AbstractPersonAPI::firstName;
	using AbstractPersonAPI::lastName;
	using AbstractPersonAPI::age;
	double GPA;
public:
	Student();
	Student(std::string _firstName, std::string _lastName, double _age, double _GPA);
	virtual ~Student();
	virtual void info();
	static void demo();

	double getGpa() const {
		return GPA;
	}

	void setGpa(double gpa) {
		GPA = gpa;
	}
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* STUDENT_H_ */
