# Blackjack
Blackjack game in C and SDL2.

## Dependencies:
`SDL2, SDL2_image, SDL2_ttf`.

## Instructions:
```
git clone https://github.com/pineman/blackjack && cd blackjack
cd src && make
./blackjack config1.txt ea.txt
```
Where the first parameter contains the players' configuration and the 
second parameter is the strategy for the CPU players in this format:
https://en.wikipedia.org/wiki/Blackjack#Basic_strategy

### Controls:
 * q = quit
 * n = new game
 * r = surrender
 * d = double
 * b = bet
 * a = add player
 * s = stand
 * h = hit
 * up/down = increase/decrease CPU players' delay

### Features:
 * CPU players
 
### Developed by: 
  * [pineman](https://www.github.com/pineman)
  * [joajfreitas](https://www.github.com/joajfreitas)
