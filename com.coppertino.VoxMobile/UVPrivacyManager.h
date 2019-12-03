//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSHashTable, NSMapTable, NSMutableArray, UVBenchmark;

@interface UVPrivacyManager : NSObject
{
    NSHashTable *userDefinedSensitiveViews;
    NSHashTable *userDefinedInsensitiveViews;
    NSMapTable *userDefinedSensitiveLayers;
    NSMutableArray *activeMaskingLayers;
    NSMutableArray *activeMaskingRects;
    UVBenchmark *bmWebSensitive;
    UVBenchmark *bmPreProcessSensitiveViews;
    NSHashTable *tickUserDefinedSensitiveViews;
    NSHashTable *tickUserDefinedInsensitiveViews;
    _Bool _NavigationAnimationInProgress;
    _Bool _KeyboardSensitive;
}

+ (id)instance;
@property _Bool KeyboardSensitive; // @synthesize KeyboardSensitive=_KeyboardSensitive;
@property _Bool NavigationAnimationInProgress; // @synthesize NavigationAnimationInProgress=_NavigationAnimationInProgress;
- (void).cxx_destruct;
- (_Bool)isSensitive:(id)arg1;
- (_Bool)shouldSkipCurrentFrame;
- (_Bool)isActiveScreenSensitive;
- (void)getSensitiveObjects:(id)arg1 results:(id)arg2;
- (id)getSensitiveObjects;
- (void)postProcessSensitiveViews:(struct CGContext *)arg1;
- (_Bool)useLayerBasedMasking;
- (_Bool)isKeyboardSensitiveForObjects:(id)arg1;
- (void)drawRect:(struct CGRect)arg1 onContext:(struct CGContext *)arg2;
- (void)preProcessSensitiveViews;
- (void)onSensitiveObjectsCalculated:(id)arg1;
- (_Bool)isSensitivePoint:(struct CGPoint)arg1;
- (void)removeSensitiveLayer:(id)arg1 inView:(id)arg2;
- (void)addSensitiveLayer:(id)arg1 inView:(id)arg2;
- (void)addInsensitiveView:(id)arg1;
- (void)addSensitiveView:(id)arg1;
- (id)init;

@end
