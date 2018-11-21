//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVoiceCommandHandler-Protocol.h"

@class NSString;
@protocol SPTPlayer;

@interface SPTVoiceQBDCommandHandler : NSObject <SPTVoiceCommandHandler>
{
    id <SPTPlayer> _player;
    NSString *_referrerIdentifier;
}

@property(readonly, nonatomic) NSString *referrerIdentifier; // @synthesize referrerIdentifier=_referrerIdentifier;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
- (void).cxx_destruct;
- (id)handleVoiceCommand:(id)arg1;
- (_Bool)canHandleVoiceCommand:(id)arg1;
- (id)initWithPlayer:(id)arg1 referrerIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

