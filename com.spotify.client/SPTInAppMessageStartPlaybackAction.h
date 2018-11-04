//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTInAppMessageAction.h"

@class NSString, NSURL;

@interface SPTInAppMessageStartPlaybackAction : NSObject <SPTInAppMessageAction>
{
    NSURL *_entityURI;
    id <SPTPlayer> _player;
    id <SPTOnDemandSet> _onDemandSet;
}

@property(retain, nonatomic) id <SPTOnDemandSet> onDemandSet; // @synthesize onDemandSet=_onDemandSet;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) NSURL *entityURI; // @synthesize entityURI=_entityURI;
- (void).cxx_destruct;
- (_Bool)isValidURL;
- (void)perform;
- (id)initWithEntityURI:(id)arg1 player:(id)arg2 onDemandSet:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
