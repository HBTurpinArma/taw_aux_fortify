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

private _returnSupplies = [];

//Predefined Supplies in CBA Settings
private _suppliesClasses = [];
{
    _supplyClasses append (_x select 0);
} forEach TAW_Supplies_List;

//Find nearby supplies and add them to the array with their returned values.


private _nearbySupplies append nearestObjects [_object, _suppliesClasses, _range];
{
    private _suppliesReturned = 500; //Default value for now, lets look this up later.
    _returnSupplies append [[_x, _suppliesReturned]];

} forEach _nearbySupplies;


//TODO: Search for any objects with parameter added to them to be considered as supplies.


//Return supply array.
_nearbySupplies