//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTAccountsListResponseDataDelegate-Protocol.h"

@class GIMMe, NSArray, NSString;
@protocol YTMultiAccountDataDelegate;

@interface YTMultiAccountData : NSObject <YTAccountsListResponseDataDelegate>
{
    NSArray *_accountDataResponses;
    CDUnknownBlockType _completionBlock;
    GIMMe *_gimme;
    id <YTMultiAccountDataDelegate> _delegate;
}

@property(nonatomic) __weak id <YTMultiAccountDataDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (_Bool)isAccountDataStatusOnCompletion:(unsigned long long)arg1;
- (void)checkForCompletion;
- (_Bool)isValidIndexPath:(id)arg1;
- (long long)indexOfAccountWithGoogleAccount:(id)arg1;
- (id)accountDataForGoogleAccount:(id)arg1;
- (id)accountItemWithPageID:(id)arg1 forAccountAtIndex:(long long)arg2;
- (id)defaultServiceEndpointForAccountAtIndex:(long long)arg1;
- (void)fetchNextPageForAccountAtIndex:(long long)arg1;
- (void)accountStatusDidChangeForGoogleAccount:(id)arg1 previousStatus:(unsigned long long)arg2 newStatus:(unsigned long long)arg3;
- (id)accountItemsForGoogleAccount:(id)arg1;
- (id)personaAccountItemsForGoogleAccount:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)errorForAccountAtIndex:(long long)arg1;
- (unsigned long long)statusOfAccountAtIndex:(long long)arg1;
- (void)reloadItemsForAccountAtIndex:(long long)arg1 withPersonaVersion:(id)arg2;
- (void)reloadItemsForAccountAtIndex:(long long)arg1;
- (id)accountItemAtIndexPath:(id)arg1;
- (long long)numberOfItemsForAccountAtIndex:(long long)arg1;
- (long long)numberOfAccounts;
- (id)accountItemForGoogleAccount:(id)arg1;
- (id)googleAccountAtIndex:(long long)arg1;
- (void)setGoogleAccounts:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
