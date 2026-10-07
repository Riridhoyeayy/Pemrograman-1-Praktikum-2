number=int(input())

if number<1:
    print ("Nol")
elif number>=1 and number<=9:
    print ("Satuan")
elif number>=10 and number<=19:
    print ("Belasan")
elif number>=20 and number<=99:
    print ("Puluhan")
else:
    print ("Anda Menginput Melebihi Limit Bilangan")