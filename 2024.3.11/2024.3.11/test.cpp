//��̳У��̳ж����
class Person
{
};
class Teacher :virtual Person
{
public:
	Teacher();
};

class Student :virtual Person//��̳У�������ֻ��һ���丸������
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