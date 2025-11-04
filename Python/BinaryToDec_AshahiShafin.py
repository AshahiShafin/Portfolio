while True:
    print("Enter 'e' for exit: ")
    binary = input('Enter a binary number to be convert to decimal: ')
    if binary == 'e':
        break
    else:
        decimal = int(binary, 2)
        print(binary,'in decimal = ',decimal, )
