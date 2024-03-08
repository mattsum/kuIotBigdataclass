#include <stdio.h>
#include <mysql.h>
#include <string.h>
// sudo apt install libmysql++*
int main(){
    MYSQL *conn;
    MYSQL_RES *res;
    MYSQL_ROW row;
    char *host = "localhost";
    char *user = "root"; //키지의 코드 또는 기능에 버그가 있는 경우 이를 식별하고 수정하는 것이 필요합니다. 디버깅 도구를 사용하여 코드를 검사하고 문제를 해결할 수 있습니다.
    char *passwd = "0000";
    char *db = "madangdb";
    char query[255];
    int port = 3306;

    strcpy(query, "select * from Book");

    conn = mysql_init(NULL);
        if(mysql_real_connect(conn, host, user, passwd, db, port, NULL, 0)){
            printf("MySQL 연결 성공\n");
        }else{
            printf("MySQL 연결 실패\n");
        }

    if(mysql_query(conn, query)){
        printf("쿼리 실패\n");
    }
    res = mysql_store_result(conn);
    while(row = mysql_fetch_row(res)){
        printf("%s\t", row[0]);
        printf("%s\t", row[1]);
        printf("%s\t", row[2]);
        printf("%s\t\n", row[3]);
    }
    mysql_close(conn);
    return 0;
}