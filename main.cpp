#include <iostream>
#include "customer.h"
#include "Application.h"
#include "Developer.h"
#include "Feedback.h"
#include "Payment.h"
#include "plan.h"
#include "Report.h"
#include "staff.h"

using namespace std;

int main() {
    //create instance of classes
    Customer customer1("harry", "potter", 1200, "+94770000000", "harry@gmail.com" , 20 ,"sri lanka", "2000/01/01");
    Application application1(1, "app1", "category1", "type1", "status1");
    Developer developer1(1, "dev1", "contact1", "email1");
    Feedback feedback1(1, 5.0, "comment1", "email1");
    Payment payment1(1,500.0 ,"2000/01/01","method1", "status1", "email1");
    plan plan1(1, "package1", "period1");
    Report report1(1, "report1", "title1", "2000/01/01 ", "type1");
    staff staff1(1, "name2", "contact1", 10000.00, "developer");
    

    return 0;
}
