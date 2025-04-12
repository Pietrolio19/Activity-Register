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

    auto activities = reg.getActivities(date);
    ASSERT_EQ(activities.size(), 1);
    EXPECT_EQ(activities[0]->getActivity(), act1->getActivity());
}