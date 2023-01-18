#include <SDL.h>
#include "Enemy.hpp"
#include "Fruit.hpp"
#include "Bomb.hpp"
#include "RottenFruit.hpp"
#include "Fish.hpp"
#include "Banana.hpp"
#include "Kiwi.hpp"
#include "Orange.hpp"
#include "Watermelon.hpp"
#include "Lemon.hpp"
#include "Collectible.hpp"
#include "Health.hpp"
#include "Diamond.hpp"
#include "Score.hpp"
#include "HealthPoints.hpp"
#include <list>
#include <SDL_ttf.h>
using namespace std;
#include <string>

class CuttingBoard
{
    list<Fruit *> Fruits;
    list<Enemy *> Enemies;
    list<Collectible *> Collectibles;
    SDL_Renderer *gRenderer;
    SDL_Texture *assets;
    Score totalScore;
    HealthPoints totalHealth;

public:
    CuttingBoard(SDL_Renderer *, SDL_Texture *, Score &, HealthPoints &);
    void drawObjects();
    void displayHealth();
    void displayScore();
    void createObject();
    void checkMouseClick(int, int, int &);
    void deleteObjects();
    // void dropObjects();
    // void fire();
    ~CuttingBoard();
};