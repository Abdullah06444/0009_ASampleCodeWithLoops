counter = 0
sum = 0

while True:

    inputNumber = input()  # Integer input

    try:
        number = int(inputNumber)
        isPrime = True
        canDivideby10 = False

        if number%10 == 0:
            canDivideby10 = True
        else:
            if number < 2:
                isPrime = False
            else:
                if number/2 >= 2:
                    for i in range (2,int(number/2+1)):
                        if number%i == 0:
                            isPrime = False
                            break

        if canDivideby10 == False and isPrime == False:
            sum += number**2
        counter += 1

    # print("number:", number, " counter:", counter, " sum:", sum)

    # Integer disinda birsey yazilinca loop durdur
    except ValueError:
        break

print(counter,sum)
