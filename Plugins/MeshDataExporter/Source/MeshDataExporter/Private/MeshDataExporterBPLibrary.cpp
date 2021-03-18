// Copyright Epic Games, Inc. All Rights Reserved.

#include "MeshDataExporterBPLibrary.h"
#include "MeshDataExporter.h"

UMeshDataExporterBPLibrary::UMeshDataExporterBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

float UMeshDataExporterBPLibrary::MeshDataExporterSampleFunction(float Param)
{
	return -1;
}

void UMeshDataExporterBPLibrary::ExportMeshJsonData(UStaticMesh* mesh)
{
	
}