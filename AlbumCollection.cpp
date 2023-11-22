//
// Created by neved on 15/11/2023.
//

#include <iostream>

#include "AlbumCollection.h"

void AlbumCollection::InsertAlbum(string artist, string title, int year) {
    Album album(artist, title, year);
    setAlbums.insert(album);
}

void AlbumCollection::Print() {
    for (auto &i: setAlbums) {
        cout << i.GetArtist() << ", " << i.GetTitle() << " (" << i.GetYear() << ")" << endl;
    }
}

void AlbumCollection::PrintByTitleSubstring(string titleSubstring) {
    for (auto &i: setAlbums) {
        if (i.GetTitle().find(titleSubstring) != string::npos) {
            cout << i.GetArtist() << ", " << i.GetTitle() << " (" << i.GetYear() << ")" << endl;
        }
    }
}

void AlbumCollection::PrintByArtist(string artist) {
    for (auto &i: setAlbums) {
        if (i.GetArtist() == artist) {
            cout << i.GetArtist() << ", " << i.GetTitle() << " (" << i.GetYear() << ")" << endl;
        }
    }
}

void AlbumCollection::PrintByYear(int year) {
    for (auto &i: setAlbums) {
        if (i.GetYear() == year) {
            cout << i.GetArtist() << ", " << i.GetTitle() << " (" << i.GetYear() << ")" << endl;
        }
    }
}

bool AlbumCollection::ContainsTitle(string title) {
    bool ret = false;
    for (auto &i: setAlbums) {
        if (i.GetTitle() == title) {
            ret = true;
        }
    }
    return ret;
}

bool AlbumCollection::ContainsArtist(string artist) {
    bool ret;
    for (auto &i: setAlbums) {
        if (i.GetArtist() == artist) {
            ret = true;
            break;
        } else {
            ret = false;
        }
    }
    return ret;
}

bool AlbumCollection::ContainsYear(int year) {
    bool ret;
    for (auto &i: setAlbums) {
        if (i.GetYear() == year) {
            ret = true;
            break;
        } else {
            ret = false;
        }
    }
    return ret;
}

void AlbumCollection::DeleteAlbumByTitle(string titleToSearch) {
    bool found = false;
    for (auto &i: setAlbums) {
        if (i.GetTitle() == titleToSearch) {
            found = true;
            setAlbums.erase(i);
            if (ContainsTitle(titleToSearch)) {
                DeleteAlbumByTitle(titleToSearch);
            }
            return;
        }
    }
    cout << "No album found!" << endl;
}

void AlbumCollection::DeleteAlbumsByArtist(string artistToSearch) {
    bool found = false;
    while (ContainsArtist(artistToSearch)) {
        for (auto &i: setAlbums) {
            if (i.GetArtist() == artistToSearch) {
                if (!found) {
                    found = true;
                }
                setAlbums.erase(i);
            }
        }
    }
    if (!found) {
        cout << "No album found!" << endl;
    }
}

int AlbumCollection::GetNumberAlbums() {
    int ret;
    ret = setAlbums.size();
    return ret;
}
