//
//  Game.cpp
//  Kono
//
//  Created by Ryan Temple on 1/23/18.
//  Copyright © 2018 Ryan Temple. All rights reserved.
//

#include "Game.hpp"
#include <iostream>
#include <string>
using namespace std;

Game::Game() {
    this->board = Board();
}

void Game::setUpBoard() {
    int size;
    cout << "Enter a size: 5, 7, 9" << endl;
    cin >> size;
    this->board.setBoardSize(size);
    this->board.drawBoard();
}

void Game::determineOrder() {
    int player1Score = 0;
    int player2Score = 1;
    
    //If they are same value, recursively call determine order.
    if (player1Score == player2Score) {
        determineOrder();
        return;
    }
    
    chooseColor();
}

void Game::chooseColor() {
    //Determine who first player
    string color;
    cout << "Player 1 you choose color: B or W" << endl;
    cin >> color;
    
    cout << "You are color: " << color << endl;
}