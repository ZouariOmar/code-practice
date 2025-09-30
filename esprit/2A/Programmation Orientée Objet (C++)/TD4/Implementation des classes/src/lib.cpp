/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-13
 * @copyright Copyright (c) 2025
 * @link https://esprit.blackboard.com/ultra/courses/_4241_1/outline/edit/document/_1579548_1?courseId=_4241_1&view=content TD4 @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Accommodation::Accommodation object
 *
 * @param address string
 * @param hotelName string
 * @param stars int
 */
Accommodation::Accommodation(string Address, string HotelName, STARS Stars)
    : address(Address), hotel_name(HotelName), stars(Stars) {
}

/**
 * @brief ### Construct a new Accommodation::Accommodation object
 */
Accommodation::Accommodation() {
}

Travel::Travel(int Id, string OriginState, string DestinationState, string Name, Date BeginDate, Date EndDate, float Price, Accommodation Acc)
    : id(Id), originState(OriginState) {
}