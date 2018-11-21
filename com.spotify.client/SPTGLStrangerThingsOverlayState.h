//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGLOverlayState-Protocol.h"

@class NSString;

@interface SPTGLStrangerThingsOverlayState : NSObject <SPTGLOverlayState>
{
    _Bool _shouldShowOverlay;
    _Bool _shouldShowLights;
    int _startFrame;
}

+ (id)darkWithLightsStateAtStartFrame:(int)arg1;
+ (id)darkStateAtStartFrame:(int)arg1;
+ (id)normalStateAtStartFrame:(int)arg1;
+ (id)stateWithStartFrame:(int)arg1 shouldShowOverlay:(_Bool)arg2 shouldShowLight:(_Bool)arg3;
@property(nonatomic) _Bool shouldShowLights; // @synthesize shouldShowLights=_shouldShowLights;
@property(nonatomic) _Bool shouldShowOverlay; // @synthesize shouldShowOverlay=_shouldShowOverlay;
@property(nonatomic) int startFrame; // @synthesize startFrame=_startFrame;
- (id)initWithStartFrame:(int)arg1 shouldShowOverlay:(_Bool)arg2 shouldShowLight:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

