#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=
AS=as

# Macros
CND_PLATFORM=GNU-Linux-x86
CND_CONF=Debug
CND_DISTDIR=dist

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=build/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/parser/IParser.o \
	${OBJECTDIR}/parser/vmf/Editor.o \
	${OBJECTDIR}/parser/vmf/VMF.o \
	${OBJECTDIR}/parser/vmf/Axis.o \
	${OBJECTDIR}/parser/VMFParser.o \
	${OBJECTDIR}/parser/vmf/VisGroup.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/parser/vmf/Side.o \
	${OBJECTDIR}/parser/vmf/Group.o \
	${OBJECTDIR}/parser/Node.o \
	${OBJECTDIR}/parser/vmf/Solid.o \
	${OBJECTDIR}/parser/vmf/Hidden.o \
	${OBJECTDIR}/parser/vmf/VersionInfo.o \
	${OBJECTDIR}/parser/AbstractParser.o \
	${OBJECTDIR}/parser/vmf/ViewSettings.o \
	${OBJECTDIR}/parser/vmf/DispInfo.o \
	${OBJECTDIR}/parser/vmf/VisGroups.o \
	${OBJECTDIR}/parser/vmf/World.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-Debug.mk dist/Debug/GNU-Linux-x86/cameleon

dist/Debug/GNU-Linux-x86/cameleon: ${OBJECTFILES}
	${MKDIR} -p dist/Debug/GNU-Linux-x86
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cameleon ${OBJECTFILES} ${LDLIBSOPTIONS} 

${OBJECTDIR}/parser/IParser.o: parser/IParser.cpp 
	${MKDIR} -p ${OBJECTDIR}/parser
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/parser/IParser.o parser/IParser.cpp

${OBJECTDIR}/parser/vmf/Editor.o: parser/vmf/Editor.cpp 
	${MKDIR} -p ${OBJECTDIR}/parser/vmf
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/parser/vmf/Editor.o parser/vmf/Editor.cpp

${OBJECTDIR}/parser/vmf/VMF.o: parser/vmf/VMF.cpp 
	${MKDIR} -p ${OBJECTDIR}/parser/vmf
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/parser/vmf/VMF.o parser/vmf/VMF.cpp

${OBJECTDIR}/parser/vmf/Axis.o: parser/vmf/Axis.cpp 
	${MKDIR} -p ${OBJECTDIR}/parser/vmf
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/parser/vmf/Axis.o parser/vmf/Axis.cpp

${OBJECTDIR}/parser/VMFParser.o: parser/VMFParser.cpp 
	${MKDIR} -p ${OBJECTDIR}/parser
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/parser/VMFParser.o parser/VMFParser.cpp

${OBJECTDIR}/parser/vmf/VisGroup.o: parser/vmf/VisGroup.cpp 
	${MKDIR} -p ${OBJECTDIR}/parser/vmf
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/parser/vmf/VisGroup.o parser/vmf/VisGroup.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/parser/vmf/Side.o: parser/vmf/Side.cpp 
	${MKDIR} -p ${OBJECTDIR}/parser/vmf
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/parser/vmf/Side.o parser/vmf/Side.cpp

${OBJECTDIR}/parser/vmf/Group.o: parser/vmf/Group.cpp 
	${MKDIR} -p ${OBJECTDIR}/parser/vmf
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/parser/vmf/Group.o parser/vmf/Group.cpp

${OBJECTDIR}/parser/Node.o: parser/Node.cpp 
	${MKDIR} -p ${OBJECTDIR}/parser
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/parser/Node.o parser/Node.cpp

${OBJECTDIR}/parser/vmf/Solid.o: parser/vmf/Solid.cpp 
	${MKDIR} -p ${OBJECTDIR}/parser/vmf
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/parser/vmf/Solid.o parser/vmf/Solid.cpp

${OBJECTDIR}/parser/vmf/Hidden.o: parser/vmf/Hidden.cpp 
	${MKDIR} -p ${OBJECTDIR}/parser/vmf
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/parser/vmf/Hidden.o parser/vmf/Hidden.cpp

${OBJECTDIR}/parser/vmf/VersionInfo.o: parser/vmf/VersionInfo.cpp 
	${MKDIR} -p ${OBJECTDIR}/parser/vmf
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/parser/vmf/VersionInfo.o parser/vmf/VersionInfo.cpp

${OBJECTDIR}/parser/AbstractParser.o: parser/AbstractParser.cpp 
	${MKDIR} -p ${OBJECTDIR}/parser
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/parser/AbstractParser.o parser/AbstractParser.cpp

${OBJECTDIR}/parser/vmf/ViewSettings.o: parser/vmf/ViewSettings.cpp 
	${MKDIR} -p ${OBJECTDIR}/parser/vmf
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/parser/vmf/ViewSettings.o parser/vmf/ViewSettings.cpp

${OBJECTDIR}/parser/vmf/DispInfo.o: parser/vmf/DispInfo.cpp 
	${MKDIR} -p ${OBJECTDIR}/parser/vmf
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/parser/vmf/DispInfo.o parser/vmf/DispInfo.cpp

${OBJECTDIR}/parser/vmf/VisGroups.o: parser/vmf/VisGroups.cpp 
	${MKDIR} -p ${OBJECTDIR}/parser/vmf
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/parser/vmf/VisGroups.o parser/vmf/VisGroups.cpp

${OBJECTDIR}/parser/vmf/World.o: parser/vmf/World.cpp 
	${MKDIR} -p ${OBJECTDIR}/parser/vmf
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/parser/vmf/World.o parser/vmf/World.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r build/Debug
	${RM} dist/Debug/GNU-Linux-x86/cameleon

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
