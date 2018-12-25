//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTMultiAccountDataDelegate-Protocol.h"
#import "YTSignInDataSource-Protocol.h"

@class GIMMe, NSString, YTGoogleAccount, YTMultiAccountData;
@protocol YTSignInDataSourceDelegate;

@interface YTSignInPersonasDataSource : NSObject <YTMultiAccountDataDelegate, YTSignInDataSource>
{
    YTGoogleAccount *_googleAccount;
    YTMultiAccountData *_accountsData;
    id <YTSignInDataSourceDelegate> _delegate;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) __weak id <YTSignInDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) YTMultiAccountData *accountsData; // @synthesize accountsData=_accountsData;
- (void).cxx_destruct;
- (long long)indexOfGoogleAccount:(id)arg1;
- (void)accountsListDidChange;
- (void)accountItemStatusDidChangeForAccountAtIndex:(unsigned long long)arg1 previousStatus:(unsigned long long)arg2 newStatus:(unsigned long long)arg3;
- (void)reloadAccountAtIndex:(long long)arg1;
- (id)googleAccountAtIndex:(long long)arg1;
- (long long)statusOfAccountAtIndex:(long long)arg1;
- (id)accountItemAtIndexPath:(id)arg1;
- (long long)numberOfItemsForAccountAtIndex:(long long)arg1;
- (long long)numberOfAccounts;
- (id)initWithGoogleAccount:(id)arg1 multiAccountData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
