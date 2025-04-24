#include <gtest/gtest.h>
#include "../src/Date.h"

TEST(DateTests, DateConstructor) {
    Date date = Date(26,3,2025);
    Date date2 = Date(27,1,2023);
    //Data 1
    ASSERT_EQ(date.getDay(), 26);
    ASSERT_EQ(date.getMonth(), 3);
    ASSERT_EQ(date.getYear(), 2025);

    //Data 2
    ASSERT_EQ(date2.getDay(), 27);
    ASSERT_EQ(date2.getMonth(), 1);
    ASSERT_EQ(date2.getYear(), 2023);
}

TEST(DateTests, ExceptionTest) {
    ASSERT_THROW([]{Date(26,3,-12);}(), invalid_argument); //funzione lambda necessaria altrimenti l'eccezione nel costruttore blocca il test
    ASSERT_THROW([]{Date(30,2,2024);}(), invalid_argument);
    ASSERT_THROW([]{Date(29,2,2025);}(), invalid_argument);
}

TEST(DateTests, TestToString) {
    Date date = Date(26,3,2025);
    Date date2 = Date(27,1,2023);
    string expected = "26/03/2025";
    string expected2 = "27/01/2023";
    ASSERT_EQ(date.toString(), expected);
    ASSERT_EQ(date2.toString(), expected2);
}