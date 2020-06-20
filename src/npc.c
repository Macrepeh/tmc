#include "global.h"
#include "functions.h"
#include "entity.h"
#include "npc.h"

//clang-format off
void (*const gNPCFunctions[][3])(Entity* ent) = {
    { DeleteEntity, NULL, NULL },
    { Gentari, NULL, Gentari_Fusion },
    { Festari, NULL, Festari_Fusion },
    { ForestMinish, ForestMinish_Head, ForestMinish_Fusion },
    { Postman, NULL, Postman_Fusion },
    { NPC5, NULL, NULL },
    { Townsperson, Townsperson_Head, Townsperson_Fusion },
    { Kid, Kid_Head, Kid_Fusion },
    { Guard, Guard_Head, NULL },
    { NPC9, NULL, NULL },
    { Stamp, NULL, NULL },
    { Maid, Maid_Head, NULL },
    { Marcy, NULL, NULL },
    { Wheaton, NULL, NULL },
    { Pita, NULL, NULL },
    { MinishEzlo, MinishEzlo_Head, NULL },
    { Mailbox, NULL, NULL },
    { Beedle, Beedle_Head, NULL },
    { Brocco, NULL, Brocco_Fusion },
    { SittingPerson, SittingPerson_Head, SittingPerson_Fusion },
    { Pina, NULL, Pina_Fusion },
    { Guard, Guard_Head, NULL },
    { Maid, Maid_Head, NULL },
    { Din, NULL, Din_Fusion },
    { Nayru, NULL, Nayru_Fusion },
    { Farore, NULL, Farore_Fusion },
    { Sturgeon, Sturgeon_Head, Sturgeon_Fusion },
    { TingleSiblings, NULL, TingleSiblings_Fusion },
    { Stockwell, NULL, NULL },
    { Talon, Talon_Head, Talon_Fusion },
    { Malon, NULL, Malon_Fusion },
    { Epona, NULL, Epona_Fusion },
    { MilkCart, NULL, NULL },
    { GhostBrothers, NULL, GhostBrothers_Fusion },
    { Smith, Smith_Head, Smith_Fusion },
    { NPC23, NULL, NULL },
    { KingDaltus, NULL, KingDaltus_Fusion },
    { MinisterPotho, NULL, MinisterPotho_Fusion },
    { NPC26, NULL, NULL },
    { Vaati, NULL, NULL },
    { Zelda, NULL, NULL },
    { Mutoh, Mutoh_Head, Mutoh_Fusion },
    { Carpenter, Carpenter_Head, Carpenter_Fusion },
    { CastorWildsStatue, NULL, CastorWildsStatue_Fusion },
    { Cat, NULL, Cat_Fusion },
    { MountainMinish, MountainMinish_Head, MountainMinish_Fusion },
    { ZeldaFollower, NULL, NULL },
    { Melari, Melari_Head, Melari_Fusion },
    { BladeBrothers, NULL, BladeBrothers_Fusion },
    { Cow, NULL, Cow_Fusion },
    { Goron, NULL, Goron_Fusion },
    { GoronMerchant, NULL, NULL },
    { Gorman, Gorman_Head, NULL },
    { Dog, Dog_Head, Dog_Fusion },
    { Syrup, Syrup_Head, NULL },
    { Rem, NULL, NULL },
    { TownMinish, TownMinish_Head, TownMinish_Fusion },
    { Librari, NULL, Librari_Fusion },
    { Percy, Percy_Head, Percy_Fusion },
    { VaatiReborn, NULL, NULL },
    { MoblinLady, NULL, NULL },
    { Librarians, NULL, NULL },
    { Farmers, Farmers_Head, Farmers_Fusion },
    { Carlov, NULL, NULL },
    { Dampe, NULL, Dampe_Fusion },
    { DrLeft, NULL, NULL },
    { KingGustaf, NULL, NULL },
    { Gina, NULL, Gina_Fusion },
    { Simon, NULL, NULL },
    { Anju, NULL, Anju_Fusion },
    { Mama, Mama_Head, Mama_Fusion },
    { Emma, NULL, NULL },
    { Teachers, Teachers_Head, Teachers_Fusion },
    { WindTribespeople, WindTribespeople_Head, WindTribespeople_Fusion },
    { Gregal, NULL, Gregal_Fusion },
    { MayorHagen, NULL, MayorHagen_Fusion },
    { BigGoron, NULL, NULL },
    { EzloCap, NULL, NULL },
    { NPC4E, NULL, NPC4E_Fusion },
    { NPC4F, NULL, NULL },
    { ClothesRack, NULL, NULL },
    { PicolyteBottle, NULL, NULL },
    { SmallTownMinish, NULL, NULL },
    { HurdyGurdyMan, HurdyGurdyMan_Head, HurdyGurdyMan_Fusion },
    { Cucco, NULL, Cucco_Fusion },
    { CuccoChick, NULL, CuccoChick_Fusion },
    { FusionMenuNPC, FusionMenuNPC_Head, NULL },
    { Phonograph, NULL, NULL },
    { NPC58, NPC58_Head, NULL },
    { DeleteEntity, NULL, NULL },
    { DeleteEntity, NULL, NULL },
    { DeleteEntity, NULL, NULL },
    { DeleteEntity, NULL, NULL },
    { DeleteEntity, NULL, NULL },
    { DeleteEntity, NULL, NULL },
    { DeleteEntity, NULL, NULL },
    { DeleteEntity, NULL, NULL },
    { DeleteEntity, NULL, NULL },
    { DeleteEntity, NULL, NULL },
    { DeleteEntity, NULL, NULL },
    { DeleteEntity, NULL, NULL },
    { DeleteEntity, NULL, NULL },
    { DeleteEntity, NULL, NULL },
    { DeleteEntity, NULL, NULL },
    { DeleteEntity, NULL, NULL },
    { DeleteEntity, NULL, NULL },
    { DeleteEntity, NULL, NULL },
    { DeleteEntity, NULL, NULL },
    { DeleteEntity, NULL, NULL },
    { DeleteEntity, NULL, NULL },
    { DeleteEntity, NULL, NULL },
    { DeleteEntity, NULL, NULL },
    { DeleteEntity, NULL, NULL },
    { DeleteEntity, NULL, NULL },
    { DeleteEntity, NULL, NULL },
    { DeleteEntity, NULL, NULL },
    { DeleteEntity, NULL, NULL },
    { DeleteEntity, NULL, NULL },
    { DeleteEntity, NULL, NULL },
    { DeleteEntity, NULL, NULL },
    { DeleteEntity, NULL, NULL },
    { DeleteEntity, NULL, NULL },
    { DeleteEntity, NULL, NULL },
    { DeleteEntity, NULL, NULL },
    { DeleteEntity, NULL, NULL },
    { DeleteEntity, NULL, NULL },
    { DeleteEntity, NULL, NULL },
    { DeleteEntity, NULL, NULL }
};
//clang-format on
const u8 npc_unk[] = { 0x04, 0x05, 0x06, 0x06 };