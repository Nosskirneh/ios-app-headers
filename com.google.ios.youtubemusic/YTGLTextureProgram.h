//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTGLBaseProgram.h"

@interface YTGLTextureProgram : YTGLBaseProgram
{
    int _textureAttribute;
    int _uniformTextureID;
}

- (void)afterDraw;
- (void)beforeDraw;
- (void)setMesh:(id)arg1;
- (void)setUniformSamplerID:(unsigned int)arg1;
- (id)initWithVertexShaderSource:(id)arg1 fragmentShaderSource:(id)arg2;
- (id)init;

@end
