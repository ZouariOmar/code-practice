/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/robot-collisions
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

/**
 * @brief Return an array containing the health of the remaining robots (in the order they were given in the input), after no further collisions can occur.
 *
 * @param positions
 * @param healths
 * @param direction
 * @return vector<int>
 */
vector<int> Solution::survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string direction) {
  // Sorting process
  sortRobots(positions, healths, direction);

  int i = 0;
  while (i < direction.size() - 1 && !direction.empty()) {
    if (direction[i] == 'R' && direction[i + 1] == 'L') {
      if (healths[i] == healths[i + 1]) {
        // Pop the 2 robots
        healths.erase(healths.begin() + i, healths.begin() + i + 2);
        direction.erase(direction.begin() + i, direction.begin() + i + 2);

      } else if (healths[i] > healths[i + 1]) {
        // Pop the second robot && decrees the health of the first robot by 1
        healths.erase(healths.begin() + i + 1, healths.begin() + i + 2);
        direction.erase(direction.begin() + i + 1, direction.begin() + i + 2);

        healths[i]--;

      } else {
        // Pop the first robot && decrees the health of the second robot by 1
        healths.erase(healths.begin() + i, healths.begin() + i + 1);
        direction.erase(direction.begin() + i, direction.begin() + i + 1);

        healths[i + 1]--;
      }
      i = 0;
    } else {
      i++;
    }
    
  }

  // Sort the healths vector using the positions vector indexes
  // ...

  return healths;
}

/**
 * @brief Sort the positions, healths vectors and the directions string depending on robots positions (lower to grower)
 *
 * @param positions
 * @param healths
 * @param direction
 */
void Solution::sortRobots(vector<int> positions, vector<int>& healths, string& direction) {
  int i = 0;
  while (i < positions.size() - 1) {
    if (positions[i] > positions[i + 1]) {
      swap(positions[i], positions[i + 1]);
      swap(healths[i], healths[i + 1]);
      swap(direction[i], direction[i + 1]);
      i = 0;
    } else
      i++;
  }
}

/*
* Or use this solution:
.
.
.
class Solution {
public:

    struct Robot {
        int position;
        int health;
        char direction;
        int index;
    };

    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string& directions) {
        int n = positions.size();
        vector<Robot> vals;
        for (int i = 0; i < n; i++) {
            vals.push_back({positions[i], healths[i], directions[i], i});
        }
        sort(vals.begin(), vals.end(), [](const Robot& a, const Robot& b) {
            return a.position < b.position;
        });

        vector<Robot> stack;
        for (auto& robot : vals) {
            if (robot.direction == 'R') {
                stack.push_back(robot);
                continue;
            }

            // Check if the robot should be eliminated
            bool gone = false;

            // Process the stack to eliminate robots with lower health
            while (!stack.empty() && stack.back().health <= robot.health && stack.back().direction == 'R') {
                if (stack.back().health == robot.health) {
                    stack.pop_back();
                    gone = true;
                    break;
                }
                robot.health--;
                stack.pop_back();
            }

            // If the robot is not yet eliminated and there is a robot facing right with higher health
            if (!gone && !stack.empty() && stack.back().direction == 'R' && stack.back().health > robot.health) {
                stack.back().health--;
                gone = true;
            }

            // If the robot is not eliminated, add it to the stack
            if (!gone) {
                stack.push_back(robot);
            }
        }

        sort(stack.begin(), stack.end(), [](const Robot& a, const Robot& b) {
            return a.index < b.index;
        });

        vector<int> result;
        for (const auto& robot : stack) {
            result.push_back(robot.health);
        }

        return result;
    }
};
*/