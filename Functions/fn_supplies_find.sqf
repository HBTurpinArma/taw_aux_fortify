/*
    Function: TAW_fnc_supplies_find
    Description:
        Finds and returns nearby supplies in the area.

    Parameters:
        _object - The object to check around [OBJECT]
        _range - The range to check [NUMBER]

    Returns:
        ARRAY - List of nearby supplies with their supply values e.g. [[OBJECT, NUMBER], [OBJECT, NUMBER], ...]
*/

params ["_object", "_range"];

//Predefined Supplies in CBA Settings
private _supplyClasses = [];
{
    _supplyClasses append [(_x select 0)];
} forEach TAW_Supplies_List;

//Find nearby supplies and add them to the array with their returned values.
private _nearbySupplies = nearestObjects [_object, _supplyClasses, _range];

//Return supply array.
_nearbySupplies