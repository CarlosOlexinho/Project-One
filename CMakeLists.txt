cmake_minimum_required( VERSION 3.15 )
project( Project_One )

set( CMAKE_CXX_STANDARD 14 )

add_executable(
        Project_One
        
        src/main.cpp
        
        src/interface/IUnit.hxx
        src/monster/Monster.cxx
        src/monster/Monster.hxx
        src/humanoid/Humanoid.cxx
        src/humanoid/Humanoid.hxx
        src/SimpleUnit.cxx
        src/SimpleUnit.hxx
        src/humanoid/type/Elf.cxx
        src/humanoid/type/Elf.hxx
        src/monster/type/Phoenix.cxx
        src/monster/type/Phoenix.hxx
        src/humanoid/type/Dwarf.cxx
        src/humanoid/type/Dwarf.hxx
        src/humanoid/type/Druid.cxx
        src/humanoid/type/Druid.hxx
        src/monster/type/FrostAtronach.cxx
        src/monster/type/FrostAtronach.hxx
        src/monster/type/Werewolf.cxx
        src/monster/type/Werewolf.hxx
        src/RoboUnit.cxx
        src/RoboUnit.hxx
        src/mech/Mech.cxx
        src/mech/Mech.hxx
        src/mech/Bumblebee.cxx
        src/mech/Bumblebee.hxx
        src/interface/ITeamCompositor.hxx
        src/interface/IFightSimulator.hxx
        src/team/TeamCompositor.cxx
        src/team/TeamCompositor.hxx
        src/fight/FightSimulator.cxx
        src/fight/FightSimulator.hxx
        src/fight/FightSimulator.cxx

        src/team/RandomTeamCompositor.cxx src/team/RandomTeamCompositor.hxx src/fight/AdvancedFightSimulator.cxx src/fight/AdvancedFightSimulator.hxx src/fight/ModernFightSimulator.cxx src/fight/ModernFightSimulator.hxx)
