##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=GamonalSanchezVictor
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/laura/Laboratorio/Workspace
ProjectPath            :=C:/Users/laura/Laboratorio/Workspace/PruebaTADs
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=laura
Date                   :=30/07/2020
CodeLitePath           :=C:/Users/laura/Laboratorio/CodeLite
LinkerName             :=C:/TDM-GCC-64/bin/g++.exe
SharedObjectLinkerName :=C:/TDM-GCC-64/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="GamonalSanchezVictor.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/TDM-GCC-64/bin/windres.exe
LinkOptions            :=  $(shell pkg-config --libs gtkmm-3.0)
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/TDM-GCC-64/bin/ar.exe rcu
CXX      := C:/TDM-GCC-64/bin/g++.exe
CC       := C:/TDM-GCC-64/bin/gcc.exe
CXXFLAGS :=  -g -Wall -O0 $(shell pkg-config --cflags gtkmm-3.0) $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/TDM-GCC-64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/NodoLista.cpp$(ObjectSuffix) $(IntermediateDirectory)/Arbol.cpp$(ObjectSuffix) $(IntermediateDirectory)/NodoPila.cpp$(ObjectSuffix) $(IntermediateDirectory)/NodoArbol.cpp$(ObjectSuffix) $(IntermediateDirectory)/Box.cpp$(ObjectSuffix) $(IntermediateDirectory)/Cola.cpp$(ObjectSuffix) $(IntermediateDirectory)/Aeropuerto.cpp$(ObjectSuffix) $(IntermediateDirectory)/Pila.cpp$(ObjectSuffix) $(IntermediateDirectory)/Lista.cpp$(ObjectSuffix) $(IntermediateDirectory)/NodoCola.cpp$(ObjectSuffix) \
	$(IntermediateDirectory)/Pasajero.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/NodoLista.cpp$(ObjectSuffix): NodoLista.cpp $(IntermediateDirectory)/NodoLista.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/laura/Laboratorio/Workspace/PruebaTADs/NodoLista.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/NodoLista.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/NodoLista.cpp$(DependSuffix): NodoLista.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/NodoLista.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/NodoLista.cpp$(DependSuffix) -MM NodoLista.cpp

$(IntermediateDirectory)/NodoLista.cpp$(PreprocessSuffix): NodoLista.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/NodoLista.cpp$(PreprocessSuffix) NodoLista.cpp

$(IntermediateDirectory)/Arbol.cpp$(ObjectSuffix): Arbol.cpp $(IntermediateDirectory)/Arbol.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/laura/Laboratorio/Workspace/PruebaTADs/Arbol.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Arbol.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Arbol.cpp$(DependSuffix): Arbol.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Arbol.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Arbol.cpp$(DependSuffix) -MM Arbol.cpp

$(IntermediateDirectory)/Arbol.cpp$(PreprocessSuffix): Arbol.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Arbol.cpp$(PreprocessSuffix) Arbol.cpp

$(IntermediateDirectory)/NodoPila.cpp$(ObjectSuffix): NodoPila.cpp $(IntermediateDirectory)/NodoPila.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/laura/Laboratorio/Workspace/PruebaTADs/NodoPila.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/NodoPila.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/NodoPila.cpp$(DependSuffix): NodoPila.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/NodoPila.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/NodoPila.cpp$(DependSuffix) -MM NodoPila.cpp

$(IntermediateDirectory)/NodoPila.cpp$(PreprocessSuffix): NodoPila.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/NodoPila.cpp$(PreprocessSuffix) NodoPila.cpp

$(IntermediateDirectory)/NodoArbol.cpp$(ObjectSuffix): NodoArbol.cpp $(IntermediateDirectory)/NodoArbol.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/laura/Laboratorio/Workspace/PruebaTADs/NodoArbol.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/NodoArbol.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/NodoArbol.cpp$(DependSuffix): NodoArbol.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/NodoArbol.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/NodoArbol.cpp$(DependSuffix) -MM NodoArbol.cpp

