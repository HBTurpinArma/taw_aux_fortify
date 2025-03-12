
if (!isServer) exitWith {};

private _markerSpacing = worldSize * 0.016276;

TAW_Supplies_Marker = createMarker ["suppliesmarker", [worldSize + _markerSpacing, worldSize - _markerSpacing]];
TAW_Supplies_Marker setMarkerPos [worldSize + _markerSpacing, worldSize - _markerSpacing];
TAW_Supplies_Marker setMarkerType "mil_start";
TAW_Supplies_Marker setMarkerSize [0.7, 0.7];
TAW_Supplies_Marker setMarkerColor "ColorBLUE";

[{
	private _budget = [west] call ace_fortify_fnc_getBudget;
    TAW_Supplies_Marker setMarkerText format ["Budget: %1", _budget];
}, 10] call CBA_fnc_addPerFrameHandler;
