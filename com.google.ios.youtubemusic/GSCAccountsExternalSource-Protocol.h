//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GPCPromise, NSArray;
@protocol GSCAccountId, GSCAccountsExternalSourceDelegate;

@protocol GSCAccountsExternalSource <NSObject>
@property(readonly, nonatomic) NSArray *accounts;
@property(nonatomic) __weak id <GSCAccountsExternalSourceDelegate> delegate;
- (GPCPromise *)deleteAccountWithId:(id <GSCAccountId>)arg1;
- (GPCPromise *)refreshAccountWithId:(id <GSCAccountId>)arg1;
@end

