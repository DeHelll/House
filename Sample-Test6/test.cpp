#include "pch.h"
#include "gtest/gtest.h"
#include "../Booking/house.h"

TEST(RentalSystemTest, AddAndRentHouse) {
    RentalSys system;
    system.addHouse(std::make_unique<House>("Test Address", 100));
    EXPECT_TRUE(system.rentHouse("Test Address"));
}

TEST(RentalSystemTest, RentNonExistentHouse) {
    RentalSys system;
    EXPECT_FALSE(system.rentHouse("Wrong Address"));
}
TEST(RentalSystemTest, MultipleHouses) {
    RentalSys system;
    system.addHouse(std::make_unique<House>("Address1", 100));
    EXPECT_TRUE(system.rentHouse("Address1"));
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}