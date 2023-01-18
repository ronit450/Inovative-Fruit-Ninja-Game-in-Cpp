#include "Enemy.hpp"

class RottenFruit : public Enemy
{
    SDL_Rect src, mover;
    bool isClicked = false;

public:
    RottenFruit(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov);

    void draw(SDL_Renderer *, SDL_Texture *assets);
    int LifeDeduct();
    void dropEnemies();
    void animateEnemy();
    bool getIsClicked();
    void setIsClicked();
    SDL_Rect getMov();
};