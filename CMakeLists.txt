CMAKE_MINIMUM_REQUIRED( VERSION 3.15 )
PROJECT( Project_One )

SET( CMAKE_CXX_STANDARD 14 )

ADD_EXECUTABLE(
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
		src/humanoid/type/Elf.hxx src/monster/type/Phoenix.cxx src/monster/type/Phoenix.hxx src/humanoid/type/Dwarf.cxx src/humanoid/type/Dwarf.hxx src/humanoid/type/Druid.cxx src/humanoid/type/Druid.hxx src/monster/type/FrostAtronach.cxx src/monster/type/FrostAtronach.hxx src/monster/type/Werewolf.cxx src/monster/type/Werewolf.hxx src/RoboUnit.cxx src/RoboUnit.hxx src/mech/Mech.cxx src/mech/Mech.hxx src/mech/Bumblebee.cxx src/mech/Bumblebee.hxx src/interface/ITeamCompositor.hxx src/interface/IFightSimulator.hxx )
