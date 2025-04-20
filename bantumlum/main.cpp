#include <iostream>
#include <conio.h>      // _kbhit, _getch
#include <windows.h>    // Sleep
#include <vector>
#include <ctime>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

const int width = 20;
const int height = 10;

struct Enemy {
    int x, y;
};

struct Bullet {
    int x, y;
};

int playerX = width / 2;
vector<Enemy> enemies;
vector<Bullet> bullets;
bool gameOver = false;
int score = 0;

void draw() {
    system("cls"); // clear screen
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            if (x == playerX && y == height - 1)
                cout << '^'; // player
            else {
                bool printed = false;
                for (auto& e : enemies)
                    if (e.x == x && e.y == y) {
                        cout << 'E';
                        printed = true;
                        break;
                    }
                for (auto& b : bullets)
                    if (b.x == x && b.y == y) {
                        cout << '|';
                        printed = true;
                        break;
                    }
                if (!printed)
                    cout << ' ';
            }
        }
        cout << endl;
    }
    cout << "Score: " << score << endl;
}

void input() {
    if (_kbhit()) {
        switch (_getch()) {
            case 'a':
                if (playerX > 0) playerX--;
                break;
            case 'd':
                if (playerX < width - 1) playerX++;
                break;
            case ' ':
                bullets.push_back({playerX, height - 2});
                break;
        }
    }
}

void logic() {
    // Move bullets
    for (auto& b : bullets) b.y--;
    bullets.erase(remove_if(bullets.begin(), bullets.end(), [](Bullet& b){ return b.y < 0; }), bullets.end());

    // Move enemies
    for (auto& e : enemies) e.y++;
    enemies.erase(remove_if(enemies.begin(), enemies.end(), [](Enemy& e){ return e.y >= height; }), enemies.end());

    // Spawn enemy randomly
    if (rand() % 10 < 2) {
        enemies.push_back({rand() % width, 0});
    }

    // Bullet vs Enemy
    for (int i = 0; i < bullets.size(); i++) {
        for (int j = 0; j < enemies.size(); j++) {
            if (bullets[i].x == enemies[j].x && bullets[i].y == enemies[j].y) {
                bullets.erase(bullets.begin() + i);
                enemies.erase(enemies.begin() + j);
                score += 10;
                return;
            }
        }
    }

    // Enemy hits player
    for (auto& e : enemies) {
        if (e.y == height - 1 && e.x == playerX) {
            gameOver = true;
        }
    }
}

int main() {
    srand(time(0));
    while (!gameOver) {
        draw();
        input();
        logic();
        Sleep(100); // game speed
    }

    system("cls");
    cout << "GAME OVER!" << endl;
    cout << "Final Score: " << score << endl;
    return 0;
}
