// Console_250120.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

// 한줄 주석
/*
    다중 주석
    1. 이곳은 여러줄 주석
*/
#include <iostream>
/*
    #include를 통해서 다른 소스파일의 내용을 불러올 수 있다.
    iostream = input output stream
    #include와 같은 import head는 소스파일의 상단에 위치
*/

/* 
    C++프로그래밍 언어가 가지는 특징
    1) cpp파일은 대소문자를 정확하게 구분한다.
        (main, Main, mAin 모두 다른 것)
    2) 띄어쓰기로 요소를 구분한다. 
        ex) int num = 3;
        intnum=3 -> 이거 자체를 하나로 인식
    3) 실행문의 끝에 [세미콜론]으로 마무리한다;
    4) 모든 C++ 프로그램은 최소 1개의 main()함수를 가진다.
*/
using namespace std;

int main()
{
    #pragma region 250120
//    /*std::*/cout << "Hello World!\n";
//
//    int a;
//    /*std::*/cin >> a;
//    /*std::*/cout << a << endl;
//
//    cout << "김가희 학생의 나이는 " << 25 << "살이다." << endl;

    // 변수 : 값을 저장하는 메모리 공간에 이름을 붙여서 저장
    // 1) 이름   2) 값   3) 메모리 주소   4) 크기

    //int age = 25;
    //cout << "1. 원래 나이 : " << age << endl;
    //cin >> age;
    //cout << "2. 바뀐 나이 : " << age << endl;

    /*
        변수 이름 규칙
        1) C++에서 사용하는 키워드들은 변수 이름으로 사용할 수 없다.
        2) 알파벳, 숫자, _ 로만 구성할 수 있다.
            2-1) 숫자로 시작할 수는 없다.
            int num_1 -> (O)
            int 1num -> (X)
            int _1num -> (O)
        3) 대소문자 구분이 된다.
            myAge, myage 서로 다름
        4) 이름 사이에 띄어쓰기를 넣을 수 없다.
            int myAge; (O)
            int my age; (X)
            int my_Age; (O)
        5) 
    */

    /*
        데이터 타입 = 변수가 가지는 데이터의 형태, "자료형", 메모리의 크기를 결정.
        타입의 종류 = 정수형(int), 실수형(float), 문자형(char), 문자열(string), Boolean(bool)

        1) 정수형
            int         4byte   (약 -21억 ~ 21억)
            long long   8byte   (약 -922경 ~ 922경)
            short       2byte   (약 -32.768 ~ 32.767)
            __int8      8bit(1byte)
            __int16     2byte
            __int32     4byte
            __int64     8byte

            unsigned int 4byte (0 ~ 42억)

        2) 실수형
            float       4byte   소수점 이하 7자리까지 표현
            double      8byte   소수점 이하 15자리까지 표현
            long double 16byte

        3) 문자형
            char        1byte   1개의 문자를 표현(알파벳기준) 'a'

        4) 문자열
            string      입력에 따라 크기 달라짐

        5) Boolean 타입
            bool        1byte   0 or 1 (false or true)
    */

 /*   cout << "int 변수의 크기는 " << sizeof(int) << " Byte이다." << endl;
    cout << "long long 변수의 크기는 " << sizeof(long long) << " Byte이다." << endl;
    cout << "float 변수의 크기는 " << sizeof(float) << " Byte이다." << endl;
    cout << "double 변수의 크기는 " << sizeof(double) << " Byte이다." << endl;
    cout << "bool 변수의 크기는 " << sizeof(bool) << " Byte이다." << endl;
  */
    #pragma endregion
    #pragma region 250121
    /*
        상수
            : 메모리 공간에 저장되지만, 변경이 불가능한 데이터를 상수라고 한다.
            어떤 상수는 변수와 같이 이름을 붙일 수 있다.
            const 키워드를 사용한다.

        코드의 가독성을 높이기 위한 방법
        1) 들여쓰기를 정확하게 활용하자
        2) 변수의 선언과 초기화는 코드 묶음의 맨 앞에 모아둔다.
        3) 변수, 함수, 네이밍 규칙을 통일하자 
            - 헝가리안 표기법
                변수명 앞에 변수 타입을 표기하는 약어를 붙인다.
                ex) int nPlayerCount, float fMyWeight
            - 카멜 표기법
                a) 가급적 두 단어 이상으로 이름을 구성한다.
                    ex) int playerCount, float myWeight, bool isAlive
                b) bool 타입의 경우는 동사 + 명사, 동사 + 형용사, 형용사 + 명사
                    ex) isAlive, hasHair, isPretty, eatMeal
                c) 상수는 무조건 대문자로, 가능하면 두 단어 이상으로 구성
                    ex) const int MAX_HP, const float MIN_MOVE_SPEED
                d) 함수, 구조체, 클래스 등의 이름은 첫 단어의 첫 글자를 대문자로 표기하자
                    ex) int GetTime(), class Monster()
                
        연산자
        데이터를 가공하는 모든 명령에 필요한 코드
        1) 어떤 종류의 연산자들이 있는지
        2) 우선 순위 : 어떤 순서로 연산이 되는지
        3) 결합 순서 : 좌측ㅂ터 연산하는 연산자, 우측부터 연산하는 연산자
        
        1. 사칙연산 : 산술연산자 (좌측부터 연산)
            + : 더한기
            - : 뺴기
            * : 곱하기
            / : 나누기
            % : 나머지
            *, /, % > +, -
        
            3 + 5 - 7

        2. 대입연산자 (우측부터 연산)
            = : 왼쪽 항에 오른쪽 항의 값을 넣어준다. (대입한다)
            ex) int num = 3 + 2 / 8;

        3. 복합대입연산자
            a = a + b    ->      a += b;
            변수에 (-)연산자를 앞에 붙여서 부호를 바꿀 수 있다.
            int num = 3;
            -num;     ->     -3

        4. 증감연산자
            특정 변수의 값을 1씩 증가시키거나 감소시킬 때, 
            ex) int num = 3; num++ -> 4

        5. 관계연산자
            두 값을 비교한 결과가 참인지 거짓인지
    */

    /*
        실습 : 고객의 나이를 입력받아서 미성년자이면(19살 이하) false 성인이면 true
        주민등록 발급대상인지 (20살만) 확인해서 true, false 출력
        + 아홉수 (1의 자리가 9인지 true false 출력)
    */
    //int age;
    //cout << "나이를 입력하세요 : ";
    //cin >> age;
    //cout << "성인 : " << boolalpha << (age > 19) << endl;
    //cout << "주민등록 발급 대상 여부 : " << boolalpha << (age == 20) << endl;
    //cout << "아홉수 : " << boolalpha << (age % 10 == 9) << endl;
    
    /*
        난수 (랜덤값)
        rand() : 랜덤한 정수값이 리턴된다.
        0 ~ 32767 사이의 정수 값

    *//*
    srand(time(NULL));
    cout << rand();*/
    /*
        프로그램을 실행하면 프로그램이 1 ~ 10 사이의 숫자를 임의(랜덤)로 지정한다.
        유저는 1 ~ 10 사이의 숫자를 입력하여
        맞으면 true, 틀리면 false를 출력한다.
    */

    #pragma endregion
    #pragma region 250123
    /*
        6. 논리연산자
        왼쪽 항과 오른쪽 항의 값을 각각 참과 거짓으로 연산해서
        두 값을 비교해서 참과 거짓을 반환하는 연산자

        && : 논리곱 (AND)
            a && b : a의 결과값이 참이고 b의 결과값도 참일 때, 참(1)을 반환

        || : 논리합 (OR)
            a || b : a의 결과값이 참이거나 b의 결과값이 참일 때, 참(1)을 반환

        ! : 논리부정 (NOT)
            !a: a의 결과값이 참이면 거짓을, 거짓이면 참을 반환

        ? : 삼항연산자 (IF)
            a ? b : c | a의 결과값이 참일 때는 b를 반환, 거짓이면 c를 반환
    */
    //srand(time(NULL));
    //int correctNum = rand() % 10 + 1;
    //int inputNum;
    //cout << "정답을 입력하세요 : ";
    //cin >> inputNum;
    //cout << (
    //    (inputNum == correctNum) ? "정답입니다!" :
    //    (inputNum > correctNum) ? "정답이 더 작습니다." : "정답이 더 큽니다."
    //);
    //cout << endl << "정답은: " << correctNum << endl;

    /*
        제어문  데이터타입 / 연산자 / 제어구조
        1) 조건문 (분기제어) : 특정 조건에 따라 실행문을 실행할지 안 할지 제어
            if / switch
        2) 반복문 (반복제어) : 특정 조건에 따라 실행문을 일정 횟수만큼 반복하도록 제어
            while / for

        조건문
            1-1) if
                if (조건식 1) 
                { 
                    실행문;
                }
                else if (조건식 2)
                {
                    실행문_2;
                }
                else 
                {
                    default_실행문;
                }
            1-2) switch
                switch (정수형 변수)
                {
                    case 값1:
                        실행문_1;
                        break;
                    case 값2:
                        실행문_2;
                        break;
                    default:
                        실행문_3;
                        break;
                }
    */

    /*
        실습. 정수를 하나 입력 받아서
        10보다 크면 "입력한 숫자가 10보다 큽니다"
        10 이하 9 초과이면 "9보다 큽니다"
        9 이상 6 초과이면 "6보다 큽니다"
        그 이외에는 "6보다 작습니다"
    */
    //int inputNum;
    //cout << "정수를 입력하세요 : ";
    //cin >> inputNum;
    //if (inputNum > 10) {
    //    cout << "입력한 숫자가 10 보다 큽니다." << endl;
    //}
    //else if (inputNum > 9) {
    //    cout << "9 보다 큽니다." << endl;
    //}
    //else if (inputNum > 6) {
    //    cout << "6 보다 큽니다." << endl;
    //}
    //else {
    //    cout << "6 보다 작습니다." << endl;
    //}

    /*
        실습. 정수를 입력받아 다음과 같이 출력하는 프로그램을 작성하세요.
        - 입력된 숫자가 10이면 : "Hello, World!"
        - 입력된 숫자가 20이면 : "Nice to Meet you~"
        - 그 외 : "Bye~!!"
    */
    //int inputNum;
    //cout << "정수를 입력하세요 : ";
    //cin >> inputNum;
    //switch (inputNum)
    //{
    //    case 10:
    //        cout << "Hello, World!" << endl;
    //        break;
    //    case 20:
    //        cout << "Nice to Meet you~" << endl;
    //        break;
    //    default:
    //        cout << "Bye~!!" << endl;
    //        break;
    //}
    
    /*
        반복문 
            2-1) while
                while (조건식)
                {
                    실행문;
                    if (종료 조건) { break; }
                }
                do {
                    실행문;
                } while (조건식);

            2-2) for
                for (초기값; 조건식; 증감식)
                {
                    실행문;
                }
    */

    /*
        실습. 10보터 1까지 차례대로 출력하는 코드
        100 미만의 3의 배수를 차례대로 출력하는 코드
        1000 미만의 2의 승수를 차례대로 출력하는 코드
    */
    // 1
    int num = 10;
    while (num > 0)
    {
        cout << num << endl;
        num--;
    }
    cout << endl << endl;

    // 2
    num = 1;
    while (num < 100)
    {
        if (num % 3 == 0) cout << num << endl;
        num++;
    }
    cout << endl << endl;

    // 3
    num = 2;
    while (true)
    {
        if (num < 1000) cout << num << endl;
        else break;
        num *= 2;
    }

    #pragma endregion
}