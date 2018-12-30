//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UAInboxAPIClient, UAInboxMessageList, UAUser;
@protocol UAInboxDelegate;

@interface UAInbox : NSObject
{
    UAInboxMessageList *_messageList;
    UAInboxAPIClient *_client;
    id <UAInboxDelegate> _delegate;
    UAUser *_user;
}

+ (id)inboxWithUser:(id)arg1 config:(id)arg2 dataStore:(id)arg3;
@property(retain, nonatomic) UAUser *user; // @synthesize user=_user;
@property(nonatomic) __weak id <UAInboxDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UAInboxAPIClient *client; // @synthesize client=_client;
@property(retain, nonatomic) UAInboxMessageList *messageList; // @synthesize messageList=_messageList;
- (void).cxx_destruct;
- (void)deleteInboxCache;
- (void)userCreated;
- (void)didBecomeActive;
- (void)enterForeground;
- (id)initWithUser:(id)arg1 config:(id)arg2 dataStore:(id)arg3;
- (void)dealloc;

@end

