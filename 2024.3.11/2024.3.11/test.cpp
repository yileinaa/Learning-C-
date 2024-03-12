//多继承，继承多个类
class Person
{
};
class Teacher :virtual Person
{
public:
	Teacher();
};

class Student :virtual Person//虚继承，其子类只有一份其父类属性
{
public:
	Student();
};
class StudentTeacher :Teacher, Student
{
	StudentTeacher();
};
StudentTeacher::StudentTeacher() : Teacher(), Student()
{
	;
}