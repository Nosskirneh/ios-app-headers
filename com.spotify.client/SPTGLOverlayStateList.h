//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;
@protocol SPTGLOverlayState;

@interface SPTGLOverlayStateList : NSObject
{
    NSMutableSet *_mutableStates;
    NSObject<SPTGLOverlayState> *_firstState;
    NSObject<SPTGLOverlayState> *_lastState;
}

@property(retain, nonatomic) NSObject<SPTGLOverlayState> *lastState; // @synthesize lastState=_lastState;
@property(retain, nonatomic) NSObject<SPTGLOverlayState> *firstState; // @synthesize firstState=_firstState;
@property(retain, nonatomic) NSMutableSet *mutableStates; // @synthesize mutableStates=_mutableStates;
- (void).cxx_destruct;
- (id)getLastState;
- (id)getFirstState;
- (id)getStateForFrame:(int)arg1;
- (void)addState:(id)arg1;
@property(readonly, nonatomic) NSSet *states;
- (id)init;

@end

