#include "mode.h"

//this is for the mode switcher, one of the crucial components of stellar enigma

int ModeSwitcher::getMode() {
  return mode;
}
void ModeSwitcher::setMode(int n) {
  mode = n;
}
void ModeSwitcher::addKey(sf::Keyboard::Key key) {
  keyList.push_back(key);
}
sf::Keyboard::Key ModeSwitcher::getLastKey() {
  sf::Keyboard::Key e;
  e = keyList.front();
  keyList.pop_front();
  return e;
}
bool ModeSwitcher::getLastKey(sf::Keyboard::Key& sk) {
  if(keyList.size() == 0)
    return false;
  sk = keyList.front();
  keyList.pop_front();
  return true;
}
void ModeSwitcher::ignoreKeypresses() {
  keyList.clear();
}

ModeSwitcher::ModeSwitcher() {
  mode = 0;
}
