//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTBlobStorageKey-Protocol.h"

@class NSString;

@interface YTBlobStorageKeyImpl : NSObject <YTBlobStorageKey>
{
    _Bool _matchAllUsers;
    NSString *_userID;
    NSString *_namespace;
    NSString *_key;
}

@property(readonly, nonatomic) _Bool matchAllUsers; // @synthesize matchAllUsers=_matchAllUsers;
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic) NSString *namespace; // @synthesize namespace=_namespace;
@property(readonly, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (id)initWithUserID:(id)arg1 namespace:(id)arg2 key:(id)arg3 matchAllUsers:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

