#include <iostream>
#include <list>
#include <string>

using namespace std;

class PackageDeclaration;
class UsingDeclaration;
class TypeDeclaration;


class CompilationUnit {
    private PackageDeclaration packageDeclar;
    private list<UsingDeclaration>  usingDeclars;
    private list<TypeDeclaration> typeDeclars;
};

class PackageDeclaration {
    private list<string> packagePath;
};

class UsingDeclaration {
    private list<string> usingPath;
};

class TypeDeclaration {
};

class ObjectDeclaration {
};

class TraitDeclaration {
};

class AgentDeclaration {
};

class FieldVariableDeclaration {
};

class MethodDeclaration {
};

class ConstructorDeclaration {
};



