#pragma once
#ifndef CATA_SRC_MONATTACK_H
#define CATA_SRC_MONATTACK_H

class monster;
class Creature;

namespace mattack
{
bool none( monster *z );
bool absorb_items( monster *z );
bool browse( monster *z );
bool eat_carrion( monster *z );
bool eat_crop( monster *z );
bool eat_food( monster *z );
bool shriek( monster *z );
bool shriek_alert( monster *z );
bool shriek_stun( monster *z );
bool rattle( monster *z );
bool acid( monster *z );
bool acid_barf( monster *z );
bool shockstorm( monster *z );
bool shocking_reveal( monster *z );
bool pull_metal_weapon( monster *z );
bool resurrect( monster *z );
bool smash( monster *z );
void smash_specific( monster *z, Creature *target );
bool split( monster *z );
bool growplants( monster *z );
bool grow_vine( monster *z );
bool vine( monster *z );
bool spit_sap( monster *z );
bool triffid_heartbeat( monster *z );
bool fungus( monster *z );            // Generic fungal spore-launch
bool fungus_corporate( monster *z );   // Used by Crazy Cataclysm; spawns SpOreos(tm).
bool fungus_haze( monster *z );       // Broadly scatter aerobics
bool fungus_big_blossom( monster *z ); // Aerobic & anaerobic, as needed
bool fungus_inject( monster *z );     // Directly inject the spores
bool fungus_bristle( monster *z );    // Fungal hedgerow rake & inject
bool fungus_growth( monster *z );     // Sporeling -> fungal creature
bool fungus_sprout( monster *z );     // Grow fungal walls
bool fungus_fortify( monster *z );    // Grow fungal hedgerows
bool fungal_trail( monster *z );
bool plant( monster *z );
bool disappear( monster *z );
bool depart( monster *z );
bool formblob( monster *z );
bool callblobs( monster *z );
bool jackson( monster *z );
bool dance( monster *z );
bool dogthing( monster *z );
bool vortex( monster *z );
bool para_sting( monster *z );
bool triffid_growth( monster *z );
bool stare( monster *z );
bool nurse_check_up( monster *z );
bool nurse_assist( monster *z );
bool nurse_operate( monster *z );
bool check_money_left( monster *z );
bool photograph( monster *z );
bool tazer( monster *z );
bool searchlight( monster *z );
bool speaker( monster *z );
bool copbot( monster *z );
bool ratking( monster *z );
bool generator( monster *z );
bool upgrade( monster *z );
bool breathe( monster *z );
bool brandish( monster *z );
bool flesh_golem( monster *z );
bool absorb_meat( monster *z );
bool lunge( monster *z );
bool parrot( monster *z );
bool parrot_at_danger( monster *parrot );
bool darkman( monster *z );
bool slimespring( monster *z );
bool evolve_kill_strike( monster *z );
bool leech_spawner( monster *z );
bool mon_leech_evolution( monster *z );
bool tindalos_teleport( monster *z );
bool flesh_tendril( monster *z );
bool bio_op_random_biojutsu( monster *z );
bool bio_op_takedown( monster *z );
bool bio_op_impale( monster *z );
bool bio_op_disarm( monster *z );
bool suicide( monster *z );
bool riotbot( monster *z );
bool kamikaze( monster *z );
bool grenadier( monster *z );
bool grenadier_elite( monster *z );
bool doot( monster *z );
bool zombie_fuse( monster *z );
bool blow_whistle( monster *z );
bool graze( monster *z );

void taze( monster *z, Creature *target );

} //namespace mattack

#endif // CATA_SRC_MONATTACK_H
