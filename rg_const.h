#ifndef RG_CONST_H
#define RG_CONST_H

/*
#  This program is free software; you can redistribute it and/or modify
#  it under the terms of the GNU General Public License as published by
#  the Free Software Foundation; either version 2 of the License, or
#  (at your option) any later version.
#  
#  This program is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#  GNU General Public License for more details.
#  
#  You should have received a copy of the GNU General Public License
#  along with this program; if not, write to the Free Software
#  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
#  MA 02110-1301, USA.
*/

#define RG_CONST_VERSION "1.0"

// Konstanten

//////////////////////////////
// Einheiten/Troops -> troops
//////////////////////////////

// Elitetruppe/Elite force -> elite_force
// 1 = 1439780 C, 60 stk. Waffen, 30 m3 Elektronik, 1 kg Gold
#define ELITE_FORCE_ITEMID                          99
#define ELITE_FORCE_UNIT                            "unit"
#define ELITE_FORCE_UNIT_AMOUNT                     1
#define ELITE_FORCE_MATERIALS_CREDITS               1439780
#define ELITE_FORCE_MATERIAL_WEAPONS                60
#define ELITE_FORCE_MATERIAL_ELECTRONICS            30
#define ELITE_FORCE_MATERIAL_GOLD                   1


// Privatarmee/Private army -> private_army
// 1 = 14394651 C, 120 stk Waffen, 60 m3 Elektronik, ? Schmuck
#define PRIVATE_ARMY_ITEMID                         104
#define PRIVATE_ARMY_UNIT                           "unit"
#define PRIVATE_ARMY_UNIT_AMOUNT                    1
#define PRIVATE_ARMY_CREDITS                        14394651
#define PRIVATE_ARMY_WEAPONS                        120
#define PRIVATE_ARMY_ELECTRONICS                    60
#define PRIVATE_ARMY_JEWELLERY                      ?
            

// Gangster/Gangster -> gangster
// 1 = 1610169 C, 40 stk Waffen, 20 m3 Elektronik, 1 kg Silber
#define GANGSTER_ITEMID                             103
#define GANGSTER_UNIT                               "unit"
#define GANGSTER_UNIT_AMOUNT                        1
#define GANGSTER_CREDITS                            1610169
#define GANGSTER_WEAPONS                            40
#define GANGSTER_ELECTRONICS                        20
#define GANGSTER_SILVER                             1


//  Wachhunde/Watch dogs -> watch_dogs
// 1 = 20246 C, 5 m3 Stahl, 5 stk. Fossilien
#define WATCH_DOGS_ITEMID                           96
#define WATCH_DOGS_UNIT                             "unit"
#define WATCH_DOGS_UNIT_AMOUNT                      1
#define WATCH_DOGS_CREDITS                          20246
#define WATCH_DOGS_STEEL                            5
#define WATCH_DOGS_FOSSILS                          5


// Kampfhunde/Attack dogs ->attack_dogs
// 1 = 202142 C, 10 m3 Stahl, 50 stk. Fossilien
#define ATTACK_DOGS_ITEMID                          102
#define ATTACK_DOGS_UNIT                            "unit"
#define ATTACK_DOGS_UNIT_AMOUNT                     1
#define ATTACK_DOGS_CREDITS                         202142
#define ATTACK_DOGS_STEEL                           10
#define ATTACK_DOGS_FOSSILS                         50


// Wachpersonal/Security Staff ->security_staff
// 1 = 160826 C, 5 stk. Waffen, 10 m3 Elektronik, 50 kg Silber
#define SECURITY_STAFF_ITEMID                       98
#define SECURITY_STAFF_UNIT                         "unit"
#define SECURITY_STAFF_UNIT_AMOUNT                  1
#define SECURITY_STAFF_CREDITS                      160826
#define SECURITY_STAFF_WEAPONS                      5
#define SECURITY_STAFF_ELECTRONICS                  10
#define SECURITY_STAFF_SILVER                       50


////////////////////////////
// Fundobjekte/Loot -> loot
////////////////////////////

// Alte Reifen/Old tires -> old_tires
#define OLD_TIRES_ITEMID                            57
#define OLD_TIRES_UNIT                              "piece"

