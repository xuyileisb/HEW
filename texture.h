#pragma once

#include <d3d9.h>

typedef enum 
{
    TEXTURE_INDEX_YUKIDARUMA,


    TEXTURE_INDEX_MAX
}TextureIndex;

int Texture_Load(void); //初期化
void Texture_Release(void); //終了処理
LPDIRECT3DTEXTURE9 Texture_GetTexture(TextureIndex index);
int Texture_GetWidth(TextureIndex index);
int Texture_GetHeight(TextureIndex index);
