//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YTGLProgram : NSObject
{
    unsigned int _glProgramHandle;
}

@property(readonly, nonatomic) unsigned int glProgramHandle; // @synthesize glProgramHandle=_glProgramHandle;
- (unsigned int)LoadShaderWithType:(unsigned int)arg1 ShaderSource:(const char *)arg2;
- (unsigned int)createProgramWithVertexShader:(unsigned int)arg1 fragmentShader:(unsigned int)arg2;
- (id)didFailToCreateProgram:(unsigned int)arg1;
- (id)didFailToLoadShader:(unsigned int)arg1 ofType:(unsigned int)arg2;
- (void)shutDown;
- (void)setMesh:(id)arg1;
- (void)afterDraw;
- (void)drawMeshWithGeometryPrimitiveType:(unsigned int)arg1 vertexCount:(int)arg2;
- (void)beforeDraw;
- (void)dealloc;
- (id)initWithVertexShaderSource:(id)arg1 fragmentShaderSource:(id)arg2;

@end

