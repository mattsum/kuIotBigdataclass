# kuIotBigdataclass
C/C++ database, arduino, rasberrypi, Iot class.... AVR
데이터베이스 수업 리드미 작성 시작 
-----------------------------------------------------------------------------------------------------------------------------------
## 2024-02-22
-----------------------------------------------------------------------------------------------------------------------------------
- Instruction.
- google slide share link.
- github sign up.
- github create repository.
- ubuntu hangul setting.
- VsCode install.
- git install.
```shell

- sql workbench install - windows
- MySQL DBMS install - windows
- sql workbench install - ubuntu
- MySQL DBMS install - ubuntu
- vscode mysql extension install
- Chapter01 데이터베이스 개론
- Chapter03 SQL 기초
    - 데이터베이스 만들기 create database;
    - 데이터베이스에 테이블 만들기3개
        - bookid
        - bookname
        - publisher
        - price
    - 데이터베이스에 데이터 넣기 insert into ... values (...)
    - 유저 만들어서 권한 설정하기;
        - grant all privileges on *.* to 'root'@localhost' identified by '1234';
    - windows cli에서 testDB 생성하기
sudo apt-get install git
git clone https://github.com/mattsum/kulotBigdataclass.git
```
-...
-----------------------------------------------------------------------------------------------------------------------------------
## 2024-02-23
-----------------------------------------------------------------------------------------------------------------------------------
    - my ubuntu 문제 해결
    - 유저를 새로만들어서 권한을 주어 봤지만 해결되지 않음.
    - 권한설정 및 user create 시
        'ALTER USER 'root@localhost; Identified with mysql_native_password By '0000';, 명령어
    - 추가한파일
        - create_database.sql
        - create_data.sql
        - create_user.sql
        - insert_data.sql
        - select1.sql
        - 파일을 한번에 저장했었는데, 제대로 저장 된건지 잘 모르겠음.
        - 어제 한 데이터에서 책 133-159 마지막 'DESC' 까지 실습을 함.
    - 3자 내용 추가
        - 셀렉트 쓰는 방법
    - 2장 데이터베이스 모델 진행
        - 릴레이션의 개념 스키마&인스턴스
            -릴래이션용어 CREATE TABLE, INSERT, DELETE, UPDATE, SELECT
        - 무결성 제약조건 (키)
            - 슈퍼키 후보키 기본키 대리키 대체키 외래키
        - 관계대수 - 연산자 관계대수식 
        - 셀렉션과 프로젝션
        - 집합연산
            - 합집합, 교집합, 차집합, 카티션프로덕트
        - 조인 (세타조인과 동등조인)
            - 자연조인 외부조인과 세미조인
        - 디비전
    - 3장 SQL 기초 _ group by 165p까지 진행
    - 윈도우 DMBS를 우분투에서 연결
        - 윈도우 DBMS에 외부 IP; 접근 가능한 user 생성
        - 윈도우 방화벽에 3306 포트열기
        - 윈도우 DBMS에 임의의 데이터를 넣고 우분투에서 확인
    - 우분투 DBMS를 윈도우에 연결
        - 우분투 DBMS에 외부IP 접근가능한 user 생성
        - 우분투 방화벽에 전체포트열기
        - 우분투 DBMS에 임의이 데이터 넣고 윈도우에서 확인
            - vertualbox 프로그램에서는 windows로 가는 Ping이 진행되지않음 (학생들이 직접확인 하지 못함)
            - VMware 프로그램에서는 windows로 가는 ping 이 잘됨 (프로젝트 화면으로만 보여만 줌)
------------------------------------------------------------------------------------------------------------------------------
## 2024-02-29
------------------------------------------------------------------------------------------------------------------------------
        - 빌드 과정 설명
            - make cmake for linux
            - 전처리 어셈블리 바이너리 링크
        - VS Code Make 파일 하는 방법. 
            - 기본 문법
            - 여러개 명령어 등록
            - 연속 실행
            - 생략가능 명령어
            - 변수 사용
        - 3장 SQL 기초 전체 진행 [너무 어렵다]
            - 데이터 조작어 검색
                - SELECT 문
                - 집계함수와 GROUP BY
                - 두 개 이상의 테이블을 이용한 sql질의
            - 데이터 정의어
                - CREATE ALTER DROP
            - 데이터 조작어
                - INSERT UPDATE DELETE
        
        
        - 4장 SQL 고급 진행
            -SQL 내장함수
