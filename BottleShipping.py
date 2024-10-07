def BottleShip(bottles):
    carton_size= {"xl": 48, "large": 24, "medium": 12, "small": 6}
    carton_used = {"xl": 0, "large": 0, "medium": 0, "small": 0}
    for carton_type, numbers in carton_size.items():
        carton_used[carton_type] = bottles // numbers
        bottles %= numbers
    if bottles > 0:
        carton_used["small"] += 1
        
    capacity=[]
    for carton_type, numbers in carton_used.items():
        if numbers> 0:
            capacity.append(f"{numbers} {carton_type}")
    print(','.join(capacity))
bottles = int(input("Enter No. of bottles to be shipped: "))
BottleShip(bottles)
