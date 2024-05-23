def min():
    myage = int(input("나이를 알려주세요:  "))
    if (myage > 30) and (myage < 50):
        print("클럽에 가입 되었습니다.")
    else:
        print("아니오 클럽에 들어올 수 없습니다.")

    score = int (input ( "점수를 넣으시요 : "))
    if score >= 90:
        grade = 'a'
    elif score >= 80:
        grade = 'b'
    elif score >= 70:
        grade = 'c'
    elif score >= 60:
        grade = 'd'
    else:
        grade = 'f'
    print(grade)

    # if True:
    #     print("참")
    # if False:
    #     print("거짓")
    # if 0.0001:
    #     print("참")
    # if "":
    #     print("거짓")
    # if None:
    #     print("참")
    
if __name__ == "__main__":
    min()