-------------------------------------------------------------------------------------------------------------------------
## 2024-03-07
-------------------------------------------------------------------------------------------------------------------------
            -null if null
            - 외래키 확인 및 삭제 방법
            
                - 부족질의
                    - select 부속질의 (스칼라 부속질의)
                    - from 부속질의( 인라인 뷰 )
                    - where 부속질의
                        - 단일 - 비교 ( =, >, <, >=, <=, !=, <>, is null, is not null) [비교]
                        - 다수의 열, 단일 행 ( all, some, any) [한정]
                        - 다수의 행, 다수의 열 (in, not in, exists, not exists) [집합,존재]
                - 뷰 view
                    - 뷰생성 - create view 뷰 이름 as select ...
                    - 뷰삭제 - drop view 뷰 이름
                    - 뷰수정 - create or replace view 뷰이름 as select...
                - 인덱스
                    - 인덱스 생성 - create index 인덱스이름 on 테이블이름(열이름)
                    - 인덱스 삭제 - drop index 인덱스이름 on 테이블이름
                    - 인덱스 재구성 - analyze table 테이블이름
                -숫자함수
                -문자열함수
                -날짜함수
                -format 형식 %Y%m%d 등등 새롭게 표현하는식
        - 갑작스러운? [Quick Test 2024.03.08. 있을예정]
            - 시험범위 1~4장 + 7장 정보화
            - 정보처리기사 올려주신 것 40번~61번 까지 한번  풀어 볼 것.
                - 비전공자들은 정보처리기사 자격증을 취득하는게 기본 - 추천하심
                - 정보처리기사(IT분야에서 전문지식을 검증하는 중요한 자격증)
                    - 2024 정보처리기사 2회 필기시험 원서접수 	2024.04.16.(화) ~ 2024.04.19.(금)
                    - 2024 정보처리기사 3회 필기시험 원서접수 	2024.06.18.(화) ~ 2024.06.21.(금) 
        - 5장 데이터베이스 프로그래밍 시작
            - 1. 데이터베이스 프로그래밍의 개념
                - SQL전용언어를 사용하는 방법
                - 일반프로그래밍언어에 SQL을 삽입하여 사용하는 방법
                - 웹 프로그래밍 언어에 SQL을 삽입하여 사용하는 방법
                - 4GL 4th Generation Language
            - 2. 저장 프로그램의 개념
                - 저장프로그램
                    - 저장루틴은프로시져procedure와 함수function으로 나뉜다.
                        - create procedure (begin - end)로 구성된다.
                            - 삽입작업을하는 프로시져, 제어문을 사용하는 프로시져.
                            - 결과를반환하는 프로시져, 커서를 사용하는 프로시져.
                        - 트리거 (Trigger) - 데이터의변경문이 실행될떄 자동으로 같이 실행되는 프로시져를 말함.
                        - 사용자 정의 함수 (function) - 변수를 쓸때 규칙대로 쓰면 디버깅을 아낄수 있다.
                - 저장프로그램의 문법요약
                    - 데이터정의어 (create table, create procedure, create function, create trigger, drop)
                    - 데이터조작어 (select, insert, delete, update)
                    - 데이터타입 (integer, carchar(n) date)
                    - 변수 (declare문으로 선언, 치환(set,=사용))
                    - 연산자 (산술연산자[+,-,*,/] 비교연산자[=,<,>,>=,<=,<>] 문자열연산자[||] 논리연산자[Not,and,or])
                    - 주석 (--, /* */)
                    - 내장함수 (숫자함수[abs,ceil,floor,power1] 집계함수[avg,count,max,min,sum] 날짜함수[sysdate,date,datname] 문자함수[char,left,lower,substr])
                    - 제어문 (begin-end, if-then-else, while,loop)
                    - 데이터 제어어 (grant, revoke)
            - 마지막 파이썬설치 및 파이썬 make [사실 정신이 없어서 뭐한건지 아직 정확히 모르겠다]
