//
// Created by neved on 15/11/2023.
//

#include <iostream>
#include <string>

#include "Album.h"

Album::Album(std::string newArtist, std::string newTitle, int newYear) {
    this->artist = newArtist;
    this->title = newTitle;
    this->year = newYear;
}

std::string Album::GetArtist() const {
    return this->artist;
}

std::string Album::GetTitle() const {
    return this->title;
}

int Album::GetYear() const {
    return this->year;
}

bool Album::operator==(const Album &itemToCompare) const {
    bool ret;
    if (this->artist == itemToCompare.artist) {
        if (this->title == itemToCompare.title) {
            if (this->year == itemToCompare.year) {
                ret = true;
            } else {
                ret = false;
            }
        } else {
            ret = false;
        }
    } else {
        ret = false;
    }
    return ret;
}

bool Album::operator<(const Album &itemToCompare) const {
    bool ret;
    if (this->artist.length() > itemToCompare.artist.length()) {
        ret = true;
    } else {
        if (this->title.length() > itemToCompare.title.length()) {
            ret = true;
        } else {
            if (this->year > itemToCompare.year) {
                ret = true;
            } else {
                ret = false;
            }
        }
    }
    return ret;
}

Album::operator const char *() const {
    return nullptr;
}
