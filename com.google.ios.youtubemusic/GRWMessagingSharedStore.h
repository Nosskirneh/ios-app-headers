//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GRWMessagingStore-Protocol.h"

@class GRWFileManager, NSString;

@interface GRWMessagingSharedStore : NSObject <GRWMessagingStore>
{
    GRWFileManager *_fileManager;
}

@property(readonly, nonatomic) GRWFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (void).cxx_destruct;
- (id)accountComponentForURL:(id)arg1;
- (id)bundleIdentifierComponentForURL:(id)arg1;
- (_Bool)isMessageStoreFileURL:(id)arg1;
- (id)fileUrl;
- (id)baseFileURL;
- (id)fileURLForUserID:(id)arg1;
- (id)messageSummaryFileURLForAllApps:(_Bool)arg1;
- (_Bool)removeAllMessages;
- (id)availableUserIDs;
- (_Bool)hasMessagesForUserID:(id)arg1;
- (_Bool)removeMessagesForUser:(id)arg1;
- (void)setMessages:(id)arg1 forUserID:(id)arg2;
- (id)messagesForUserID:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

