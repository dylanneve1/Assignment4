//
// Created by neved on 15/11/2023.
//

#include <iostream>

#include "Album.h"

Album::Album(std::string newArtist, std::string newTitle, int newYear) {
    this->artist = newArtist;
    this->title = newTitle;
    this->year = newYear;
}