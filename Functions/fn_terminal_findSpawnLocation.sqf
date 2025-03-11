/*
    Function: TAW_fnc_terminal_findSpawnLocation
    Description:
        Finds a suitable spawn location for a vehicle to spawn at.
*/

params ["_object", "_vehicleClass"];

_spawnClasses = switch(_vehicleClass) do
{
	case "All": {["TAW_Terminal_Air_Spawn", "TAW_Terminal_Car_Spawn", "TAW_Terminal_Boat_Spawn"]};
	case "Car": {["TAW_Terminal_Car_Spawn"]};
	case "Air": {["TAW_Terminal_Air_Spawn"]};
	case "Ship": {["TAW_Terminal_Boat_Spawn"]};
	case "Armored": {["TAW_Terminal_Car_Spawn"]};
	case "Autonomous": {["TAW_Terminal_Air_Spawn"]};
	case "Support": {["TAW_Terminal_Air_Spawn"]};
	default {["TAW_Terminal_Air_Spawn", "TAW_Terminal_Car_Spawn"]};
};

private _nearbySpawns = nearestObjects [_object, _spawnClasses, TAW_VehicleSpawner_Spawn_Range];

_nearbySpawns