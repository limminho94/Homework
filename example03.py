# 두 수를 입력받아 변수에 저장하고, 두 수를 나눈 몫을 구하는 연산자인 //과 나머지를 구하는 연산자인 %를 이용해서 두 수의 몫과 나머지를 구하여 출력한다. /는 나누기 연산자이고 //는 나눈 몫을 구하는 연산자이다.
a = input()   # 입력받은 값 5를 변수 a에 저장
b = input()   # 입력받은 값 3을 변수 b에 저장
a = int(a)    # 문자열 변수 "5"를 숫자형 변수 5로 변환 후 변수 a에 저장
b = int(b)    # 문자열 변수 "3"을 숫자형 변수 3으로 변환 후 변수 b에 저장
print(a // b) # 두 변수의 몫 값을 출력
print(a % b)  # 두 변수의 나머지 값을 출력