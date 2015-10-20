#include <assimp/anim.h>
#include <assimp/camera.h>
#include <assimp/cexport.h>
#include <assimp/cfileio.h>
#include <assimp/cimport.h>
#include <assimp/color4.h>
#include <assimp/config.h>
#include <assimp/defs.h>
#include <assimp/importerdesc.h>
#include <assimp/light.h>
#include <assimp/material.h>
#include <assimp/matrix3x3.h>
#include <assimp/matrix4x4.h>
#include <assimp/mesh.h>
#include <assimp/metadata.h>
#include <assimp/postprocess.h>
#include <assimp/quaternion.h>
#include <assimp/scene.h>
#include <assimp/texture.h>
#include <assimp/types.h>
#include <assimp/vector2.h>
#include <assimp/vector3.h>
#include <assimp/version.h>

int main(void)
{
  printf("\n\n*** assimp sizes ***\n\n");
  
  printf("sizeof(aiExportFormatDesc) = %lu\n", sizeof(aiExportFormatDesc));
  printf("sizeof(aiScene) = %lu\n", sizeof(aiScene));
  printf("sizeof(aiCamera) = %lu\n", sizeof(aiCamera));
  printf("sizeof(aiLight) = %lu\n", sizeof(aiLight));
  printf("sizeof(aiTexture) = %lu\n", sizeof(aiTexture));
  printf("sizeof(aiAnimation) = %lu\n", sizeof(aiAnimation));
  printf("sizeof(aiMeshAnim) = %lu\n", sizeof(aiMeshAnim));
  printf("sizeof(aiNodeAnim) = %lu\n", sizeof(aiNodeAnim));
  printf("sizeof(aiMaterial) = %lu\n", sizeof(aiMaterial));
  printf("sizeof(aiMaterialProperty) = %lu\n", sizeof(aiMaterialProperty));
  printf("sizeof(aiUVTransform) = %lu\n", sizeof(aiUVTransform));
  printf("sizeof(aiMesh) = %lu\n", sizeof(aiMesh));
  printf("sizeof(aiMesh) = %lu\n", sizeof(aiMesh));
  printf("sizeof(aiAnimMesh) = %lu\n", sizeof(aiAnimMesh));
  printf("sizeof(aiBone) = %lu\n", sizeof(aiBone));
  printf("sizeof(aiVertexWeight) = %lu\n", sizeof(aiVertexWeight));
  printf("sizeof(aiFace) = %lu\n", sizeof(aiFace));
  printf("sizeof(aiNode) = %lu\n", sizeof(aiNode));
  printf("sizeof(aiMeshKey) = %lu\n", sizeof(aiMeshKey));
  printf("sizeof(aiQuatKey) = %lu\n", sizeof(aiQuatKey));
  printf("sizeof(aiVectorKey) = %lu\n", sizeof(aiVectorKey));
  printf("sizeof(aiTexel) = %lu\n", sizeof(aiTexel));
  printf("sizeof(aiQuaternion) = %lu\n", sizeof(aiQuaternion));
  printf("sizeof(aiColor3D) = %lu\n", sizeof(aiColor3D));
  printf("sizeof(aiColor4D) = %lu\n", sizeof(aiColor4D));
  printf("sizeof(aiVector2D) = %lu\n", sizeof(aiVector2D));
  printf("sizeof(aiVector3D) = %lu\n", sizeof(aiVector3D));
  // printf("sizeof(aiVector4D) = %lu\n", sizeof(aiVector4D));
  printf("sizeof(aiMatrix3x3) = %lu\n", sizeof(aiMatrix3x3));
  printf("sizeof(aiMatrix4x4) = %lu\n", sizeof(aiMatrix4x4));
  printf("sizeof(aiString) = %lu\n", sizeof(aiString));
  return 0;
}
