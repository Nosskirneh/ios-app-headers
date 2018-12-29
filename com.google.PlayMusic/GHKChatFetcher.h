//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GHKBaseReceiverFetcher.h"

@class GHKSessionDataManager;

@interface GHKChatFetcher : GHKBaseReceiverFetcher
{
    GHKSessionDataManager *_sessionDataManager;
}

+ (id)objectionRequires;
+ (void)initialize;
@property(retain, nonatomic) GHKSessionDataManager *sessionDataManager; // @synthesize sessionDataManager=_sessionDataManager;
- (void).cxx_destruct;
- (id)extractConversationEvents:(id)arg1;
- (void)sendChatMessage:(id)arg1 clientTime:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)reportSurveyURLShown:(id)arg1 conversationID:(id)arg2 surveyType:(int)arg3;
- (void)sendLeaveChatRequestWithHandler:(CDUnknownBlockType)arg1;
- (void)sendJoinChatRequestWithHandler:(CDUnknownBlockType)arg1;
- (void)requestEventsForConversation:(id)arg1 lastSeenEventID:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)reportTypingStatus:(int)arg1;
- (void)submitCancelChatRequest;
- (void)submitChatRequestForPool:(id)arg1 description:(id)arg2 gcmToken:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)fetchStatusForChatPool:(id)arg1 version:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithRetryCount:(id)arg1;

@end
