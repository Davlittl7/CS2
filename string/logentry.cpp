//
//
// File:        logentry.cpp
//
// Version:     1.0
// Date:
// Author:
//
// Description: Class implementation for a log entry.
//
//

////////////////////////////////////////////////////////////
#include <iostream>
#include <vector>
#include "string.hpp"
#include "logentry.hpp"
//////////////////////////////////////////////////////////
// REQUIRES: The String is from a logfile (must be able to open the file)
// ENSURES: objects are assigned values for each of their attributes
//
LogEntry::LogEntry(String s) {
    // ...
    std::vector<String> vec = s.split(' ');
    if (vec.size() == 10) {
        host = vec[0];
		std::vector<String> dateTime = vec[3].split(':');
		
		std::vector<String> dateString = dateTime[0].split('/');

		String stringday = dateString[0].substr(1, dateString[0].length());
		date.setDay(stringday);

		String stringmonth = dateString[1];
		date.setMonth(stringmonth);

		int intyear = dateString[2].convertToInt();
		date.setYear(intyear);

		time.sethour(dateTime[1].convertToInt());
		time.setminute(dateTime[2].convertToInt());
		time.setsecond(dateTime[3].convertToInt());

		request = vec[5].substr(1, 4);

		status = vec[8];

		if (vec[9] == '-') {
			number_of_bytes = 0;
		}

		number_of_bytes = vec[9].convertToInt();
    }
    else {
        host = "";
		date.setDay("");
		date.setMonth("");
		date.setYear(0);
		time.sethour(0);
		time.setminute(0);
		time.setsecond(0);
		request = "";
		status = "";
		number_of_bytes = 0;
    }

}

//////////////////////////////////////////////////////////
// REQUIRES: Out must be connected to a file
// ENSURES: Will output each piece of a log entry in a block of info for every log in the file
//
std::ostream& operator<<(std::ostream& out, const LogEntry& log)
{
	out << "Host: " << log.host << '\n';

	out << "Date: " << log.date.getMonth() << "/" << log.date.getDay() << "/" << log.date.getYear() << '\n';
	
	out << "Time: " << log.time.gethour() << ":" << log.time.getminute() << ":" << log.time.getsecond() << '\n';

	out << "Request Type: " << log.request << '\n';
	out << "Status: " << log.status << '\n';
	out << "Bytes: " << log.number_of_bytes << "\n\n";

	return out;
}

//////////////////////////////////////////////////////////
// REQUIRES: Needs to be connected to a file to collect the info into result
// ENSURES: Will return all of the lines from the lines until the end of the file
//
std::vector<LogEntry> parse(std::istream& in) {
    std::vector<LogEntry> result;

	String tmp;

	while (!in.eof())
	{
		char ch;
		if (in.get(ch))
		{
			if (ch != '\n')
			{
				String ca(ch);
				tmp = tmp + ch;
			}
			else
			{
				String reset;
				LogEntry log(tmp);
				result.push_back(log);
				tmp = reset;
			}
		}

	}

	return result;
}

//////////////////////////////////////////////////////////
// REQUIRES: Out must be connected to a file in order to run
// ENSURES: Will output each log entry
//
void output_all(std::ostream& out, const std::vector<LogEntry>& vecLogs) {
	for (int i = 0; i < vecLogs.size(); ++i) {
		out << vecLogs[i];
	}
}

//////////////////////////////////////////////////////////
// REQUIRES: Out must be connected to a file
// ENSURES: Outputs the host of each log entry
//
void by_host(std::ostream& out, const std::vector<LogEntry>& log) {
	for (int i = 0; i < log.size(); ++i) {
		out << log[i].getHost() << '\n';
	}
}

//////////////////////////////////////////////////////////
// REQUIRES: Each log has been given a byte value
// ENSURES: Will return the sum of all of the number of bytes within each log entry in the specified file
//
//
int byte_count(const std::vector<LogEntry>& log) {

    int total = 0;

    for (int i = 0; i < log.size(); ++i) {
        total = total + log[i].getBytes();
    }

    return total;
}


