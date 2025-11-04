r = int(input('What is your pay rate?: '))


h = int(input('How hours did you work?: '))


if h > 40:
    p = (h-40)*(r/2)+(40*r)
   
else:
    p = 40*r
  

print('You worked', h,',your pay rate is', r, '.Your salary is', p)

