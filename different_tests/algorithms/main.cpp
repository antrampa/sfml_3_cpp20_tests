/*
Each program must be written in C++, compiled, and run from the terminal.

Questions for this assignment
Write a program that verifies the validity of player scores.

Instructions
– Create a vector of integers named scores, filled with a few random values.
– Use all_of to check if all scores are above zero.
– Use any_of to test if at least one score reaches 100.
– Use none_of to make sure no score is negative.
– For each condition, print a clear message showing whether it’s true or false.

Write a program that looks for a player in a list.

Instructions
– Create a vector of strings named players, for example with names like "Luna", "Rex", "Nova", and "Iris".
– Use find to search for a specific name in the list.
– If it’s found, print "Player found: <name>".
– If not, print "No player with that name."
– Test your program with both an existing and a missing name.

Write a program that finds the first item whose name starts with a certain letter.

Instructions
– Create a vector of strings named items, for example "Potion", "Scroll", "Amulet", "Shield".
– Use find_if with a lambda to locate the first item that starts with the letter 'S'.
– If found, print "First match: <item>".
– If not, print "No matching item found."

Write a program that counts how many players have low health.

Instructions
– Define a struct Player with two fields: a std::string name and an int health.
– Create a vector of Player objects with different health values.
– Use count_if with a lambda to count how many have less than 50 health points.
– Display the total number of weak players found.

Write a program that organizes player scores.

Instructions
– Create a vector of integers named scores, with at least five different values.
– Use sort to order them from smallest to largest.
– Use is_sorted to check whether the container is correctly ordered.
– Use min_element and max_element to display the lowest and highest scores.

Write a program that cleans up a list of enemies after a battle.

Instructions
– Define a struct Enemy with a std::string name and a bool alive field.
– Create a vector of Enemy objects, mixing alive and defeated enemies.
– Use erase_if with a lambda to remove all defeated ones.
– Loop through the remaining enemies and print their names to confirm the cleanup worked.


*/