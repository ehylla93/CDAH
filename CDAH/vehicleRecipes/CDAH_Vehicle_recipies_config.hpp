/**
 * CDAH-Mod-Pack
 * 
 * Author: Lotzo, Yesyesjo, Rashmandash
 *
 * Edited by Maletzki - AVMG.EU
 *
 * This work is licensed under a Creative Commons Attribution-NonCommercial 4.0 International License.
 */
 
class CDAH_AbstractCraftingRecipe
{
	name = "";
	category = "";
	pictureItem = ""; 
	returnedItems[] = {};
	components[] = {}; // Required components
	tools[] = {}; // Required tools (matches, gas cooker etc.)
	requiredInteractionModelGroup = ""; // See CDAHInteractionModels
	requiredInteractionVehicleGroup = ""; //CDAH VEHICLE REQUEST
	requiresFire = 0; // inflamed object nearby
	requiredVehicle = 0; 
	requiredBaseLevel = 0;
}; 
 
class CDAHVehicleRecipies
{
	#include "CDAH_Example_Receipe.hpp"
};