from cs50 import get_int

def main():
    i = get_positive_int("positive integer, please: ")
    print(i)

def get_positive_int(prompt):
    while True:
        n = get_int(prompt)
        if n >= 1:
            break

if __name__ == "__main__":
    main()