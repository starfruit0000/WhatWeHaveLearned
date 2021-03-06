# C와 C++에서 모두 사용하는 것들

함수 참조:<br>
```C++
C_and_Cpp_both()
```
<br>
<br>
이스케이프 시퀸스: 역슬래시하고 쓰는 것들<br>
    대표적인 예시: \t, \n, \v<br>
    1. \t 예시<br>
    "Tab"을 사용해주는 이스케이프 시퀸스이다.<br>
    <br>
    2. \n 예시<br>
    줄을 바꾸어주는 이스케이프 시퀸스이다.<br>
    Cpp에서의 endl과 같은 용도로 사용된다.<br>
    <br>
## 코드 예시<br>
<br>
    ```C++
    void C_andCpp_both()
    {
        //\t의 경우
        cout << "\" << "t 예시: " << endl;
        cout << "안녕하세요\t저는\t사람입니다." << endl << endl;
        cout << "================" << endl << endl;

        //\n의 경우
        cout << "\" << "n 예시: " << endl;
        cout << "안녕하세요.\n저는\n사람입니다." << endl;
    }
    ```
    <br>
---<br>
<br>
# C에서의 입력<br>
<br>
함수 참조:<br>
```C++
Input_in_C()
```
<br>
<br>
입력:<br>
```C++
scanf("서식문자", 입력받을 내용의 주소값);
```
<br>
출력은 안에 이미 값이 있기 때문에 얼마만큼을(크기) 출력하면 되는가에 대해서 미리 알 수 있다.<br>
<br>
입력을 받을 때에는 유저가 얼마만큼을 입력할지를 가늠할 수가 없다.<br>
    --> 아이디 만들 때: 2글자, 4글자, 5글자, ...(예상 불가)<br>
<br>
---<br>
<br>
# C++에서의 입출력

코드 참조: 함수 ''

# 변수란?

+ 변할 수 있는 수<br>
+ 데이터(data)를 저장할 수 있는 메모리 공간<br>
+ 데이터를 저장하기 위해 프로그램에 의해서, 이름을 할당받은 메모리 공간<br>
+ 변수는 크게 정수형 변수와 실수형 변수로 구분한다.

---

# 변수의 생성

+ __변수의 선언__:  타입(자료형이라고도 함) 변수명;<br>
    --> 예시: 'int Number;'

---

# 타입(자료형이라고도 함)

1. 정수형<br>
    + char(캐릭터): 1byte signed 변수<br>
    + int(integer): 1byte signed 변수<br>
2. 실수형<br>
    + float: 4byte signed 변수<br>
    + double: 8byte signed 변수

---

# 변수명

+ 알아보기 쉽게 짓기<br>
+ 표기법의 종류)<br>
    1. 헝가리안: 변수명 앞에 변수의 자료형을 뜻하는 문자를 붙여서 표기하는 법<br>
        + 정수형: i, n<br>
        + 실수형: f<br>
        + 문자열: sz, str

---

# 변수명 생성 규칙

__*반드시 지켜야 함__<br>
+ 변수 이름은 영어와 언더바(_)로만 구성한다.<br>
+ 숫자는 변수에서 가장 처음에 올 수 있다.<br>
    - 예시: \`1Number\` __(X)__, \`Number1\` __(O)__<br>
+ 공백 불가<br>
    - 예시:<br>
        \`Player Name\` __(X)__<br>
        \`Player_Name\` __(O)__<br>
+ 예약어는 사용 불가능하다<br>
    - 예시:<br>
        \`int struct\` __(X)__<br>
+ 변수명 길이에는 제한이 없다.<br>
+ 선언하고자 하는 변수의 타입(자료형)이 같다면, 한 번에 묶어서 복수의 변수를 선언할 수도 있다.<br>
    - 예시:<br>
        __1)__<br>
        ```C++
        int a, float b
        ```
        --> __(X)__<br>
        __2)__<br>
        ```C++
        int a, b;
        ```
        --> __(O)__<br>

+ 선언과 동시에 초기화할 수 있다.<br>
    - 예시:<br>
        ```C++
        int a;  a = 0;
        ```
        <br>
        --> __(X)__<br>
        ```C++
        int a, b;
        ```
        __(O)__<br>
        위의 두 개는 같은 것이다.<br>
+ 복수 선언했을 때<br>
    ```C++
    int a = 0, b = 0;
    ```
    <br>위와 같이 복수 선언을 한 경우에도 동시에 초기화가 가능하다.

---

# 상수

+ 변수와 똑같이, 데이터를 저장할 수 있는 메모리 공간.<br>
+ 데이터를 저장하기 위해 프로그램에 의해서, 이름을(받을 수도 있고 아닐 수도 있기 때문) 할당받은 메모리 공간.

+ 상수의 종류<br>
    리터럴 상수: 이름을 할당받지 않는 함수<br>
+ 흔히 알고 있는 개념: 1, 2, 3, 4, 5, ...<br>
+ 정해진 정해진 숫자들이 리터럴 상수<br>
    심볼릭 상수: 여름을 할당받는 상수<br>
+ define 상수, const 상수<br>
    \* define 상수: 전역 상수<br>
        표기법:<br>
            \#define 상수명 상수값<br>
            --> define 상수에는 ";"를 붙이지 않는다.<br>
    \* const 상수: 전역, 지역, 정적 상수<br>
        표기법:<br>
            const 타입(자료형) 상수명 = 상수

---

# 캐스팅(형변환)

---

# 연산자

+ 산술연산자<br>
    - \+: 더하기: 왼쪽의 피연산자에 오른쪽의 피연산자를 더함<br>
        a \= a \+ 1<br>
    - \-: 빼기: 왼쪽의 피연산자에서 오른쪽의 피연산자를 뺌<br>
    - \*: 곱하기: 왼쪽의 피연산자에 오른쪽의 피연산자를 곱합<br>
    - \/: 나누기: 왼쪽의 피연산자를 오른쪽의 피연산자로 나눔<br>
    - \%: 나머지: 왼쪽의 피연산자를 오른쪽의 피연산자로 나눈 다음 나머지를 반환<br>
+ 증감연산자<br>
    - '++'<br>
    - '--'<br>
    - 증감 연산자는 '++a', 'a++'의 형태로 사용 가능.<br>
        'a++ = a + 1;'<br>
        ''++a = (a + 1);'<br>
        <br>
        '10 * 1-- = 9'<br>
        '10 * --1 = 0'<br>
        <br>
+ 논리연산자<br>
    - '&&' = and  --> 논리식이 모두 참이면 참을 반환함<br>
    - '||' = or   --> 논리식 중에서 하나라도 참이면 참을 반환함<br>
    - '! ' = not  --> 논리식의 결과가 참이면 거짓을, 거짓이면 참을 반환함<br>
+ 대입연산자<br>
    - '=' : 왼쪽의 피연산자에 오른쪽의 피연산자를 대입함<br>
    - '+=' : 왼쪽의 피연산자에 오른쪽의 피연산자를 더한 후, 그 결과를 왼쪽의 피연산자에 대입함<br>
    - '-=' :<br>
    - '/=' :<br>
    - '%=' :<br>
+ 비교연산자<br>
