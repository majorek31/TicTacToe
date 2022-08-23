#include "BaseObject.h"
ObjectType BaseObject::GetObjectType() {
	return this->objectType;
}
void BaseObject::SetObjectType(ObjectType type) {
	this->objectType = type;
}