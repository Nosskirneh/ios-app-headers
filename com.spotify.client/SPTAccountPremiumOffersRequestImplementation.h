//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAccountEligibilityRequest-Protocol.h"
#import "SPTDataLoaderDelegate-Protocol.h"

@class NSString, SPTDataLoader;
@protocol SPTAccountEligibilityRequestDelegate, SPTDataLoaderCancellationToken;

@interface SPTAccountPremiumOffersRequestImplementation : NSObject <SPTDataLoaderDelegate, SPTAccountEligibilityRequest>
{
    id <SPTAccountEligibilityRequestDelegate> delegate;
    NSString *_deviceId;
    SPTDataLoader *_dataLoader;
    id <SPTDataLoaderCancellationToken> _currentRequestCancellationToken;
}

@property(retain, nonatomic) id <SPTDataLoaderCancellationToken> currentRequestCancellationToken; // @synthesize currentRequestCancellationToken=_currentRequestCancellationToken;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(nonatomic) __weak id <SPTAccountEligibilityRequestDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)failWithError:(id)arg1;
- (void)finishWithResponse:(id)arg1;
- (void)cancel;
- (void)start;
- (void)dealloc;
- (id)initWithDeviceId:(id)arg1 dataLoader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