// Altglas/Waste glass -> waste_glass
#define WASTE_GLASS_ITEMID                          115
#define WASTE_GLASS_UNIT                            "cbm"

// Altmetall/Scrap metal -> scrap_metal
#define SCRAP_METAL_ITEMID                          70
#define SCRAP_METAL_UNIT                            "cbm"

// Altöl/Used oil -> used_oil
#define USED_OIL_ITEMID                             74
#define USED_OIL_UNIT                               "cbm"

// Drohnenwrack/Drone wreckage -> drone_wreckage
#define DRONE_WRECKAGE_ITEMID                       120
#define DRONE_WRECKAGE_UNIT                         "piece"

// Elektronikschrott/Electronic scrap -> electronic_scrap
#define ELECTRONIC_SCRAP_ITEMID                     78
#define ELECTRONIC_SCRAP_UNIT                       "cbm"

// Fossilien/Fossils -> fossils
#define FOSSILS_ITEMID                              41
#define FOSSILS_UNIT                                "piece"

// Kunststoffschrott/Plastic scrap -> plastic_scrap
#define PLASTIC_SCRAP_ITEMID                        77
#define PLASTIC_SCRAP_UNIT                          "cbm"

// Kupfermünzen/Copper coins -> copper_coins
#define COPPER_COINS_ITEMID                         55
#define COPPER_COINS_UNIT                           "piece"

// Riesendiamant/Giant diamond -> giant_diamond
#define GIANT_DIAMOND_ITEMID                        42
#define GIANT_DIAMOND_UNIT                          "piece"

// Römische Münzen/Roman coins -> roman_coins
#define ROMAN_COINS_ITEMID                          40
#define ROMAN_COINS_UNIT                            "piece"

// Tech-Upgrade 1/Tech-Upgrade 1 -> tech_upgrade_one
#define TECH_UPGRADE_ONE_ITEMID                     44
#define TECH_UPGRADE_ONE_UNIT                       "piece"

// Tech-Upgrade 2/Tech-Upgrade 2 -> tech_upgrade_two
#define TECH_UPGRADE_TWO_ITEMID                     45
#define TECH_UPGRADE_TWO_UNIT                       "piece"

// Tech-Upgrade 3/Tech-Upgrade 3 -> tech_upgrade_three
#define TECH_UPGRADE_THREE_ITEMID                   46
#define TECH_UPGRADE_THREE_UNIT                     "piece"

// Tech-Upgrade 4/Tech-Upgrade 4 -> tech_upgrade_four
#define TECH_UPGRADE_FOUR_ITEMID                    48
#define TECH_UPGRADE_FOUR_UNIT                      "piece"

// Wartungskit/Maintenance kit -> maintenance_kit
#define MAINTENANCE_KIT_ITEMID                      43
#define MAINTENANCE_KIT_UNIT                        "piece"


/////////////////////////////////////
// Ressourcen/Resources -> resources
////////////////////////////////////

// Bauxit/Bauxite -> bauxite
#define BAUXITE_ITEMID                              12
#define BAUXITE_UNIT                                "cbm"

// Eisenerz/Iron ore -> iron_ore
#define IRON_ORE_ITEMID                             13
#define IRON_ORE_UNIT                               "cbm"

// Golderz/Gold ore -> gold_ore
#define GOLD_ORE_ITEMID                             14
#define GOLD_ORE_UNIT                               "cbm"

// Ilmenit/Ilmenite -> ilmenite
#define ILMENITE_ITEMID                             49
#define ILMENITE_UNIT                               "cbm"

// Kalkstein/Limestone -> limestone
#define LIMESTONE_ITEMID                            20
#define LIMESTONE_UNIT                              "cbm"

// Kies/Gravel -> gravel
#define GRAVEL_ITEMID                               3
#define GRAVEL_UNIT                                 "cbm"

// Kohle/Coal -> coal
#define COAL_ITEMID                                 8
#define COAL_UNIT                                   "cbm"

// Kupferkies/Chalcopyrite -> chalcopyrite
#define CHALCOPYRITE_ITEMID                         26
#define CHALCOPYRITE_UNIT                           "cbm"

