/**
 * CDAH-Mod-Pack
 * 
 * Author: Lotzo, Yesyesjo, Rashmandash
 *
 * Edited by Maletzki - AVMG.EU
 *
 * This work is licensed under a Creative Commons Attribution-NonCommercial 4.0 International License.
 */

//Hellcat Armed
class Hellcat_armed: CDAH_AbstractCraftingRecipe {
	name = "Hellcat Armed";
	pictureItem = "I_Heli_light_03_F";
	requiresFire = 0;
	returnedItems[] =
	{
		{1, "I_Heli_light_03_F"}
	};
	components[] = 
	{
		{6, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_JunkMetal"},
		{3, "CDAH_crank_shaft_item"},
		{1, "CDAH_TruckBattery_item"},
		{1, "CDAH_CarBattery_item"},
		{2, "CDAH_carlamp_item"},
		{4, "CDAH_engine_item"},
		{4, "CDAH_piston_item"},
		{3, "Exile_Item_MetalScrews"},
		{2, "CDAH_car_seat_item"},
		{20, "CDAH_Projectiles_item"},
		{20, "CDAH_Gun_Powder_item"},
		{1, "Exile_Item_MetalPole"},
		{5, "CDAH_rotor_blade_item"}
	};
	tools[] = 
	{
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Wrench",
		"Exile_Item_Grinder",
		"Exile_Item_Hammer",
		"Exile_Item_Pliers"
	};
	requiredInteractionModelGroup = "AmmoContainer";
	category = "Armed Helis";
};