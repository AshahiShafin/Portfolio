x = input('What is your name: ')

s = input('What is your social security number: ')

cl = int(input('How many classes: '))

c = int(input('How many credits are you taking: '))
if c < 12:
    t = (c * 450) + 100
    ac = 100
else:
    t = 5000 + 200
    ac = 200
if c < 12:
    print("Part time")
else:
    print("Full time")
    


print('The student', x,',social security is', s, '.Studnet is taking', c,'amount of credits and',cl,'classes''.The tuion cost will be :$',t,'and addtional cost is :$',ac)
