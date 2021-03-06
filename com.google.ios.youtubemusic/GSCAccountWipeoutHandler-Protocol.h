//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GPCPromise;
@protocol GSCAccountId;

@protocol GSCAccountWipeoutHandler <NSObject>

@optional
- (void)didDeleteAccountWithId:(id <GSCAccountId>)arg1;
- (GPCPromise *)didDeactivateAccountWithId:(id <GSCAccountId>)arg1;
@end

