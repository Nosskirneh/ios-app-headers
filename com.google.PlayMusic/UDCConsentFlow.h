//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UDCConsentViewControllerDelegate-Protocol.h"

@class SSOService;
@protocol UDCClearcutHelper, UDCConsentFlowDelegate;

@interface UDCConsentFlow : NSObject <UDCConsentViewControllerDelegate>
{
    SSOService *_SSOService;
    id <UDCClearcutHelper> _clearcutHelper;
    double _startTime;
    id <UDCConsentFlowDelegate> _delegate;
}

@property(nonatomic) __weak id <UDCConsentFlowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)consentViewController:(id)arg1 didReturn:(long long)arg2 params:(id)arg3;
- (void)showDialogWithConfig:(id)arg1 navigationController:(id)arg2;
- (void)stopLatencyTrackerAndLog:(id)arg1 succeeded:(_Bool)arg2;
- (void)startLatencyTracker;
- (void)fetchSettingsDidFail:(id)arg1 error:(id)arg2;
- (void)fetchSettingsDidSucceed:(id)arg1 response:(id)arg2 UDCService:(id)arg3;
- (void)checkConsentWithParams:(id)arg1;
- (id)initWithSSOService:(id)arg1;

@end

