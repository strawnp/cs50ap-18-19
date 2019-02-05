import cs50

def main():
    print("Welcome to my program!")

    age = input("What is your age? ")
    print(f"You will be {age + 1} years old on your next birthday!")

    age = cs50.get_int("What is your age? ")
    print(f"You will be {age + 1} years old on your next birthday!")


if __name__=="__main__":
    main()