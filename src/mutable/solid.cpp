#include "mutable/solid.h"

Solid::Solid(int uid) : Object(uid) {}


bool Solid::verify() {
  //doesn't use any args or switches, those can be ignored
  //if texture-id is invalid, stone is used.
  //Thus, no invalid configs exist
  return true;
}

Interface Solid::interact(Object* p, Field* f, SwitchHandler*) {
  return Interface();
}



CacheNodeAttributes Solid::draw(const TextureCache* cache) {
  // draw a solid object with no transforms
  // use obj_arg[0] to decide which texture to draw
  CacheNodeAttributes cna;
  switch(texture_id) {
  case 7:
    cna.srcImg = cache->reverseHash("yim");
    break;
  default:
    cna.srcImg = cache->reverseHash("stone");
  //other textures can be placed here for more design freedom
  }
  //no transforms, so tlist is left blank
  return cna;
}
