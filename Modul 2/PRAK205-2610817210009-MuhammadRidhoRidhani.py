import math
Tinggi=float(input(""))
Miring=float(input(""))
Alas=math.sqrt(Miring*Miring-Tinggi*Tinggi)
Keliling=Alas+Tinggi+Miring
Luas=(Alas*Tinggi)/2
print("Alas = %d cm" % Alas)
print("Tinggi = %d cm" % Tinggi)
print("Keliling = %d cm" % Keliling)
print("Luas = %d cm^2" % Luas)