----------------------------------------------------------------------------------------------------------------------------------------------------------------
## 2024-03-08
----------------------------------------------------------------------------------------------------------------------------------------------------------------
            - make 파일 booklist.c make파일만들기 
                - booklist make 
                - C Make 파일 작성후 올바르게 실행되는지 확인
                    - C Make 파일 작성법
                - C Make 파일 작성 후 실행과정에서 sudo apt install cmake.p
                    - C Make 파일 작성후 실행
                - webpage 만들기
                    - webpage pg.309 교과서
        - 6장 데이터 모델링 시작
            - 데이터모델링의 개념
            - ER(ENTITY RELATIONSHIP) - Diagram 표현
                    - 강한개체타입은 직사각형,   약한개체타입은 이중사각형
                    - 단순속성과 복합속성 [묶어서 표현가능]
                    - ISA 관계 
                    - IE 표기법법
            - ER모델을 관계데이터 모델로 사상(mapping)하기
            - Workbench 모델링 실습
                - 도메인 정의하기 실습, 마당서점ERD 만들기 (완성 못 함)
            - Madang 모델링 연습 [시간이 없어서 아주 빠르게 지나감]
        - 7장 정규화 시작
            - 이상현상 Anomoly 테이블설계를 못할시에 발생
                    - 삽입 삭제 수정
            - 함수종속성(FD)
                    - 속성사이에는 의존성이 존재함
                        - 함수종속성 다이어그램, 함수종속성 규칙, 함수 종속성기본키, 이상현상과 결정자, 함수 종속성 예제
            - 정규화 (NORMALIZATION)
                - 제1정규형, 제2정규형, 제3규형, BCNF형 [시간이없어서 코딩없이 교과서위주로만 배움]
                    - 무손실분해
                        - JOIN써서 다시 돌아 올수 있으면 무손실분해, 다시 돌아오지못하면 손실분해
                    - 정규화정리 + 정규화연습[시간이없어서 해보질 못 함]
        - 8장 트랜잭션, 동시성제어, 회복 시작
            - 트랜잭션 - commit문이 트랜잭션의 종료를 알리는 SQL문
            - 트랜잭션의 성질
                -원자성(ATOMICITY), 일관성(CONSISTENCY), 고립성(ISOLATION), 지속성(DURABILITY)
            - 동시성제어
                - 두개를 동시에 쓰게되면 반드시 충돌사고가 일어남.
            - 갱신손실문제
            - 락(LOCK) 
                    - 공유락(LS - SHARED LOCK) 베타락(EXCLUSIVE LOCK)
                    - 2단계 락킹(2 phase locking)
                    - 데드락(중요) - 교착상태 (deadlock)
                        -두 개 이상의 트랜잭션이 각각 자신의 데이터에 대하여 락을 획득하고 
                            상대방 데이터에 대하여 락을 요청하면 무한대기 상태에 빠질수 있음.
            - 트랜잭션 고립수준
-------------------------------------------------------------------------------------------
## 2024-05-03 [금]
-------------------------------------------------------------------------------------------
             디버깅없이 실행을 터미널에서 하는 법

 : mkdir build
 : cmake ..
 : make
 : ./(파일이름)

-------------------------------------------------------------------------------------------

- OpenCV 설치
    sudo apt install libopencv-dev python3-opencv
    cmake 설정 _ mkdir build + cmake ..+ make + ./실행파일
    - glob  file 적용하기
    - 영상처리 영상인식 기본개념
    -기본클래스
        -Point class
        -Size class
        -Rect class
        -RotatedRect class
        -String class
        -Mat class일
            얕은복사 - 대입, 연산
            깊은복사 - clone, copyTo
        -Vec class
        -Scalar class
        -InputArray class
        -OutputArray class

    -영상입출력
        -imread
        -imshow
        -imWrite

    -동영상입출력
        -VideoCapture
        -VideoWriter

    -직선그리기
        -line함수
        -움직이는함수 그리기
