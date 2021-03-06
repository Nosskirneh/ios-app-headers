//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FIRMessagingRmqManager;

@interface FIRMessagingSyncMessageManager : NSObject
{
    FIRMessagingRmqManager *_rmqManager;
}

+ (long long)expirationTimeForSyncMessage:(id)arg1;
@property(retain, nonatomic) FIRMessagingRmqManager *rmqManager; // @synthesize rmqManager=_rmqManager;
- (void).cxx_destruct;
- (_Bool)didReceiveSyncMessage:(id)arg1 viaAPNS:(_Bool)arg2 viaMCS:(_Bool)arg3;
- (_Bool)didReceiveMCSSyncMessage:(id)arg1;
- (_Bool)didReceiveAPNSSyncMessage:(id)arg1;
- (void)removeExpiredSyncMessages;
- (id)initWithRmqManager:(id)arg1;
- (id)init;

@end

