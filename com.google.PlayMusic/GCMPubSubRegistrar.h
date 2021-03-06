//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GCMCheckinService, NSMutableDictionary;

@interface GCMPubSubRegistrar : NSObject
{
    GCMCheckinService *_checkinService;
    NSMutableDictionary *_pubsubClientsMap;
}

@property(retain, nonatomic) NSMutableDictionary *pubsubClientsMap; // @synthesize pubsubClientsMap=_pubsubClientsMap;
@property(retain, nonatomic) GCMCheckinService *checkinService; // @synthesize checkinService=_checkinService;
- (void).cxx_destruct;
- (void)addNewPubsubRegistrationClient:(id)arg1;
- (id)createPubsubClientWithTopic:(id)arg1 token:(id)arg2 options:(id)arg3;
- (void)updateSubscriptionToTopic:(id)arg1 withToken:(id)arg2 options:(id)arg3 shouldDelete:(_Bool)arg4 handler:(CDUnknownBlockType)arg5;
- (void)stopAllSubscriptionRequests;
- (id)initWithCheckinService:(id)arg1;
- (id)init;

@end

