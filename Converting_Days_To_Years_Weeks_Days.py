
Num=int(input("Enter No Days:"))

Years=Num//365
Num=Num%365
Weeks=Num//7
Days=Num%7

print(Years,":",Weeks,":",Days)