-------------------------------------------------------------------------------------------
## 2024-05-07 [화]
-------------------------------------------------------------------------------------------
    -drawing
        -circle
        -rectangle
        -ellipse
    -text
        -putText
        -freeStyle 한글폰트기능
    -mouse
        -mouse callback 함수 사용
    -keyboard 
        -키보드 입력받기
    -tickmeter
        -시간측정
        -frame 일정하게 만들기 최적화
    -trackbar
        -trackbar Callback 함수 사용

    -4장 마지막실습
        -마우스 따라다니는 사각형, BGR정보읽기 + 파일저장
            실습 문제
                1.레나 이미지를 윈도우에 표시합니다.
                2.마우스가 클릭된 위치를 기준으로 사각형을 그립니다.
                3.마우스 클릭시 클릭된 위치의 BGR 값을 출력합니다.
                4.BGR 값을 저장하고 마지막으로 최적화를 위해 시간을 측정합니다.
                5.ch04까지 배운거 다 종합적으로 해 실습하기
    -5장 시작
        -그레이스케일
            - Brightness
            - Saturated
                - brightness.cpp 실습
                - saturated.cpp 실습
        -히스토그램 분석
            - pg 200. 까지 진도 나감

-------------------------------------------------------------------------------------------
## 2024-05-08 [수]
-------------------------------------------------------------------------------------------
    -5장 이어서 하기

        - 수업시작전 간단한 4장5장 리뷰
        - brightTrackBar
        영상밝기조절 - 트랙바
        영상대비조절 - 단순곱하기, 중간영역확장
        - 히스토그램, 히스토그램스트래치 바, 히스토그램 이쿠얼리제이션
        - 히스토그램 평활화

    - 6장 시작 [ 영상의 산술 및 논리 연산 ]
        - bitwise_and 함수
        - bitwise_or 함수
        - bitwise_xor 함수
        - bitwise_not 함수
    
    - 7장 시작 [ 필터링 ]
    convolution
        - 필터링연산방법
            가장자리 픽셀 처리 방법
            - BORDER_CONSTANT
            - BORDER_REPLICATE
            - BORDER_REFLECT
            - BORDER_REFLECT_101
            - BORDER_REFLECT101
            - BORDER_DEFAULT
        - EMBOSSING FILTERING [2D]
        - BLURRING [영상부드럽게하기]
        - 가우시안필터 - 독일의수학자 이름에서 딴 것
        - 샤프닝 [ 영상날카롭게하기 ]
            -unsharp_mask
        - 잡음 제거 필터링
            - 영상과잡음모델 [noise] - 잡는 미디언 필터
            - 양방향 필터   [bilateralFilter]
            - 미디언 필터   [medianFilter]

    - 8장 시작 [ 영상의 기하하적 변환 ]
        - 어파인 변환(Affine Transform) 3x2
            - getAffine Transform(), warpAffine() 함수.
            - 이동 변환
            - 전단 변환
            - 크기 변환
            - 회전 변환
            - 대칭 변환
        - 투시 변환 (perspective tramsform) 3x3, 마지막 숫자는 1이기에  dot이 8개가 필요하다.
            - getPerspectiveTransform(), warpPerspectiveTransform()
    - 9장 시작 [ 엣지 검출과 응용 ] 
        - 미분과 그래디언트
            - 엣지 - 픽셀부분 중 가장 많이 변하는 끝부분
            - 엣지 - 라인 - 코너 - 꼭지점을바탕으로 - 키포인트 - 객체인식 기반 
            - 엣지, 미분, 영상의 미분구하기[전진, 후진, 중앙]
            - 소벨마스크, 샤르마스크
                -magnitude()함수, phase()함수
            - 마스크 기반 엣지 검출
                - 캐니 엣지 검출기 canny()함수
                    가우시안필터링 -> 그래디언트계산 -> 비최대억제 -> 히스테리시스 엣지 트래킹
            
-------------------------------------------------------------------------------------------
## 2024-05-09 [목]
-------------------------------------------------------------------------------------------

- 9장 이어서 시작 9.2 직선 검출과 원 검출
    - 허프 변환 직선 검출 
        - 극좌표계의 좌표점을 검출해 직선, 원 검출한다.
        - 직교좌표로는 검출이 힘들고 극좌표계로 추출해야한다.
        - 축적배열  - 직선이 지나가는 행렬의 값을 1 씩 증가 시키는 것
                   - 이 작업을 반복하면 최종적으로 한점에서 값이 높아지게 되는 것이다.
            - 허프 변환 직선, 원검출 
                1.허프 변환 좌표계에서 행렬구성
                2.영상 내 모든 화소의 직선여부 검사
                3.직선 인지 좌표에 대한 허프 변환누적행렬구성
                4.허프누적행렬의 지역최대값 선정
                5.임계값 이상인 누적값(직선) 선별
                6.직선( )을 누적값 기준으로 내림차순 정렬
            - HoughLines(), HoughLinesP(),HoughCircles()
            - HouchLinesTrackbar 설치하기 실습

