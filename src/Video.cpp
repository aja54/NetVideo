/*
  Video.cpp

  Definition file for Video class
*/

#include "Video.hpp"

// constructor
Video::Video(const std::string& title, int category)
    : title(title), category(category)
{ }

// movie title
const std::string& Video::getTitle() const {

    return title;
}

// movie category
int Video::getCode() const {

    return catego;
}

// set movie category
void Video::setCategory(int new_category) {

    categ = new_category;
}
