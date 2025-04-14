#include <gtest/gtest.h>
#include "Activity.h"

TEST(ActivityTests, ActivityConstructor) {
    string desc = "Corsa Mattutina";
    Time start1 = Time(6,53);
    Time end1 = Time(8,22);
    Activity activity = Activity(desc, start1, end1);

    string desc2 = "Pranzo in Famiglia";
    Time start2 = Time(12,45);
    Time end2 = Time(14,45);
    Activity activity2 = Activity(desc2, start2, end2);

    string expected = "Corsa Mattutina dalle 06:53 fino alle 08:22";
    string expected2 = "Pranzo in Famiglia dalle 12:45 fino alle 14:45";
    ASSERT_EQ(activity.getActivity(), expected);
    ASSERT_EQ(activity2.getActivity(), expected2);
}

