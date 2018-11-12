//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "EXP_HUBCommandHandler-Protocol.h"

@class FollowModel;
@protocol EXP_SPTHubInteractionLogger;

@interface SPTArtistFollowCommandHandler : NSObject <EXP_HUBCommandHandler>
{
    FollowModel *_followModel;
    id <EXP_SPTHubInteractionLogger> _interactionLogger;
}

@property(readonly, nonatomic) id <EXP_SPTHubInteractionLogger> interactionLogger; // @synthesize interactionLogger=_interactionLogger;
@property(retain, nonatomic) FollowModel *followModel; // @synthesize followModel=_followModel;
- (void).cxx_destruct;
- (void)logFollowInteractionWithCommand:(id)arg1 event:(id)arg2;
- (void)handleCommand:(id)arg1 event:(id)arg2;
- (id)initWithInteractionLogger:(id)arg1;

@end

