//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDRenderer, NSMutableString;

@interface IGDScene : NSObject
{
    int _viewportSize;
    float *_vertexMultiplier;
    float *_colorMultiplier;
    unsigned int _imageHash;
    NSMutableString *_errorBuffer;
    IGDRenderer *_renderer;
}

@property(retain, nonatomic) IGDRenderer *renderer; // @synthesize renderer=_renderer;
@property(readonly, nonatomic) unsigned int imageHash; // @synthesize imageHash=_imageHash;
@property(retain, nonatomic) NSMutableString *errorBuffer; // @synthesize errorBuffer=_errorBuffer;
- (void).cxx_destruct;
- (float *)createDefaultMultiplier:(long long)arg1;
- (void)storeProgramLinkLog:(unsigned int)arg1;
- (void)storeShaderCompileLog:(unsigned int)arg1;
- (_Bool)prepareProgram:(unsigned int)arg1;
- (unsigned int)loadShaderSource:(const char *)arg1 type:(unsigned int)arg2 intoProgram:(unsigned int)arg3;
- (_Bool)compileShaderSource:(const char *)arg1 intoShader:(unsigned int *)arg2 type:(unsigned int)arg3;
- (_Bool)computeHash;
- (void)cleanupScene;
- (_Bool)renderSceneInContext:(id)arg1;
- (_Bool)bindShaderVariablesToProgram:(unsigned int)arg1;
- (_Bool)renderWithProgram:(unsigned int)arg1;
- (const char *)getFragmentShader;
- (const char *)getVertexShader;
-     // Error parsing type: B24@0:8r^{IOSGuassoSceneDescriptor=^^?{InternalMetadataWithArenaLite=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedField<float>=ii(Pointer=^{Arena}^f)}{RepeatedField<float>=ii(Pointer=^{Arena}^f)}^{IOSGuassoVariableSceneDescriptor}ii}16, name: processSceneDescriptor:
- (void)dealloc;
- (id)init;

@end
