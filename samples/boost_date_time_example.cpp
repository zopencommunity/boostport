#include <boost/date_time/gregorian/gregorian.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <iostream>

int main() {
    // Working with dates
    using namespace boost::gregorian;

    // Create a date object
    date today = day_clock::local_day();
    std::cout << "Today's date: " << to_simple_string(today) << std::endl;

    // Create a specific date
    date specific_date(2024, 7, 30);
    std::cout << "Specific date: " << to_simple_string(specific_date) << std::endl;

    // Calculate the difference between two dates
    date_duration duration = today - specific_date;
    std::cout << "Days between dates: " << duration.days() << " days" << std::endl;

    // Working with times
    using namespace boost::posix_time;

    // Create a time object
    ptime now = microsec_clock::local_time();
    std::cout << "Current time: " << to_simple_string(now) << std::endl;

    // Create a specific time
    ptime specific_time(date(2024, 7, 30), hours(14) + minutes(30));
    std::cout << "Specific time: " << to_simple_string(specific_time) << std::endl;

    // Calculate the difference between two times
    time_duration time_diff = now - specific_time;
    std::cout << "Time difference: " << time_diff << std::endl;

    // Working with durations
    time_duration duration1 = hours(5) + minutes(30);
    time_duration duration2 = hours(3) + minutes(45);
    time_duration total_duration = duration1 + duration2;

    std::cout << "Total duration: " << total_duration << std::endl;

    return 0;
}

