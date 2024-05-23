def min():
    decimal = 33
    # result = ''
    # while (decimal > 0):
    #     remainder = decimal % 2        
    #     decimal = decimal // 2
    #     result = str(remainder) + result
    result = bin(decimal)
    binary = 0b10001
    hexa = 0xAf
    print(result)
    print(binary)
    print(hexa)
    
if __name__ == "__main__":
    min()