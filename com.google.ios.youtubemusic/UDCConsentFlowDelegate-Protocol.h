//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class UDCConsentCheckResult, UDCConsentDialogResult, UDCConsentFlow;

@protocol UDCConsentFlowDelegate
- (void)consentFlow:(UDCConsentFlow *)arg1 dialogDidReturn:(UDCConsentDialogResult *)arg2;
- (void)consentFlow:(UDCConsentFlow *)arg1 checkDidReturn:(UDCConsentCheckResult *)arg2;
@end
