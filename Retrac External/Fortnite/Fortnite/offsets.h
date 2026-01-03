#pragma once
#include <cstdint>

namespace offsets {
    inline uintptr_t uworld = 0x9328900;
    inline uintptr_t GNames = 0x091D5140;
    inline uintptr_t Gameinstance = 0x180;
    inline uintptr_t LocalPlayers = 0x38;
    inline uintptr_t PlayerController = 0x30;
    inline uintptr_t LocalPawn = 0x2A0;
    inline uintptr_t PlayerState = 0x228;
    inline uintptr_t Rootcomp = 0x130;
    inline uintptr_t Persistentlevel = 0x30;
    inline uintptr_t ActorCount = 0xA0;
    inline uintptr_t AActors = 0x98;
    inline uintptr_t mesh = 0x280;
    inline uintptr_t CurActorRootComponent = 0x130;
    inline uintptr_t actorpos = 0x11C;
    inline uintptr_t otherPlayerState = 0x240;
    inline uintptr_t localactorpos = 0x11C;
    inline uintptr_t LastSubmitTime = 0x278;
    inline uintptr_t LastRenderTimeOnScreen = 0x280;
    inline uintptr_t CurrentWeapon = 0x05C0;
    inline uintptr_t weapon_data = 0x0378;
    inline uintptr_t TeamIndex = 0x1860;
    inline uintptr_t RelativeLocation = 0x011C;
}

namespace Game {
    inline uintptr_t ComponentToWorld = 0x1C0;
    inline uintptr_t bonearray = 0x488;
    inline uintptr_t chain69 = 0xa8;
    inline uintptr_t CameraX = 0x6E8;
    inline uintptr_t CameraY = 0x12C;
    inline uintptr_t chain = 0x70;
    inline uintptr_t chain1 = 0x98;
    inline uintptr_t chain2 = 0x130;
    inline uintptr_t zoom = 0x500;
}

namespace Exploits {
    inline uintptr_t GlobalAnimRateScale = 0x0770;
    inline uintptr_t bIsReloadingWeapon = 0x02B1;
    inline uintptr_t LastFireTime = 0x08DC;
    inline uintptr_t LastFireTimeVerified = 0x08E0;

}