// Lehm/Clay -> clay
#define CLAY_ITEMID                                 2
#define CLAY_UNIT                                   "cbm"

// Lithiumerz/Lithium ore -> lithium_ore
#define LITHIUM_ORE_ITEMID                          90
#define LITHIUM_ORE_UNIT                            "cbm"

// Quarzsand/Quartz sand -> quartz_sand
#define QUARTZ_SAND_ITEMID                          53
#define QUARTZ_SAND_UNIT                            "cbm"

// Rohdiamanten/Rough diamonds -> rough_diamonds
#define ROUGH_DIAMONDS_ITEMID                        81
#define ROUGH_DIAMONDS_UNIT                         "cbm"

// Rohöl/Crude oil -> crude_oil
#define CRUDE_OIL_ITEMID                            10
#define CRUDE_OIL_UNIT                              "cbm"

// Silbererz/Silver ore -> silver_ore
#define SILVER_ORE_ITEMID                           15
#define SILVER_ORE_UNIT                             "cbm"


/////////////////////////////////
// Produkte/Products -> products
////////////////////////////////

// Aluminium/Aluminium -> aluminium
//  4 m3 = 5000 C, 24 m3 Bauxit
#define ALUMINIUM_ITEMID                            32
#define ALUMINIUM_UNIT                              "cbm"
#define ALUMINIUM_UNIT_AMOUNT                       4
#define ALUMINIUM_MATERIALS_CREDITS                 5000
#define ALUMINIUM_MATERIALS_BAUXITE                 24

// Batterien/Batteries -> batteries
// 10 MWh = 75000 C, 20 Lithium, 40 Kunststoffe, 10 aluminium
#define BATTERIES_ITEMID                            93
#define BATTERIES_UNIT                              "MWh"
#define BATTERIES_UNIT_AMOUNT                       10
#define BATTERIES_MATERIALS_CREDITS                 75000
#define BATTERIES_MATERIALS_LITHIUM                 20
#define BATTERIES_MATERIALS_PLASTICS                40
#define BATTERIES_MATERIALS_ALUMINIUM               10

// Beton/Concrete -> concrete
// 14 m3 = 20 C, 3 Kies, 2 Kalkstein
#define CONCRETE_ITEMID                             7
#define CONCRETE_UNIT                               "cbm"
#define CONCRETE_UNIT_AMOUNT                        14
#define CONCRETE_MATERIALS_CREDITS                  20
#define CONCRETE_MATERIALS_GRAVEL                   3
#define CONCRETE_MATERIALS_LIMESTONE                2

// Düngemittel/Fertilizer -> fertilizer
// 11 m3 = 90 C, 8 Kalkstein
#define FERTILIZER_ITEMID                           22
#define FERTILIZER_UNIT                             "cbm"
#define FERTILIZER_UNIT_AMOUNT                      11
#define FERTILIZER_MATERIALS_CREDITS                90
#define FERTILIZER_MATERIALS_LIMESTONE              8

// Elektronik/Electronics -> electronics
// 8 m3 = 5000 C, 4 Kunststoffe, 3 Kupfer, 1 Silizium
#define ELECTRONICS_ITEMID                          66
#define ELECTRONICS_UNIT                            "cbm"
#define ELECTRONICS_UNIT_AMOUNT                     8
#define ELECTRONICS_MATERIALS_CREDITS               5000
#define ELECTRONICS_MATERIALS_PLASTICS              4
#define ELECTRONICS_MATERIALS_COPPER                3
#define ELECTRONICS_MATERIALS_SILICON               1

// Foss. Brenstoffe/Fossil fuel -> fossil_fuel
// 4 m3 = 150 C, 4 Rohöl
#define FOSSIL_FUEL_ITEMID                          38
#define FOSSIL_FUEL_UNIT                            "cbm"
#define FOSSIL_FUEL_UNIT_AMOUNT                     4
#define FOSSIL_FUEL_MATERIALS_CREDITS               150
#define FOSSIL_FUEL_MATERIALS_CRUDE_OIL             4

