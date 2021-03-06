#include "global.h"
#include "entity.h"
#include "functions.h"
#include "save.h"
#include "script.h"

extern void sub_0807DD64(Entity*);
extern void sub_0807DDE4(Entity*);
extern void sub_08078850(Entity*, u32, u32, u8*);
extern void SoundReq(u32);
extern Entity* CreateFx(Entity*, u32, u32);

extern u8 gUnk_08125010;

void Windcrest(Entity* this) {
    if (this->action == 0) {
        this->action++;
        this->frameIndex = 0;
        sub_0807DD64(this);
    }
    sub_0807DDAC(this, NULL);
    sub_0807DDE4(this);
}

void sub_080A2124(Entity* this) {
    sub_08078850(this, 1, 0xe, &gUnk_08125010);
}

void Windcrest_Unlock(Entity* this) {
    SoundReq(0x72);
    gSave.windcrests = gSave.windcrests | 1 << (this->type2 + 0x18);
    CreateFx(this, 0x46, 0);
}
