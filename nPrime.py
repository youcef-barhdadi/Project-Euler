


primeNumber = []


## check if the number is primer
def isPrime(num) :
    isPr = True
    i=2
    while  i < num :
        if num % i == 0:
            isPr =False
            break
        i+=1
    return isPr
    


## get n'th  number
def getNthPrime(n) :
    i=2
    list =[]
    while len(list)<n :
        if(isPrime(i)) :
            list.append(i)
        i+=1
    return list.pop()

##display to  the value
print(getprimeNumbers(147))

