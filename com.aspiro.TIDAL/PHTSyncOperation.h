//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PHTBaseOperation.h"

@class GMVGIPPseudonymousIDStore, NSString;
@protocol CCTClockProtocol, PHTPhenotypeAccount;

@interface PHTSyncOperation : PHTBaseOperation
{
    GMVGIPPseudonymousIDStore *_pseudonymousIDStore;
    id <PHTPhenotypeAccount> _account;
    NSString *_overrideServerURL;
    long long _syncType;
    id <CCTClockProtocol> _clock;
    CDUnknownBlockType _callback;
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) id <CCTClockProtocol> clock; // @synthesize clock=_clock;
@property(nonatomic) long long syncType; // @synthesize syncType=_syncType;
@property(retain, nonatomic) NSString *overrideServerURL; // @synthesize overrideServerURL=_overrideServerURL;
@property(retain, nonatomic) id <PHTPhenotypeAccount> account; // @synthesize account=_account;
@property(readonly, nonatomic) GMVGIPPseudonymousIDStore *pseudonymousIDStore; // @synthesize pseudonymousIDStore=_pseudonymousIDStore;
- (void).cxx_destruct;
- (void)processResponse:(id)arg1 originalRequest:(id)arg2 changeCount:(long long)arg3;
- (void)handleRetryAfter:(id)arg1 syncType:(long long)arg2 callback:(CDUnknownBlockType)arg3;
- (void)sendRequest:(id)arg1 changeCount:(long long)arg2;
- (void)execute;
- (_Bool)shouldBeLogged;
- (id)initWithWithCounterName:(id)arg1 logger:(id)arg2 database:(id)arg3 pseudonymousIDStore:(id)arg4 account:(id)arg5 overrideServerURL:(id)arg6 syncType:(long long)arg7 clock:(id)arg8 callback:(CDUnknownBlockType)arg9;

@end

