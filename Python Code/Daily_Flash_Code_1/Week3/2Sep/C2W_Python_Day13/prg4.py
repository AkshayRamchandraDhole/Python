'''181, 191, 313, 353, 373'''
'''
These are palindrome numbers between 181(inclusive) & 373(inclusive) which are also prime, these are called
prime palindromes
'''
def isPrime(n) :

    for i in range(2, int(n / 2 + 1)) :

        if n % i == 0 :
            return False

    return True

def isPalindrome(n) :

    if str(n) == str(n)[: : -1] :
        return True

    else :
        return False

for i in range(181, 374):

    if isPalindrome(i) and isPrime(i):
        print(i, end = " ")

print()
