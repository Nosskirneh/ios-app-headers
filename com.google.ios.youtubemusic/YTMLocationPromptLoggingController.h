//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTGraftingViewController-Protocol.h"
#import "YTResponder-Protocol.h"

@class NSString, YTICommand, YTInteractionLoggingProxyButton;
@protocol YTResponder;

@interface YTMLocationPromptLoggingController : NSObject <YTGraftingViewController, YTResponder>
{
    YTInteractionLoggingProxyButton *_systemLocationCancelButton;
    YTInteractionLoggingProxyButton *_systemLocationAllowAlwaysButton;
    YTInteractionLoggingProxyButton *_systemLocationAllowWhileUsingButton;
    YTInteractionLoggingProxyButton *_locationReportingCancelButton;
    YTInteractionLoggingProxyButton *_locationReportingConfirmButton;
    id <YTResponder> _parentResponder;
    YTICommand *_navEndpoint;
}

@property(retain, nonatomic) YTICommand *navEndpoint; // @synthesize navEndpoint=_navEndpoint;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)logClickForButton:(id)arg1;
- (id)visibleProxyButtonWithVEType:(int)arg1;
- (void)endLoggingForCurrentDialog;
- (void)logLocationReportingPermissionGranted;
- (void)logLocationReportingPermissionDenied;
- (void)logNewLocationReportingPrompt;
- (void)logSystemLocationPermissionAllowWhileUsingGranted;
- (void)logSystemLocationPermissionAllowAlwaysGranted;
- (void)logSystemLocationPermissionDenied;
- (void)logNewSystemLocationPrompt;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