// Glas/Glass -> glass
// 8 m3 = 3000 C, 6 Quarzsand, 8 fossil_fuel, 4 Kalkstein
#define GLASS_ITEMID                                60
#define GLASS_UNIT                                  "cbm"
#define GLASS_UNIT_AMOUNT                           8
#define GLASS_MATERIALS_CREDITS                     3000
#define GLASS_MATERIALS_QUARTZ_SAND                 6
#define GLASS_MATERIALS_FOSSIL_FUEL                 8
#define GLASS_MATERIALS_LIMESTONE                   4

// Gold/Gold -> gold
// 3 kg = 20000 C, 20 Golderz
#define GOLD_ITEMID                                 79
#define GOLD_UNIT                                   "kg"
#define GOLD_UNIT_AMOUNT                            3
#define GOLD_MATERIALS_CREDITS                      20000
#define GOLD_MATERIALS_GOLD_ORE                     20

// Insektizide/Insecticides -> insecticides
// 35 m3 = 2400 C, 1 Kupfer, 3 Kalkstein
#define INSECTICIDES_ITEMID                         28
#define INSECTICIDES_UNIT                           "cbm"
#define INSECTICIDES_UNIT_AMOUNT                    35
#define INSECTICIDES_MATERIALS_CREDITS              2400
#define INSECTICIDES_MATERIALS_COPPER               1
#define INSECTICIDES_MATERIALS_LIMESTONE            3

// Kunststoffe/Plastics -> plastics
// 10 m3 = 400 C, 1 Rohöl
#define PLASTICS_ITEMID                             58
#define PLASTICS_UNIT                               "cbm"
#define PLASTICS_UNIT_AMOUNT                        10
#define PLASTICS_MATERIALS_CREDITS                  400
#define PLASTICS_MATERIALS_CRUDE_OIL                1

// Kupfer/Copper -> copper
// 3 m3 = 2500 C, 9 Kupferkies
#define COPPER_ITEMID                               36
#define COPPER_UNIT                                 "cbm"
#define COPPER_UNIT_AMOUNT                          3
#define COPPER_MATERIALS_CREDITS                    2500
#define COPPER_MATERIALS_CHALCOPYRITE               9

// Lithium/Lithium -> lithium
// 5 m3 = 5000 C, 115 Lithiumerz
#define LITHIUM_ITEMID                              92
#define LITHIUM_UNIT                                "cbm"
#define LITHIUM_UNIT_AMOUNT                         5
#define LITHIUM_MATERIALS_CREDITS                   5000
#define LITHIUM_MATERIALS_LITHIUM_ORE               115

// Medizintechnik/Medical technology -> medical_technology
// 10 m3 = 90000 C, 4 Titan, 2 Kunststoffe, 2 Elektronik
#define MEDICAL_TECHNOLOGY_ITEMID                   75
#define MEDICAL_TECHNOLOGY_UNIT                     "cbm"
#define MEDICAL_TECHNOLOGY_UNIT_AMOUNT              10
#define MEDICAL_TECHNOLOGY_MATERIALS_CREDITS        90000
#define MEDICAL_TECHNOLOGY_MATERIALS_TITANIUM       4
#define MEDICAL_TECHNOLOGY_MATERIALS_PLASTICS       2
#define MEDICAL_TECHNOLOGY_MATERIALS_ELECTRONICS    2

// Scandrohnen/Scan drones -> scan_drones
// 1 stk = 25000000 C, 25 Elektronik, 50 Titan, 250 Batterien
#define SCAN_DRONES_ITEMID                          117
#define SCAN_DRONES_UNIT                            "unit"
#define SCAN_DRONES_UNIT_AMOUNT                     1
#define SCAN_DRONES_MATERIALS_CREDITS               25000000
#define SCAN_DRONES_MATERIALS_ELECTRONICS           25
#define SCAN_DRONES_MATERIALS_TITANIUM              50
#define SCAN_DRONES_MATERIALS_BATTERIES             250

