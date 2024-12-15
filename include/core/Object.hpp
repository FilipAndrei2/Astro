#pragma once
#include <core/global.hpp>

namespace Filip::Core {
    class Object {
    #pragma region Deleted Constructors and operator = 
    public:
        Object() = delete;
        Object(const Object&) = delete;
        Object& operator =(const Object&) = delete;
    #pragma endregion
    
    #pragma region Destructor Virtual
    public:
        virtual ~Object() = default;
    #pragma endregion
    
    #pragma region Public methods
    public:
        virtual const char* ToStr() { return "Object";};
        virtual uint64_t GetHashCode() { return reinterpret_cast<uint64_t>(this); }

        virtual bool operator ==(const Object& other) { return this == &other; }
        virtual bool operator !=(const Object& other) { return this != &other; }
    #pragma endregion
    
    };
}