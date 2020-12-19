# BOJ_algorithm

여러 가지 알고리즘 사이트 문제를 풉니다

---

### 모르면 틀리는 것

- cout << endl : buffer flush 기능때문에 느림 → cout << '\n'
- func(vector) : vector를 매개변수로 넘기면 값을 복사해 넘기기 때문에 느림
  - vector 변수를 전역변수로 선언
  - func(vector &v1)으로 주소 값을 복사하여 넘기기
- cin, cout이 그냥 느린 문제 : 표준 입출력 stream 동기화 때문

  - cin/cout은 입출력 수가 많은 문제에서는 피할 것!!!

  ```cpp
  ios_base::sync_with_stdio(false); // C와 C++ 표준 입출력 stream을 끊음
  // 동기화를 끊으면 사용하는 버퍼 수 감소로 속도 향상
  cin.tie(NULL); // cin을 cout과 untie
  cout.tie(NULL);
  ```

  ```cpp
  std::cout << "Enter : ";
  std::cin >> name;
  // 기존 : cout -> cin 발견 -> output flush(글자출력) -> cin 실행
  // cin.tie(NULL) : cout -> cin 발견 -> cin 실행
  // 출력하고 싶다면 flush 시킨 후 실행해야함.
  // 보통 online judge 시스템에서는 입출력을 나누어 기억해 채점하므로 불편함을 모를 것
  ```

---

### 푼 문제

- 4677 Oil Deposits / 2019-10-07
- 15954 인형들 / 2019-10-10
- 17289 에니그마 / 2019-10-08
- 1018 체스판 다시 칠하기 / 2020-12-05 / 1h 20m
- 1085 직사각형에서 탈출 / 2020-12-07 / 13m
- 1181 단어 정렬 / 2020-12-07 / 1h 27m
- 1259 팰린드롬 수 / 2020-12-12 / 11m
- 1436 영화감독 숌 / 2020-12-12 / 38m
- 1920 수 찾기 / 2020-12-12 / 44m
- 1978 소수 찾기 / 2020-12-12 / 7m
- 2164 카드2 / 2020-12-15 / 5m
- 2609 최대공약수와 최소공배수 / 2020-12-15 / 6m
- 2751 수 정렬하기 2 / 2020-12-15 / 2m
- 9012 괄호 / 2020-12-15 / 12m
- 10250 ACM 호텔 / 2020-12-15 / 9m
- 10814 나이순 정렬 / 2020-12-15 / 13m
- 11050 이항계수1/ 2020-12-19 / 35m

---

### 다시 풀 문제

- 1181 단어 정렬 / 2020-12-07 / 질문 검색
- 10816 숫자카드 2 / 2020-12-19 / 질문 검색

---

### 미제

@5011 Robots on a grid / 2019-10-08 / DFS : timeout, BFS : lack of memory로 틀림

---

### 대회

- 프로그래머스 월간 코드챌린지 시즌1 11월
  - 290등/925명
  - 248.1/400 점
  - 근무 땜에 다 못 풀었다구!

### 다룬 알고리즘

- DP
- upper_bound, lower_bound
- 유클리드 호제법
- 이분탐색
