//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIExchangeRetriever.h"

#import "AIAuthenticationDelegate-Protocol.h"

@class NSString;

@interface AIProfileExchangerRetriever : AIExchangeRetriever <AIAuthenticationDelegate>
{
}

- (void)requestDidFail:(id)arg1;
- (void)requestDidSucceed:(id)arg1;
- (void)removeScopeFromRefreshToken:(id)arg1 errorObject:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)handleInvalidRequestToken;
- (void)invokeAuthenticationDelegatesOnFailure;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