$(IntermediateDirectory)/NodoArbol.cpp$(PreprocessSuffix): NodoArbol.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/NodoArbol.cpp$(PreprocessSuffix) NodoArbol.cpp

$(IntermediateDirectory)/Box.cpp$(ObjectSuffix): Box.cpp $(IntermediateDirectory)/Box.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/laura/Laboratorio/Workspace/PruebaTADs/Box.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Box.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Box.cpp$(DependSuffix): Box.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Box.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Box.cpp$(DependSuffix) -MM Box.cpp

$(IntermediateDirectory)/Box.cpp$(PreprocessSuffix): Box.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Box.cpp$(PreprocessSuffix) Box.cpp

$(IntermediateDirectory)/Cola.cpp$(ObjectSuffix): Cola.cpp $(IntermediateDirectory)/Cola.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/laura/Laboratorio/Workspace/PruebaTADs/Cola.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Cola.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Cola.cpp$(DependSuffix): Cola.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Cola.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Cola.cpp$(DependSuffix) -MM Cola.cpp

$(IntermediateDirectory)/Cola.cpp$(PreprocessSuffix): Cola.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Cola.cpp$(PreprocessSuffix) Cola.cpp

$(IntermediateDirectory)/Aeropuerto.cpp$(ObjectSuffix): Aeropuerto.cpp $(IntermediateDirectory)/Aeropuerto.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/laura/Laboratorio/Workspace/PruebaTADs/Aeropuerto.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Aeropuerto.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Aeropuerto.cpp$(DependSuffix): Aeropuerto.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Aeropuerto.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Aeropuerto.cpp$(DependSuffix) -MM Aeropuerto.cpp

$(IntermediateDirectory)/Aeropuerto.cpp$(PreprocessSuffix): Aeropuerto.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Aeropuerto.cpp$(PreprocessSuffix) Aeropuerto.cpp

$(IntermediateDirectory)/Pila.cpp$(ObjectSuffix): Pila.cpp $(IntermediateDirectory)/Pila.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/laura/Laboratorio/Workspace/PruebaTADs/Pila.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Pila.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Pila.cpp$(DependSuffix): Pila.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Pila.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Pila.cpp$(DependSuffix) -MM Pila.cpp

$(IntermediateDirectory)/Pila.cpp$(PreprocessSuffix): Pila.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Pila.cpp$(PreprocessSuffix) Pila.cpp

$(IntermediateDirectory)/Lista.cpp$(ObjectSuffix): Lista.cpp $(IntermediateDirectory)/Lista.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/laura/Laboratorio/Workspace/PruebaTADs/Lista.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Lista.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Lista.cpp$(DependSuffix): Lista.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Lista.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Lista.cpp$(DependSuffix) -MM Lista.cpp

$(IntermediateDirectory)/Lista.cpp$(PreprocessSuffix): Lista.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Lista.cpp$(PreprocessSuffix) Lista.cpp

$(IntermediateDirectory)/NodoCola.cpp$(ObjectSuffix): NodoCola.cpp $(IntermediateDirectory)/NodoCola.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/laura/Laboratorio/Workspace/PruebaTADs/NodoCola.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/NodoCola.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/NodoCola.cpp$(DependSuffix): NodoCola.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/NodoCola.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/NodoCola.cpp$(DependSuffix) -MM NodoCola.cpp

$(IntermediateDirectory)/NodoCola.cpp$(PreprocessSuffix): NodoCola.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/NodoCola.cpp$(PreprocessSuffix) NodoCola.cpp

$(IntermediateDirectory)/Pasajero.cpp$(ObjectSuffix): Pasajero.cpp $(IntermediateDirectory)/Pasajero.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/laura/Laboratorio/Workspace/PruebaTADs/Pasajero.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Pasajero.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Pasajero.cpp$(DependSuffix): Pasajero.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Pasajero.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Pasajero.cpp$(DependSuffix) -MM Pasajero.cpp

$(IntermediateDirectory)/Pasajero.cpp$(PreprocessSuffix): Pasajero.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Pasajero.cpp$(PreprocessSuffix) Pasajero.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/laura/Laboratorio/Workspace/PruebaTADs/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


