/*
    Function: fn_fobNearby
    Description:
        Checks an area around an object to see if any specific object is nearby.

    Parameters:
        _position - The object to check around [POSITION]
        _radius - The radius to check within [NUMBER]
        _type - The type of object to look for [STRING]

    Returns:
        BOOL - True if the any FOB is found, false otherwise
*/

params ["_position"];

private _nearbyFOBs = TAW_AUX_FORTIFY_fnc_fobSearch _position;

if (count _nearbyFOBs > 0) then {
    true
} else {
    false
};