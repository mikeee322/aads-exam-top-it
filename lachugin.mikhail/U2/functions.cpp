#include "functions.hpp"
namespace lachugin
{
  bool readMeeting(std::istream& in, Meeting& meeting)
  {
    in >> meeting.firstId >> meeting.secondId >> meeting.time;

    if (!in)
    {
      return false;
    }

    return true;
  }

}
