#include "study_in_pink2.h"

////////////////////////////////////////////////////////////////////////
/// STUDENT'S ANSWER BEGINS HERE
/// Complete the following functions
/// DO NOT modify any parameters in the functions.
////////////////////////////////////////////////////////////////////////

//Task 1
enum ElementType {PATH, WALL,FAKE_WALL};

class MapElement{
protected:
    ElementType type;

public:
    MapElement(ElementType in_type) : type(in_type){}
    virtual ~MapElement() {}
    virtual ElementType getType() const {
        return type;
    }
};
class Path : public MapElement {
public:
      Path() : MapElement(PATH) {}
};

class Wall : public MapElement {
public:
    Wall() : MapElement(WALL) {}
};

class FakeWall : public MapElement {
private:
      int getReqExp() const {
        return req_exp;
      }
};


////////////////////////////////////////////////
/// END OF STUDENT'S ANSWER
////////////////////////////////////////////////