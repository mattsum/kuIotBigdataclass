# kuIotBigdataclass
C/C++ database, arduino, rasberrypi, Iot class.... AVR
데이터베이스 수업 리드미 작성 시작 
---
## 2024-02-22
---
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

## 2024-02-23
---
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

## 2024-02-29
---
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

## 2024-03-07
---
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

## 2024-03-08
---
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

