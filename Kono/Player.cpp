//
//  Player.cpp
//  Kono
//
//  Created by Ryan Temple on 1/23/18.
//  Copyright © 2018 Ryan Temple. All rights reserved.
//

#include "Player.hpp"

Player:: Player() {
    
}

void Player:: setTurn(bool turn) {
    this->isTurn = turn;
}

bool Player:: getIsTurn() {
    return this->isTurn;
}

void Player::setColor(char color) {
    this->color = color;
}

char Player::getColor() {
    return this->color;
}

void Player::play() {
    
}
