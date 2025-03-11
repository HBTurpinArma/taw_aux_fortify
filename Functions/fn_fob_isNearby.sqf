/*
    Function: TAW_fnc_fob_isNearby
    Description:
        Checks an area around an object to see if any specific object is nearby.

    Parameters:
        _object - The object to check around [OBJECT]

    Returns:
        BOOL - True if the any FOB is found, false otherwise
*/

params ["_object"];

private _nearbyFOBs = _object call TAW_fnc_fob_find;

if (count _nearbyFOBs > 0) exitWith { true };

false
