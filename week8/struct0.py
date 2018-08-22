from cs50 import get_string
from student import Student

students = []
dorms = []

for i in range(3):
    name = get_string("Name: ")
    dorm = get_string("Dorm: ")
    s = Student(name, dorm)
    students.append(name)
    dorms.append(dorm)
