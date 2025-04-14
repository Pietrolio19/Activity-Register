#include <gtest/gtest.h>
#include <stdexcept>
#include "Time.h"

TEST(TimeTests, TimeConstructor) {
    Time time = Time(20,12);
    ASSERT_EQ(time.getHour(), 20);
    ASSERT_EQ(time.getMinute(), 12);

    Time time2 = Time(25,65);
    ASSERT_EQ(time2.check(), false);
}

TEST(TimeTests, GetTime) {
    Time time = Time(20,12);
    string expected = "20:12";
    ASSERT_EQ(time.getTime(), expected);

    Time time2 = Time(9,2);
    string expected2 = "09:02";
    ASSERT_EQ(time2.getTime(), expected2);
}