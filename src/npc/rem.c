#include "global.h"
#include "functions.h"
#include "entity.h"
#include "script.h"

extern void sub_0807DDE4(Entity*);
extern void SoundReq(u32);
extern void sub_0806A8C8(Entity*);

extern void (*gUnk_08112260[])(Entity*);
extern void (*gUnk_08112278[])(Entity*);

extern void gUnk_08012F0C;

void Rem(Entity* this) {
    gUnk_08112260[this->type](this);
}

void sub_0806a370(Entity* this) {
    u8* pbVar1;

    gUnk_08112278[this->action](this);
    sub_0807DDAC(this, NULL);
    sub_0807DDE4(this);
    UpdateAnimationSingleFrame(this);
    sub_0806ED78(this);
    if (this->animIndex == 0xf) {
        pbVar1 = &this->frames.all;
        if (*pbVar1 == 1) {
            *pbVar1 = 0;
            SoundReq(0x218);
        }
        if (*pbVar1 == 2) {
            *pbVar1 = 0;
            SoundReq(0x219);
        }
    }
}

void sub_0806A3D8(Entity* this) {
    ScriptExecutionContext* uVar1;

    this->action = 1;
    this->actionDelay = 0xb4;
    sub_0805E3A0(this, 2);
    sub_0806A8C8(this);
    uVar1 = StartCutscene(this, &gUnk_08012F0C);
    *(ScriptExecutionContext**)&this->cutsceneBeh = uVar1;
    sub_0807DD94(this, NULL);
}
