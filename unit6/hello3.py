def main():
    print("Welcome to my program!")

    name = input("What is your name? ")
    print(f"Hello, {name}")
    print("Hello again, {}".format(name))

if __name__=="__main__":
    main()