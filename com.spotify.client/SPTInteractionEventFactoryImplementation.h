//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTInteractionEventFactory-Protocol.h"

@class NSArray, NSString;

@interface SPTInteractionEventFactoryImplementation : NSObject <SPTInteractionEventFactory>
{
    NSString *_specificationId;
    NSArray *_components;
    NSString *_interactionType;
    NSArray *_errors;
}

@property(readonly, copy, nonatomic) NSArray *errors; // @synthesize errors=_errors;
@property(readonly, copy, nonatomic) NSString *interactionType; // @synthesize interactionType=_interactionType;
@property(readonly, copy, nonatomic) NSArray *components; // @synthesize components=_components;
@property(readonly, copy, nonatomic) NSString *specificationId; // @synthesize specificationId=_specificationId;
- (void).cxx_destruct;
- (id)shuffleDisable;
- (id)skipToPreviousWithItemToBeSkipped:(id)arg1;
- (id)unfollowWithItemToBeUnfollowed:(id)arg1;
- (id)addToPlaylistWithPlaylist:(id)arg1 withItemToBeAdded:(id)arg2;
- (id)uiHide;
- (id)uiElementToggle;
- (id)skipToNextWithItemToBeSkipped:(id)arg1;
- (id)uiReveal;
- (id)unlikeWithItemToBeUnliked:(id)arg1;
- (id)shufflePlayWithContextToBePlayed:(id)arg1;
- (id)repeatEnable;
- (id)seekToTimeWithMsToSeekTo:(long long)arg1;
- (id)repeatOneEnable;
- (id)pauseWithItemToBePaused:(id)arg1;
- (id)followWithItemToBeFollowed:(id)arg1;
- (id)repeatDisable;
- (id)uiNavigateWithDestination:(id)arg1;
- (id)likeWithItemToBeLiked:(id)arg1;
- (id)shuffleEnable;
- (id)resumeWithItemToBeResumed:(id)arg1;
- (id)playWithItemToBePlayed:(id)arg1;
- (id)initWithSpecificationId:(id)arg1 components:(id)arg2 interactionType:(id)arg3 errors:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