- 10장 시작 [ 컬러 영상 처리 ]
    - 컬러 영상다루기
        - imread의 3채널 컬러영상은 보통 Vec3b 타입을 사용함
        - Vec3b는 uchar가 3개인 정확히 3byte
        - 컬러영상의 픽셀 값 반전
    - 색 공간 변환
        - cvtColor(), split(), merge() 색상 채널 나누기
    - 컬러 히스토그램 평활화
        - 영상에서 색에 의한 구분을 지을때는 HSV로 영역을 지정하는게 좋다.
            -inRange()함수
        - 히스토그램 역투영 [실습x]
            -calcBackProject()함수

- 11장 시작 [ 이진화와 모폴로지 ]
    - 영상의 이진화 Binarization
        - 영상의 픽셀값을 0 또는 255로 만드는 연산
        - 이진화를 하는 이유? 
            1. 배경과 객체를 구분
            2. 관심영역과 비관심 영역 구분
            -threshold()함수
        - 적응형 이진화 - 픽셀마다 서로 다른 임계값을 사용
            -adptiveThreshold()함수
        - 모폴로지 Morphology
            - 영상을 형태학적인 측면으로 접근하는 것
            - 구조요소는 모폴로지 연산의 결과를 결정하는 커널, 마스크. 윈도우
        - 이진 영상의 침식 연산 erosion - 객체 외각을 깎아내는 연산 + 작은크기의 객체잡은제거 효과
            - erode()함수
        - 이진 영상의 팽창 연산 dilation - 객체 외곽을 확대시키는 연산
            - dilate()함수
        - 이진영상의 열기 닫기
            - 열기 - 침식을 적용하고 팽창을 적용하는 기법
            - 닫기 - 팽창을 적용하고 침식을 적용하는 기법
            - morphologyEx()함수

- 12장 시작 [레이블링과 외곽선 검출]
    - 레이블링 Labeling - 객체구역을 영역단위로 분석, 객체 픽셀에 고유한 번호를 지정하는 작업(레이블맵), 이진영상에서 수행
    - 객체단위 분석 - 객체를 분할아여 특징을 분석, 객체위치 및 크기정보, ROI추출, 모양분석
        -4이웃 연결관계, 8이웃 연결관계
        -connectedComponents(),connectedComponentsWithStats();
    -외곽선 검출 - 객체의 외곽선 좌표를 모두 추출하는 작업, 외각선의 계층구조도 표현
        -findcontours(), drawContours()
    -외곽선처리 함수
        -boundingRect(), minAreaRect(),minEnclosingCircle(), arcLength(), contourArea, approxPolyDp()

- 13장 시작 [객체 검출]
    - 템플릿 매칭 - template matching
    - 캐스케이드 분류기와 얼굴 검출
    - HOG 알고리즘과 보행자 검출
        - SVM
    - QR 코드 검출
    ppt파일 없어서 간단하게 하고 넘어감

