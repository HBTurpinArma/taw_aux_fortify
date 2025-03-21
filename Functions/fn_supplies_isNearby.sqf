/*
    Function: TAW_fnc_supplies_isNearby
    Description:
        Returns true if there are any nearby supplies;
        
    Parameters:
        _object - The object to check around [OBJECT]

    Returns:
        BOOL - True if the any supplies are found, false otherwise.
*/

params ["_object"];

private _nearbySupplies = [_object, 50] call TAW_fnc_supplies_find;

if (count _nearbySupplies > 0) exitWith { true };

false
