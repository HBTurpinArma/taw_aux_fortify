/*
    Function: TAW_fnc_supplies_collectNearby
    Description:
        Recycles nearby supplies if any and adds resources to the budget.
*/

params ["_player"];

//Find nearby supplies
private _nearbySupplies = [_player, 50] call TAW_fnc_supplies_find;

//Check if the player has enough budget to spawn the vehicle. -1 == infinite.
private _budget = [side group _player] call ace_fortify_fnc_getBudget;

if (_budget != -1) then {
    {
        //Get the supply amount
        private _supplyAmount = [_x] call TAW_fnc_supplies_getValue;

        //Delete the object
        deleteVehicle _x;

        //Add resources to the budget
        systemChat format ["Supplies have been added to the budget. (%1)", _supplyAmount];
        [side group _player, _supplyAmount] call ace_fortify_fnc_updateBudget;
        
    } forEach _nearbySupplies;
};