- 14장 시작 [ 지역특징점 검출과 매칭 ]
    - 코너 검출
        - 코너점들이 영상에서 고유한 특징을 갖고있어서, 변별력있게 잘 검출
        - 지역 특징을 갖고 있어 변별성이 있고 고유성이 있다.
            cornerHarris()함수
        - FAST() 함수 - 속도가 빠름 [features from accelerated segment test]
        - GFTT() 함수 - 좀 더 디테일함 (Good Features to Track)
    - 크기 불변 특징점 검출과 기술
        - 특징점 검출 클래스
        알고리즘
        - KeyPoint 클래스 (pt, size, angle, response, octave, class_id)
            - ORB (Oriented Fast and Rotated BRIEF 알고리즘)
            - AKAZE (Accelerated_KAZE 알고리즘)
            - SIFT (Scale - Invariant Feature Transform 알고리즘)
                수행과정 
                    입력영상 -> 특징검출기 -> 디스크립터 -> 매칭
            - ORB::create(), ORB::detect(), ORB::compute(), drawKeypoints
    - 특징점 매칭 - Feature point matching
        - Dmatch 클래스  - queryldx, trainldx, imgldx, distance
        - DescritorMatcher 클래스
            - match 가장 비슷한거 1개를 매칭
        - BFMatcher 클래스 (Brute-Force Matcher) 클래스
            - querDescriptors와 trainDescriptors를 하나하나 확인해 매칭되는지 판단하는 알고리즘 - 특징점이 많을수록 연산이 늘어남
        - FLANN(Fast Library for Approximate Nearest Neighbors Matching) 클래스
            - 모든 기술자를 전수 조사하기 보다 이웃하는 기술자끼리 비교
        - BFMatcher::create 메소드
        - FlannBaseMatcher::create 메소드
        - DescriptorMatcher::match 메소드
            - drawMatches() 함수
        -호모그래피 (Homography)
            - 두 평면 사이의 투시변환을 의미
            - 호모그래피는 투시변환과 유사
                -findHomography함수, RANSAC 알고리즘즘
            - find_homography() 예제 
            - Stitcher 클래스 
                - 영상을 이어붙일수 있게 제공
                - create로 객체생성
                - stitch로 vector<Mat>를 붙여서 dst로 반환

---------------------------------------------------------------------------------------------------------------------------
## 2024-05-10 [금]
---------------------------------------------------------------------------------------------------------------------------
[PROJECT_II] - BEGIN
[PROJECT_II] - END _ 5.20 월

## 2024-05-21 [화]--------------------------------------------------
python 시작
가상환경 설정 설명

