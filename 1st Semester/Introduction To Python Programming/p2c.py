def generate_n_chars(character,number_of_times):
    print(f"It will look like this: {character*number_of_times}")

c = input("Enter the character: ")
n = int(input("Enter the number of times to repeat the character to make it into a string of n characters: "))

generate_n_chars(c,n)