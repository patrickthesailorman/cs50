from cs50 import get_string

s = get_string("name: ")
initials = ""
for c in s:
    if c.isupper():
        append c to initials
print(initials)