## 목차
1. [파이썬이란?](#파이썬이란)
2. [파이썬 설치](#파이썬-설치)
3. [기본 문법](#기본-문법)
    - [Hello, World!](#hello-world)
    - [변수와 데이터 타입](#변수와-데이터-타입)
    - [기본 연산](#기본-연산)
4. [첫 번째 파이썬 프로그램](#첫-번째-파이썬-프로그램)

## 파이썬이란?

파이썬(Python)은 해석되고, 인터프리터 방식이며, 객체 지향적이고, 고급 프로그래밍 언어입니다. 1991년 귀도 반 로섬(Guido van Rossum)에 의해 처음 만들어졌습니다. 파이썬은 코드 가독성이 높고, 생산성이 뛰어나며, 다양한 라이브러리와 프레임워크를 지원하여 웹 개발, 데이터 분석, 인공지능 등 다양한 분야에서 사용됩니다.

### Linux
터미널을 열고 다음 명령어를 입력하여 파이썬을 설치합니다:
    ```sh
    sudo apt-get update
    sudo apt-get install python3
    ```
## 기본 문법

### Hello, World!
print("Hello, World!")
파이썬설치
    -  linux시스템에서는 기본적으로 설치가 되어있다
        -python3

3장 - 리버스 인덱스가 적용된 이유?

del을 객체를 삭제한다
remove 는 리스트안에 있는 

## 2024-05-22 [수]------------------------------------------------------
아침 모닝 리뷰
Chap 4장 이어서 수업 진행
챕터 4장의 학습 목표
    01 조건문의 기본 개념 이해
    02 다양한 형태의 조건문 사용법 익히기
    03 반복문의 기본 개념 이해
    04 다양한 반복문 사용법 익히기
    05 조건문과 반복문을 활용한 프로그램 작성

* 주요 내용

    - 반복문
        - for ~ in ~:
        - for ~ in range():
        - while ~ :
        - break, continue
            - 구구단 프로그램
            - 진수 변환 프로그램
            - 숫자 찾기 프로그램
            - 평균 구하기 프로그램
    - 함수
        - def 함수명(매개변수)
        - 매개변수 종류
            - 위치 매개변수
            - 키워드 매개변수
            - 디폴트 매개변수
            - 가변 매개변수 - 튜플의 형태로 넘어 간다.
            - 키워드 가변 매개변수 - 딕션너리의 형태로 넘어 간다.
        - 함수의 리턴 값 : 여러개를 리턴 하면 튜플로 전달
        - 함수 호출 방식
            - 기본적으로 모두 call by value 이다.
            - list 를 쓰면 call by referece 처럼 사용 가능하다.
        - 변수의 사용 범위
            - 지역 변수
            - 전역 변수 global 키워드
        - 람다 함수
            - lambda 매개변수 : 리턴값
            - map, filter, reduce
            - 함수의 인자로 함수를 넘길때 사용
        - 제너레이터
            - yield 키워드 사용
            - next 함수 사용
            - for ~ in ~ 사용
            - 제너레이터 표현식
        - 데코레이터
            - 함수를 감싸는 함수
            - 함수의 시작과 끝을 감싸는 함수
            - 함수의 인자를 검사하는 함수
            - 함수의 리턴값을 검사하는 함수
            - 함수의 실행시간을 측정하는 함수
    - 문자열
        - 파이썬의 문자열은 클래스의 객체로서 시퀀스 자료형이다.
        - 문자열의 인덱싱과 슬라이싱
        - 문자열의 메소드
            - upper, lower, title, capitalize, swapcase
            - strip, lstrip, rstrip
            - split, join
            - replace, find, index, count
            - startswith, endswith
            - isalpha, isdigit, isalnum, isspace
        - 문자열 포맷팅
            - % 연산자
            - format 함수
            - f-string
            - 패딩 처리
        - 단어카운팅 프로그램
    - 코딩 테스트 연습(프로그래머스-파이썬3)
        - 꼬리 문자열
        - 정수 찾기
        - 부분 문자열인지 확인하기
        - 부분 문자열
        - 0 떼기

1. 조건문
if 문
    기본 구조: 조건이 참일 때 특정 코드를 실행.
    python
        if 조건:
            실행할_코드

    예제:
    python
        x = 10
        if x > 5:
            print("x는 5보다 큽니다.")

if-else 문
    구조: 조건이 참일 때와 거짓일 때 각각 다른 코드를 실행.
    python
        if 조건:
            실행할_코드_참
        else:
            실행할_코드_거짓

    예제:
    python
        x = 3
        if x > 5:
            print("x는 5보다 큽니다.")
        else:
            print("x는 5보다 작거나 같습니다.")

if-elif-else 문
    구조: 여러 조건을 순차적으로 검사하여 실행.

        python
            if 조건1:
                실행할_코드1
            elif 조건2:
                실행할_코드2
            else:
                실행할_코드3
    예제:
    python
        x = 7
        if x > 10:
            print("x는 10보다 큽니다.")
        elif x > 5:
            print("x는 5보다 큽니다.")
        else:
            print("x는 5보다 작거나 같습니다.")
2. 반복문
    for 문
        기본 구조: 시퀀스의 각 요소를 순회하며 실행.
    python
        for 변수 in 시퀀스:
            실행할_코드
    예제:
    python
        for i in range(5):
            print(i)

    while 문
        기본 구조: 조건이 참일 동안 반복하여 실행.

    python

        while 조건:
            실행할_코드
    python
        x = 0
        while x < 5:
            print(x)
            x += 1

3. 반복 제어문
break 문

    기능: 반복문을 즉시 종료.

    python

for i in range(10):
    if i == 5:
        break
    print(i)

예제:

python

    i = 0
    while True:
        if i == 3:
            break
        print(i)
        i += 1

continue 문

    기능: 현재 반복을 건너뛰고 다음 반복으로 진행.

    python

    for i in range(5):
        if i == 2:
            continue
        print(i)

4. 중첩 조건문과 반복문

    구조: 조건문과 반복문을 서로 포함하여 복잡한 흐름 제어.

    python

    for i in range(3):
        for j in range(3):
            if i == j:
                print(f'i와 j가 같습니다: {i}')


결론

챕터 4장에서는 파이썬에서 조건문과 반복문을 사용하여 프로그램의 흐름을 제어하는 방법을 학습하였습니다. 조건문을 통해 조건에 따라 다른 코드를 실행하고, 반복문을 통해 코드의 특정 부분을 여러 번 반복 실행할 수 있다. 
이러한 제어 구조를 활용하여 보다 복잡하고 유연한 프로그램을 작성할 수 있다.
- 조건문
- 반복문

* Chap 5장 시작
    01 함수기초
    02 함수심화
    03 함수의 인수
    04 좋은코드를 작성하는 방법

1. 함수의 기본 개념

    함수란?: 특정 작업을 수행하는 코드의 묶음. 코드의 재사용성을 높이고, 프로그램을 더 구조적으로 작성할 수 있게 해줌.
    함수의 장점: 코드의 중복을 줄이고, 가독성을 높이며, 유지보수를 용이하게 함.

2. 함수 정의 및 호출

    함수 정의: def 키워드를 사용하여 함수를 정의. 함수 이름과 괄호 안에 매개변수를 포함.

    python
        def 함수이름(매개변수1, 매개변수2):
            실행할_코드
            return 반환값

    함수 호출: 함수 이름과 괄호 안에 인수(argument)를 넣어 호출.

    python
        함수이름(인수1, 인수2)

3. 매개변수와 반환 값

    위치 매개변수와 키워드 매개변수: 위치 매개변수는 순서대로 인수를 전달하고, 키워드 매개변수는 이름을 명시하여 인수를 전달.
    기본 매개변수 값: 매개변수에 기본값을 설정하여 함수 호출 시 해당 매개변수를 생략 가능.

    python

        def 함수이름(매개변수1, 매개변수2=기본값):
            실행할_코드

    반환 값: return 문을 사용하여 함수가 값을 반환. 반환 값이 없을 경우 None을 반환.

4. 람다 함수와 고차 함수

    람다 함수: 익명 함수로, 짧은 코드를 간결하게 작성할 때 사용.

    python

    lambda 매개변수1, 매개변수2: 표현식

    고차 함수: 함수를 인수로 받거나 함수를 반환하는 함수. 대표적인 예로 map, filter, reduce가 있음.
        map(함수, 시퀀스): 시퀀스의 각 요소에 함수를 적용하여 새로운 시퀀스를 반환.
        filter(함수, 시퀀스): 시퀀스의 각 요소에 함수를 적용하여 참인 요소들로 새로운 시퀀스를 반환.
        reduce(함수, 시퀀스): 시퀀스의 각 요소에 함수를 차례대로 적용하여 단일 값을 반환 (이용 시 functools 모듈 필요).

5. 모듈화와 코드 재사용

    모듈화: 관련 함수들을 모아 모듈로 관리. 모듈은 파일 단위로 존재하며, 다른 파이썬 파일에서 import하여 사용.

    python

    import 모듈이름
    모듈이름.함수이름()

    코드 재사용성: 함수와 모듈을 이용하여 반복적인 코드 작성을 피하고, 효율적으로 코드를 재사용.

예제
함수 정의와 호출 예제

python

def add(a, b):
    return a + b

result = add(3, 4)
print(result)  # 출력: 7

람다 함수와 고차 함수 예제

python

# 람다 함수 예제
multiply = lambda x, y: x * y
print(multiply(3, 4))  # 출력: 12

# map 함수 예제
numbers = [1, 2, 3, 4, 5]
squared = list(map(lambda x: x**2, numbers))
print(squared)  # 출력: [1, 4, 9, 16, 25]

결론

챕터 5장에서는 파이썬 프로그래밍에서 함수의 중요성과 활용 방법에 대해 학습하였습니다. 함수를 사용하여 코드의 재사용성을 높이고, 보다 효율적이고 가독성 좋은 코드를 작성할 수 있습니다. 다양한 함수 작성 방법과 고차 함수의 사용법을 익히면 데이터 과학 작업에서도 유용하게 활용할 수 있습니다.

*책에 없는 내용
    lambda()
    yield()
    List() = li()
    decorator()

* Chap6 문자열 BEGIN
    문자열의 이해
    Lab : 단어 카운팅
    문자열 서식 지정

## 2024-05-23 [목]--------------------------------------------------------

* chap7 - 자료구조 시작
    01 자료구조의 이해
    02 스택과 큐
    03 튜플과 세트
    04 딕셔너리
    05 collections 모듈
    06 Lab:텍스트 마이닝 프로그램

    딕셔너리 - 딕셔너리는 순서가 없으니 어떻게 출력해야겠다라는것을 잊어라.


* chap8 - 파이썬 스타일 코드 I
    01 파이썬스타일 코드의 이해
    02 문자열의 분리 및 결합
    03 리스트 컴프리헨션
    04 다양한방식의 리스트값 출력

* chap9 - 파이썬 스타일 코드 II
    01 람다함수
    02 맴리듀스
    03 별표의활용
    04 선형대수학