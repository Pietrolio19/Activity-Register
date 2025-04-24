#include <gtest/gtest.h>
#include <stdexcept>
#include "Time.h"

TEST(TimeTests, TimeConstructor) {
    Time time = Time(20,12);
    ASSERT_EQ(time.getHour(), 20);
    ASSERT_EQ(time.getMinute(), 12);

    Time time2 = Time(8,3);
    ASSERT_EQ(time2.getHour(), 8);
    ASSERT_EQ(time2.getMinute(), 3);
}

TEST(TimeTests, ExcetionTest) {
    ASSERT_THROW([]{Time(25,12);}(), invalid_argument);
    ASSERT_THROW([]{Time(20,61);}(), invalid_argument);
}

TEST(TimeTests, GetTime) {
    Time time = Time(20,12);
    string expected = "20:12";
    ASSERT_EQ(time.toString(), expected);

    Time time2 = Time(9,2);
    string expected2 = "09:02";
    ASSERT_EQ(time2.toString(), expected2);
}