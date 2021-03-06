//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTBaseInnerTubeRequestService.h"

#import "YTInnerTubeUIService-Protocol.h"

@class NSMutableDictionary, NSString, YTApiaryResourceParser;

@interface YTGetSharedConversationService : YTBaseInnerTubeRequestService <YTInnerTubeUIService>
{
    YTApiaryResourceParser *_resourceParser;
    NSMutableDictionary *_prefetchedConversations;
    NSMutableDictionary *_prefetchedConversationParams;
}

- (void).cxx_destruct;
- (void)handleExpiredConversation:(id)arg1;
- (void)clearPrefetchedConversationForInvalidationTopic:(id)arg1;
- (void)addPrefetchedConversationResponse:(id)arg1 params:(id)arg2 invalidationTopic:(id)arg3 expiryMs:(unsigned long long)arg4 expiryBlock:(CDUnknownBlockType)arg5;
- (id)continuationRequestWithToken:(id)arg1 clickTrackingParams:(id)arg2;
- (void)makeRequest:(id)arg1 refresh:(_Bool)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)clearCaches;
- (Class)responseClass;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

