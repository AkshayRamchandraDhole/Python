class CricketPlayer:

    def __init__(self,Name,food):
        self.Name=Name
        self.food=food
        print(self.Name,":",self.food)
obj1 = CricketPlayer("Rohit","PooranPoli")
obj2 = CricketPlayer("Rohit","Misal")
print(id(obj1.Name),",",id(obj1.food))
print(id(obj2.Name),",",id(obj2.food))
