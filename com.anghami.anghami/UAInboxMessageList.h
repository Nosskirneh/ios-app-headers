//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, UAInboxAPIClient, UAInboxStore, UAUser;

@interface UAInboxMessageList : NSObject
{
    NSArray *_messages;
    long long _unreadCount;
    UAInboxAPIClient *_client;
    UAUser *_user;
    UAInboxStore *_inboxStore;
    unsigned long long _batchOperationCount;
    unsigned long long _retrieveOperationCount;
    NSDictionary *_messageIDMap;
    NSDictionary *_messageURLMap;
}

+ (id)messageListWithUser:(id)arg1 client:(id)arg2 config:(id)arg3;
@property(retain, nonatomic) NSDictionary *messageURLMap; // @synthesize messageURLMap=_messageURLMap;
@property(retain, nonatomic) NSDictionary *messageIDMap; // @synthesize messageIDMap=_messageIDMap;
@property unsigned long long retrieveOperationCount; // @synthesize retrieveOperationCount=_retrieveOperationCount;
@property unsigned long long batchOperationCount; // @synthesize batchOperationCount=_batchOperationCount;
@property(retain, nonatomic) UAInboxStore *inboxStore; // @synthesize inboxStore=_inboxStore;
@property(retain, nonatomic) UAUser *user; // @synthesize user=_user;
@property(retain, nonatomic) UAInboxAPIClient *client; // @synthesize client=_client;
@property long long unreadCount; // @synthesize unreadCount=_unreadCount;
- (void).cxx_destruct;
- (id)messageFromMessageData:(id)arg1;
- (id)debugQuickLookObject;
@property(readonly) _Bool isBatchUpdating;
@property(readonly) _Bool isRetrieving;
- (id)messageForID:(id)arg1;
- (id)messageForBodyURL:(id)arg1;
- (unsigned long long)messageCount;
- (void)syncLocalMessageState;
- (void)syncDeletedMessageState;
- (void)syncReadMessageState;
- (void)refreshInboxWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadSavedMessages;
- (id)markMessagesDeleted:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)markMessagesRead:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)retrieveMessageListWithSuccessBlock:(CDUnknownBlockType)arg1 withFailureBlock:(CDUnknownBlockType)arg2;
- (void)sendMessageListUpdatedNotification;
- (void)sendMessageListWillUpdateNotification;
- (id)messagesFilteredUsingPredicate:(id)arg1;
@property(retain, nonatomic) NSArray *messages; // @synthesize messages=_messages;
- (id)initWithUser:(id)arg1 client:(id)arg2 config:(id)arg3;

@end
