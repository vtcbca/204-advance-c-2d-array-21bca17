n=int(input("enter any number"))
for i in range(1,9):
    if(n%i==0):
        print("{} is divisibal by {}",format(n,i))
