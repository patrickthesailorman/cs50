import cs50

def main():
    i = get_positive_int("positive integer, please: ")
    print(i)

def get_positive_int(prompt):
    while True:
        n = cs50.get_int(prompt)
        if n >= 1:
            break
        return n

if __name__ == "__main__":
    main()