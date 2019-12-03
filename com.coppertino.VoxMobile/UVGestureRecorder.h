//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSMutableArray, NSPointerArray, NSString;

@interface UVGestureRecorder : NSObject <UIGestureRecognizerDelegate>
{
    NSPointerArray *windowsAttached;
    _Bool FoundUnresponsiveTap;
    NSMutableArray *GestureEvents;
}

+ (id)instance;
@property(retain) NSMutableArray *GestureEvents; // @synthesize GestureEvents;
@property _Bool FoundUnresponsiveTap; // @synthesize FoundUnresponsiveTap;
- (void).cxx_destruct;
- (void)clearData;
- (id)getJson;
- (int)getGestureTypeByOrientation:(int)arg1;
- (void)foundGesture:(int)arg1 touches:(id)arg2 otherRecognizers:(id)arg3 recognizer:(id)arg4 requirement:(CDUnknownBlockType)arg5;
- (void)handleLongPress:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)handleRotation:(id)arg1;
- (void)handleSwipeDown:(id)arg1;
- (void)handleSwipeUp:(id)arg1;
- (void)handleSwipeLeft:(id)arg1;
- (void)handleSwipeRight:(id)arg1;
- (void)handlePinch:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)attachWindow:(id)arg1;
- (void)refreshWindows;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
