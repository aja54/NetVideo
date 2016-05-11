/*
  Video.hpp

  Include file for Video class
*/

#ifndef VIDEO_H
#define VIDEO_H

#include <string>

class Video {
public:

    static const int REGULAR      = 0;
    static const int NEW_RELEASE  = 1;
    static const int CHILDRENS    = 2;

    // constructor
    Video(const std::string& title, int category);

    // movie title
    const std::string& getTitle() const;

    // movie price code
    int getCode() const;

    // set movie price code
    void setCategory(int new_category);

private:
    std::string title;
    int category;
};

#endif
