//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, NSURL;

@protocol GHKChatSessionManagerDelegate <NSObject>
- (void)quickExitToApp;
- (void)sessionEnded;
- (void)displayAgentTypingStatus:(int)arg1;
- (void)displayEndMessageInConversationView:(long long)arg1;
- (void)displayMessagesInConversationView:(NSArray *)arg1;
- (void)displayConversationView:(NSArray *)arg1;
- (void)displayTimedOutView;
- (void)displayQueueViewForPosition:(long long)arg1;
- (void)handlePrefetchRenderedContentForSurveyURL:(NSURL *)arg1;
- (void)handleConnectionSuccess;
- (void)handleConnectionError:(NSError *)arg1;
@end

