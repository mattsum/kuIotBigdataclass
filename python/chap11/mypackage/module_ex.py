import fah_converter
from fah_converter import conver_c_to_f
import time
import random
import urllib.request

def main():
    celsius = float(input("섭씨 온도를 넣으시오! : "))
    fah = fah_converter.conver_c_to_f(celsius)
    print(f"섭씨 온도는 {celsius} 입니다.")
    print(f"화씨 온도는 {fah} 입니다.")
    print(random.randint(1,100))
    print(random.random)
    print(urllib.request.urlopen("http://www.google.com").read())


if __name__ == " __main__"
    main()