# kuIotBigdataclass
C/C++ database arduino rasberrypi Iot class....

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
                -숫자함수
                -문자열함수
                -날짜함수
                -format 형식 %Y%m%d 등등 새롭게 표현하는식