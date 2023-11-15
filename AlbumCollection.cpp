//
// Created by neved on 15/11/2023.
//

#include <iostream>

#include "AlbumCollection.h"

void AlbumCollection::InsertAlbum(string artist, string title, int year) {
    Album album(artist, title, year);
}

void AlbumCollection::Print() {
}

void AlbumCollection::PrintByTitleSubstring(string titleSubstring) {
}

void AlbumCollection::PrintByArtist(string artist) {
}

void AlbumCollection::PrintByYear(int year) {
}

bool AlbumCollection::ContainsTitle(string title) {
}

bool AlbumCollection::ContainsArtist(string artist) {
}

bool AlbumCollection::ContainsYear(int year) {
}

void AlbumCollection::DeleteAlbumByTitle(string titleToSearch) {
}

void AlbumCollection::DeleteAlbumsByArtist(string artistToSearch) {
}

int AlbumCollection::GetNumberAlbums() {
    int ret;
    return ret;
}
