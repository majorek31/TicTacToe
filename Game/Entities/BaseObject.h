#pragma once
#include "../Types/ObjectType.h"
class BaseObject {
public:
	ObjectType GetObjectType();
	void SetObjectType(ObjectType type);
private:
	ObjectType objectType = ObjectType::OBJECT_NULL;
};