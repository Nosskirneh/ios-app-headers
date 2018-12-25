//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GRWUserAccounts;
@protocol GRWMessagingStore;

@interface GRWMessagingPersistanceCoordinator : NSObject
{
    long long _type;
    id <GRWMessagingStore> _messageStore;
    GRWUserAccounts *_userAccounts;
}

@property(retain, nonatomic) GRWUserAccounts *userAccounts; // @synthesize userAccounts=_userAccounts;
@property(retain, nonatomic) id <GRWMessagingStore> messageStore; // @synthesize messageStore=_messageStore;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)removeOldMessages;
- (_Bool)removeAllMessages;
- (void)removeMessagesForUserID:(id)arg1;
- (void)setMessages:(id)arg1 forUserID:(id)arg2;
- (id)messagesForUserID:(id)arg1;
- (void)setupWithType:(long long)arg1;
- (id)initWithType:(long long)arg1 userAccounts:(id)arg2;

@end

