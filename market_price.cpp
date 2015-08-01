#include "market_price.h"


4 funktionen bei item ID
sm normal market_pric
durschnitts preis

get name eng de


summe preise big integer
thridparty infint


sql postgres durschnit testdb=# SELECT AVG(SALARY) FROM COMPANY;
    SELECT AVG(salary)
    FROM employee
    WHERE designame='SALESMAN';


// Table Struktur
// ID INTEGER PRIMARY KEY  AUTOINCREMENT
// itemID INTEGER
// itemDE VARCHAR
// itemEN VARCHAR
// marketprice INTEGER
// bmprice INTEGER
//  date DATETIME

int get_mprice( int itemID ){
    
    tntdb::Connection conn = tntdb::connect("sqlite:mydb.db");
}




void someFunc(tntdb::Connection conn)
{
  tntdb::Result result = conn.select("select col1, col2, col3 from table");
  for (tntdb::Result::const_iterator it = result.begin();
       it != result.end(); ++it)
  {
    tntdb::Row row = *it;
    int a;
    std::string b;
    long c;
    bool cIsNotNull;
    row[0].get(a);              // read column 0 into variable a
    b = row.getString("col2");  // read column with name "col2" into variable b
    cIsNotNull = row[2].get(c); // read column 2 into variable c
    std::cout << "col1=" << a << "\tcol2=" << b;
    if (cIsNotNull)
      std::cout << "\tcol3=" << c;
    else
      std::cout << "\tcol3 is null";
    std::cout << std::endl;
  }
}