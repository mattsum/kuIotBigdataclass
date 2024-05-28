class SoccerPlayer:
    def __init__(self, name, position, age):
        self.name = name
        # player1.name = '최수길'
        # player2.name = '박대표'
        self.posiition = position
        self.age = age
        # int _age
    def change_age(self, age = 10):
        self.age = age
        # this -> _age = age 
    def __str__(self):
        return f"Hello, my name is {self.name}, I'm {self.age} year old, I'm from {self.posiition}."
def main():
    player1 = SoccerPlayer('최수길',"미드필더",40)
    player2 = SoccerPlayer('박대표',"골키퍼",50)
    print(player1.name)
    print(player2.name)
    print(player1.posiition)
    print(player1.age)
    player1.change_age()
    print(player1.age)
    player1.change_age(20)
    print(player1.__str__())
    print(player1)
if __name__ == '__main__':
    main()