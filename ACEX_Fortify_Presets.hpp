class ACEX_Fortify_Presets {
    class TAW_FIELD {
        displayName = "Field Building";
        objects[] = {
            {"Land_BagFence_Long_F", 50},
            {"Land_BagFence_Round_F", 50},
        };
    };
    class TAW_FOB_Barriers {
        displayName = "FOB (Barriers)";
        objects[] = {
            {"Land_HBarrierTower_F", 500},
            {"Land_HBarrierWall_corner_F", 250},
            {"Land_HBarrierWall4_F", 200},
            {"Land_HBarrierWall6_F", 300},
            {"Land_HBarrierWall_1_F", 50},
            {"Land_HBarrierWall_3_F", 100},
            {"Land_HBarrierWall_5_F", 200},
            {"Land_HBarrierWall_corridor_F", 200},
            {"Land_HBarrierWall_Big_F", 300},
        };
    };
    class TAW_FOB_Misc {
        displayName = "FOB (Misc)";
        objects[] = {
            {"Land_Razorwire_F", 100},
            {"Land_Shoot_House_Wall_F", 100},
            {"Land_Shoot_House_Wall_Crouch_F", 50},
            {"Land_BarGate_F", 100},
            {"Land_BagFence_Long_F", 50},
            {"Land_BagFence_Round_F", 50},
            {"Land_BagBunker_Small_F", 300},
        };
    };
    class TAW {
        displayName = "TAW";
        objects[] = {
            //FOB Building (Requires FOB nearby)
            {"Land_HBarrierTower_F", 500, "TAW_FOB_Barriers"},
            {"Land_HBarrierWall_corner_F", 250, "TAW_FOB_Barriers"},
            {"Land_HBarrierWall4_F", 200, "TAW_FOB_Barriers"},
            {"Land_HBarrierWall6_F", 300, "TAW_FOB_Barriers"},
            {"Land_HBarrierWall_1_F", 50, "TAW_FOB_Barriers"},
            {"Land_HBarrierWall_3_F", 100, "TAW_FOB_Barriers"},
            {"Land_HBarrierWall_5_F", 200, "TAW_FOB_Barriers"},
            {"Land_HBarrierWall_corridor_F", 200, "TAW_FOB_Barriers"},
            {"Land_HBarrierWall_Big_F", 300, "TAW_FOB_Barriers"},
            {"Land_Razorwire_F", 100, "TAW_FOB_Misc"},
            {"Land_Shoot_House_Wall_F", 100, "TAW_FOB_Misc"},
            {"Land_Shoot_House_Wall_Crouch_F", 50, "TAW_FOB_Misc"},
            {"Land_BarGate_F", 100, "TAW_FOB_Misc"},
            {"Land_BagFence_Long_F", 50, "TAW_FOB_Misc"},
            {"Land_BagFence_Round_F", 50, "TAW_FOB_Misc"},
            {"Land_BagBunker_Small_F", 300, "TAW_FOB_Misc"},
            //Field Building (Doesn't require FOB nearby)
            {"Land_BagFence_Long_F", 50, "TAW_FIELD"},
            {"Land_BagFence_Round_F", 50, "TAW_FIELD"},
        };
    };
};
