//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MSAServiceClientTouchDelegate-Protocol.h"

@class MSAViewObjectHandler, NSDate, NSMutableArray, NSMutableDictionary, NSString, UIWindow;
@protocol MySpinTouchInjectionWindowSource;

@interface MySpinTouchInjectionManager : NSObject <MSAServiceClientTouchDelegate>
{
    MSAViewObjectHandler *viewObjectHandler;
    NSMutableDictionary *persistentTouches;
    NSMutableDictionary *touchesForView;
    NSMutableArray *movedTouchIDs;
    double lastTimestamp;
    int lastUniqueID;
    NSDate *lastMoveEvent;
    id <MySpinTouchInjectionWindowSource> _windowSource;
    NSMutableDictionary *_lastEvents;
    UIWindow *_referenceWindow;
}

+ (_Bool)viewShouldHandleEvents:(id)arg1;
+ (_Bool)viewShouldHandleEventsForSubviews:(id)arg1;
+ (long long)handleTouch:(id)arg1 forView:(id)arg2;
+ (id)sharedInstance;
@property(readonly, nonatomic) __weak UIWindow *referenceWindow; // @synthesize referenceWindow=_referenceWindow;
@property(retain, nonatomic) NSMutableDictionary *lastEvents; // @synthesize lastEvents=_lastEvents;
@property(nonatomic) __weak id <MySpinTouchInjectionWindowSource> windowSource; // @synthesize windowSource=_windowSource;
- (void).cxx_destruct;
- (void)clearState;
- (void)handleTouches:(id)arg1;
- (double)mostRecentTouchTimestamp;
- (id)predecessorTouchInfo:(id)arg1;
- (void)updateTapCountForTouchInfo:(id)arg1;
- (_Bool)isViewActive:(id)arg1;
- (id)getPersistentTouchInfoArrayFromUniqueIDs:(id)arg1 withEventType:(long long)arg2;
- (id)getPersistentTouchInfoArrayFromUniqueIDs:(id)arg1;
- (id)getPersistentTouchInfoForID:(int)arg1;
- (void)removePersistentTouchInfoForID:(int)arg1;
- (id)createPersistentTouchInfoForID:(int)arg1;
- (void)setViewObject:(id)arg1 forView:(id)arg2;
- (id)viewObjectForView:(id)arg1;
- (void)releaseTouchById:(int)arg1;
- (void)updatePersistentTouchInfoDictionary:(id)arg1;
- (void)setTouchesHandledState:(id)arg1;
- (void)attemptToRemoveTouches:(id)arg1;
- (void)persistTouches:(id)arg1;
- (void)handleTouchEventList:(id)arg1;
- (id)discardFrequentMoveTouches:(id)arg1;
- (id)discardInvalidTouches:(id)arg1;
- (void)removeRegisteredTouch:(int)arg1;
- (id)getRegisteredTouchesForView:(id)arg1;
- (void)registerTouchWithId:(int)arg1 forView:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

