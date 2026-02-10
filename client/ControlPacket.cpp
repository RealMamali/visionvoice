/*
    This is a visionvoice project file
    Developer: RealMamali <mohamadalinorouzi372@gmail.com>

    See more here https://github.com/Mamali/visionvoice

    Copyright (c) RealMamali 2026 All rights reserved
*/

#include "ControlPacket.h"

DWORD ControlPacket::GetFullSize() const noexcept
{
    return sizeof(*this) + this->length;
}
