# 2부터 100까지의 소수 구하기
# i가 2부터 1씩 증가하며 100이 될 때까지 반복하며 각 i 값이 소수인지 판별합니다.
#
# 소수를 판별하는 방법은 예제 29에서 살펴보았습니다.
#
# 아래 실행 결과와 같은 값을 출력하세요.

# 예제34
for i in range(2,101):
    chk = 1
    for j in range(2, i):
        if i % j == 0:
            chk = 0
            break
    if chk == 1:
        print(i, end=" ")