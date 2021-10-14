class c2dVec:
    def __init__(self,i,j):
        self.i=i
        self.j=j
    def __str__(self):
        return f"{self.i}i + {self.j}j"
class c3dVec(c2dVec):
    def __init__(self,i,j,k):
        # self.i=i
        # self.j=j
        super().__init__(i,j)
        self.k=k
    def __str__(self):
        return f"{self.i}i + {self.j}j + {self.k}k"
v2d=c2dVec(1,2)
v3d=c3dVec(1,9,7)
print(v2d)
print(v3d)