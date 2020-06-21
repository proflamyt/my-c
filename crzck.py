from sys import argv
import _crypt
alphabeth =  'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ'

if argv != 1:
    print("error")

for leta in alphabeth:
        for let in alphabeth:
            for l in alphabeth:
                for letters in alphabeth:
                    for letter in alphabeth:
                        password = leta+let+l+letters+letter
                        salt = password[0:2]
                        ola = crypt.crypt(password,salt)
                        if ola == argv[1]:
                            print("eureka")


