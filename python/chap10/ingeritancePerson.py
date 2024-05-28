class Person:
    def __init__(self, name, age, gender):
        self.name = name
        self.age = age
        self.gender = gender

    def about_me(self):
        print(f"쟈는 {self.gender}이고 이름은 {self.name}이고, 제나이는 {self.age}살 입니다.")

class Employee(Person):
    def __init__(self, name, age, gender, salary, hire_date):
        super().__init__(name, age, gender)
        self.salary = salary
        self.hire_date = hire_date
    def do_wrok(self):
        print("열심히 일을 합니다")

    def about_me(self):
        return super().about_me() + f"숙금는 {self.salary}초로 {self.hire_date}를 수행합니다." 
    

def main():
    choi = Person("박대표", 60, "할아버지")
    choi.about_me()
    choi = Employee("박대표", 60, "할아버지", 5000, "2022.01.01")
    choi.about_me()

if __name__ == "__main__":
    main()