// Schmuck/Jewellery -> jewellery
// 2 kg = 50000 C, 1000 Rohdiamanten, 1 Gold, 1 Silber
#define JEWELLERY_ITEMID                            84
#define JEWELLERY_UNIT                              "kg"
#define JEWELLERY_UNIT_AMOUNT                       2
#define JEWELLERY_MATERIALS_CREDITS                 50000
#define JEWELLERY_MATERIALS_ROUGH_DIAMONDS          1000
#define JEWELLERY_MATERIALS_GOLD                    1
#define JEWELLERY_MATERIALS_SILVER                  1

// Silber/Silver -> silver
// 50 kg = 10000 C, 8 Silbererz
#define SILVER_ITEMID                               35
#define SILVER_UNIT                                 "kg"
#define SILVER_UNIT_AMOUNT                          50
#define SILVER_MATERIALS_CREDITS                    10000
#define SILVER_MATERIALS_SILVER_ORE                 8

// Silizium/Silicon -> silicon
// 2 m3 = 49500 C, 20 Quarzsand, 1 Lehm, 5 fossil_fuel
#define SILICON_ITEMID                              67
#define SILICON_UNIT                                "cbm"
#define SILICON_UNIT_AMOUNT                         2
#define SILICON_MATERIALS_CREDITS                   49500
#define SILICON_MATERIALS_QUARTZ_SAND               20
#define SILICON_MATERIALS_CLAY                      1
#define SILICON_MATERIALS_FOSSIL_FUEL               5

// Stahl/Steel -> steel
// 1 m3 = 350 C, 7 Eisenerz, 10 Kohle
#define STEEL_ITEMID                                30
#define STEEL_UNIT                                  "cbm"
#define STEEL_UNIT_AMOUNT                           1
#define STEEL_MATERIALS_CREDITS                     350
#define STEEL_MATERIALS_IRON_ORE                    7
#define STEEL_MATERIALS_COAL                        10

// Titan/Titanium -> titanium
// 4 m3 = 10000 C, 8 ilmenite
#define TITANIUM_ITEMID                             51
#define TITANIUM_UNIT                               "cbm"
#define TITANIUM_UNIT_AMOUNT                        4
#define TITANIUM_MATERIALS_CREDITS                  10000
#define TITANIUM_MATERIALS_ILMENITE                 8

// Waffen/Weapons -> weapons
// 25 stk = 250000 C, 1 Stahl, 1 aluminium, 1 Batterien
#define WEAPONS_ITEMID                              87
#define WEAPONS_UNIT                                "unit"
#define WEAPONS_UNIT_AMOUNT                         25
#define WEAPONS_MATERIALS_CREDITS                   250000
#define WEAPONS_MATERIALS_STEEL                     1
#define WEAPONS_MATERIALS_ALUMINIUM                 1
#define WEAPONS_MATERIALS_BATTERIES                 1

// Ziegel/Bricks -> bricks
// 2 m3 = 10 C, 3 Lehm
#define BRICKS_ITEMID                               24
#define BRICKS_UNIT                                 "cbm"
#define BRICKS_UNIT_AMOUNT                          2
#define BRICKS_MATERIALS_CREDITS                    10
#define BRICKS_MATERIALS_CLAY                       3


////////////////////
// HQ resources
///////////////////

//Kalkstein	        Kies	    Lehm	        Kohle
#define HQ_TWO      750000;
//Düngemittel	    Beton	    Ziegel	        Eisenerz
#define HQ_THREE    1500000;
//Bauxit            Röhöl	    Kupferkies	    Quarzsand
#define HQ_FOUR     2000000;
//foss. Brennstoffe	Kupfer	    Stahl	        Insektizide
#define HQ_FIVE     3000000;
//Aluminium	        Lithiumerz	Ilmenit	        Lithium
#define HQ_SIX      4000000;
//Glas	            Silizium	Batterien	    Kunststoff
#define HQ_SEVEN    5000000;
//ilbererz	        Golderz	    Rohdiamanten	Titan
#define HQ_EIGHT    10000000;
//Elektronik	    Silber	    Gold	        Medizintechnik
#define HQ_NINE     25000000;
//Waffen	        Schmuck	    Scandrohnen	    ???
#define HQ_TEN      50000000;

#endif // RG_CONST_H