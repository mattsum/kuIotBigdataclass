def min():
    # 색상 리스트와 숫자 리스트를 초기화합니다.
    colors = ["red", "green", "blue", "purple", "yellow", "black"] 
    number = [12, 25, 71, 3.14, 7.8235]

    # colors 리스트를 출력합니다.
    print(colors)  # 출력: ['red', 'green', 'blue', 'purple', 'yellow', 'black']
    
    # 주석처리된 부분으로, 특정 인덱스의 요소를 출력하는 코드입니다.
    # print(colors[1])  # 'green'을 출력합니다.
    # print(colors[2])  # 'blue'를 출력합니다.
    # print(colors[0])  # 'red'를 출력합니다.
    
    # colors 리스트의 각 요소를 반복하여 출력합니다.
    for c in colors:
        print(c)
    
    # colors 리스트의 길이를 출력합니다.
    print(len(colors))  # 출력: 6
    
    # 리스트 슬라이싱 및 출력 예시 (주석처리됨).
    # print(colors[5:8])  # 인덱스 5부터 7까지의 요소를 출력합니다.
    # print(colors[5:8:2])  # 인덱스 5부터 7까지 2칸씩 건너뛰며 요소를 출력합니다.
    # print(colors[0:11:2])  # 인덱스 0부터 10까지 2칸씩 건너뛰며 요소를 출력합니다.
    # print(colors[::2])  # 처음부터 끝까지 2칸씩 건너뛰며 요소를 출력합니다.
    # print(colors[::-1])  # 리스트를 거꾸로 출력합니다.
    # print(colors[13])  # 인덱스 13의 요소를 출력하려고 시도합니다 (IndexError 발생).

    # 두 리스트를 합쳐 새로운 리스트를 만듭니다.
    total_list = colors + number
    # colors 리스트에 number 리스트의 요소들을 추가합니다.
    colors.extend(number)
    # colors 리스트의 맨 앞에 'orange'를 삽입합니다.
    colors.insert(0, "orange")
    
    # 리스트에 'white'가 포함되어 있는지 확인합니다.
    print("white" in colors)  # 출력: False (현재는 'white'가 리스트에 없습니다)
    
    # colors 리스트의 맨 끝에 'white'를 추가합니다.
    colors.append("white")
    
    # colors 리스트를 두 번 반복합니다.
    colors = colors * 2
    
    # colors 리스트에서 첫 번째 'white' 요소를 제거합니다.
    colors.remove("white")
    
    # colors 리스트에서 두 번째 'white' 요소를 제거합니다.
    colors.remove("white")
    
    # 주석처리된 코드 (colors 리스트를 두 번 반복).
    # colors = colors * 2
    
    # total_list를 출력합니다.
    print(total_list)  # 출력: ['red', 'green', 'blue', 'purple', 'yellow', 'black', 12, 25, 71, 3.14, 7.8235]
    
    # colors 리스트를 삭제합니다.
    del colors[-1]
    
    # colors 리스트가 삭제되었으므로, 이 줄은 에러를 발생시킵니다.
    print(colors)  # NameError 발생: 'colors'가 정의되지 않았습니다.
    
    # 주석처리된 코드 (삭제된 리스트에서 요소를 검색하려고 시도).
    # print("white" in colors)  # NameError 발생: 'colors'가 정의되지 않았습니다.

    print("white" in colors)

    colors.append(number)  #type: ignore
    print(colors)
    colors.remove(number)  #type: ignore
    print(colors)
    print(number)
    colors.append(number)
    print(colors)
    del colors[0] #type: ignore
    number.append(123)
    print(colors)
    print(number)
    #print(number)

if __name__ == "__main__":
    min()
