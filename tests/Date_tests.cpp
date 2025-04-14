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

TEST(DateTests, TestCheckFunction) {
    Date date = Date(26,3,-12);
    Date date2 = Date(30,2,2023);
    Date date3 = Date(27,1,2023);
    Date date4 = Date(30,3,2025);
    ASSERT_EQ(date.check(), false);
    ASSERT_EQ(date2.check(), false);
    ASSERT_EQ(date3.check(), true);
    ASSERT_EQ(date4.check(), true);
}

TEST(DateTests, TestToString) {
    Date date = Date(26,3,2025);
    Date date2 = Date(27,1,2023);
    string expected = "26/03/2025";
    string expected2 = "27/01/2023";
    ASSERT_EQ(date.toString(), expected);
    ASSERT_EQ(date2.toString(), expected2);
}