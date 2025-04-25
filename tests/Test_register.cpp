#include <gtest/gtest.h>
#include "../src/Register.h"
#include "../src/Activity.h"

TEST(RegisterTest, AddActivityTest) {
    auto reg = Register();
    auto date = Date(26,4,2025);
    string text = "Testing!";
    auto time1 = Time(15, 10);
    auto time2 = Time(15, 15);
    auto act1 = std::make_shared<Activity>(text, time1, time2);

    reg.addActivity(date, act1);
    auto activities = reg.searchActivityByDate(date);
    ASSERT_EQ(activities.size(), 1);
    EXPECT_EQ(activities[0]->toString(), act1->toString());
}

TEST(ResisterTest, removeActivityTest) { //aggiunta
    auto reg = Register();
    auto date = Date(26,4,2025);
    string text = "Testing!";
    auto time1 = Time(15, 10);
    auto time2 = Time(15, 15);
    auto act1 = make_shared<Activity>(text, time1, time2);
    auto act2 =make_shared<Activity>(text, time1, time2);
    reg.addActivity(date, act1);
    reg.addActivity(date, act2);

    reg.removeActivity(date, act1);
    auto activities = reg.searchActivityByDate(date);
    ASSERT_EQ(activities.size(), 1);
}

TEST(RegisterTest, updateActivityTest) { //aggiunta
    auto reg = Register();
    auto date = Date(26,4,2025);
    string text = "Testing!";
    auto time1 = Time(15, 10);
    auto time2 = Time(15, 15);

    string text2 = "Extra Testing!";
    auto time3 = Time(15, 15);
    auto time4 = Time(15, 25);
    auto act1 = make_shared<Activity>(text, time1, time2);
    auto act2 = make_shared<Activity>(text2, time3, time4);

    reg.addActivity(date, act1);
    reg.updateActivity(date, act1, act2);
    string expected = "Extra Testing! dalle 15:15 fino alle 15:25";
    auto activities = reg.searchActivityByDate(date);
    ASSERT_EQ(activities.size(), 1);
    ASSERT_EQ(activities[0]->toString(), expected);
}