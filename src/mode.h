#ifndef MODE_H
#define MODE_H

#include <deque>
#include <SFML/Graphics.hpp>

//Documented


//! A class responsible for handling different modes, as well as input 
/*!
 *  Which mode the ModeSwitcher is in determines which function from custom.cpp
 *  is called to handle input.
 *  
 */
class ModeSwitcher {  //this may need a cleanup function for switching modes
private:
  int mode;  //!< Which mode the engine is in
  std::deque<sf::Keyboard::Key> keyList;  //!< The queue of keys pressed
public:
  //! Gets the mode of the engine
  int getMode();
  //! Sets the mode of the engine
  void setMode(int);
  //! Adds a key to the queue
  void addKey(sf::Keyboard::Key);
  //! Removes the next key to be handled, and returns it
  sf::Keyboard::Key getLastKey();
  //! Pops a keypress, and assigns it to passed reference. Returns false if no keys left
  bool getLastKey(sf::Keyboard::Key&);
  //! Basic constructor: sets mode to 0
  ModeSwitcher();
};


#endif
