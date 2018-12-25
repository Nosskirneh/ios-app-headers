//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSCAccountsExternalSource-Protocol.h"
#import "SRLService-Protocol.h"

@class NSArray, NSMutableDictionary, NSString;
@protocol GSCAccountsExternalSourceDelegate, OS_dispatch_queue, SSOService;

@interface GSCSSOAccountsSource : NSObject <SRLService, GSCAccountsExternalSource>
{
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_queue> *_ssoQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id <SSOService> _ssoService;
    NSMutableDictionary *_accountsDict;
    id <GSCAccountsExternalSourceDelegate> _delegate;
}

@property(nonatomic) __weak id <GSCAccountsExternalSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned long long)userTypeForProfile:(id)arg1;
- (id)accountFromSSOIdentity:(id)arg1 profileDict:(id)arg2;
- (id)updateAccount:(id)arg1;
- (void)updateAccount:(id)arg1 withPromise:(id)arg2;
- (id)refreshAccountWithSSOIdentity:(id)arg1;
- (void)ssoProfileDidUpdate:(id)arg1;
- (void)ssoIdentityListDidChange:(id)arg1;
- (id)deleteAccountWithId:(id)arg1;
- (id)refreshAccountWithId:(id)arg1;
@property(readonly, nonatomic) NSArray *accounts;
- (void)dealloc;
- (id)initWithSSOService:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithSSOServiceProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

