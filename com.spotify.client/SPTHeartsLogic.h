//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTHeartsLogic : NSObject
{
}

+ (id)undoHeartTappedEvent:(id)arg1 model:(id)arg2;
+ (id)recommendationSelectedEvent:(id)arg1 model:(id)arg2;
+ (id)recommendationDeselectedEvent:(id)arg1 model:(id)arg2;
+ (id)nextForNewStateFromUserUnhearting:(id)arg1 model:(id)arg2;
+ (id)nextForNewStateFromUserHearting:(id)arg1 model:(id)arg2;
+ (id)nextForFreshTrackAfterPreviousState:(id)arg1 newStatePlayer:(id)arg2 inNewContext:(_Bool)arg3 isCurrentContextAlgotorialPlaylist:(_Bool)arg4 modelBuilder:(id)arg5;
+ (id)playerStateChangedEvent:(id)arg1 model:(id)arg2;
+ (id)onDemandSetUpdatedEvent:(id)arg1 model:(id)arg2;
+ (id)NPVDismissed:(id)arg1 model:(id)arg2;
+ (id)NPVPresented:(id)arg1 model:(id)arg2;
+ (id)backendErrorReceivedEvent:(id)arg1 model:(id)arg2;
+ (id)updateForEvent:(id)arg1 model:(id)arg2;

@end
