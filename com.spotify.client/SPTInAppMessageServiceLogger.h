//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"

@class NSString, SPTDataLoader;
@protocol SPTLogCenter;

@interface SPTInAppMessageServiceLogger : NSObject <SPTDataLoaderDelegate>
{
    SPTDataLoader *_dataLoader;
    id <SPTLogCenter> _logCenter;
}

@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (id)parserTypeStringFromType:(long long)arg1;
- (id)requestTypeStringFromType:(long long)arg1;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)logInAppMessageWebviewEventWithMessageFormat:(id)arg1 messageId:(id)arg2 uuid:(id)arg3 eventType:(id)arg4 UIElement:(id)arg5 metadata:(id)arg6;
- (void)logInAppMessageInteractionWithMessageUUID:(id)arg1 actionType:(id)arg2;
- (void)logInAppMessagePresentedWithMessageUUID:(id)arg1 messageFormat:(id)arg2;
- (void)logInAppMessageTriggerMessageDiscardedWithReason:(id)arg1 triggerPattern:(id)arg2 triggerType:(id)arg3 messageFormat:(id)arg4 messsageID:(id)arg5;
- (void)logInAppMessageRegularExpressionPerformanceWithTriggersCount:(long long)arg1 performanceTime:(id)arg2;
- (void)logInAppMessageTriggerMessagePresentationPerformanceWithTriggerMessageId:(id)arg1 performanceTime:(id)arg2 messageFormat:(id)arg3 triggerPattern:(id)arg4 triggerType:(id)arg5;
- (void)logInAppMessageBackendRequestPerformanceWithRequestUri:(id)arg1 performanceTime:(id)arg2 requestType:(long long)arg3 messageFormat:(id)arg4;
- (void)logInAppMessageParserErrorOfType:(long long)arg1 error:(id)arg2 triggerID:(id)arg3 triggerMessageFormat:(id)arg4;
- (void)logInAppMessageFeedbackWithSelection:(id)arg1 messageIdentifier:(id)arg2 messageUUID:(id)arg3;
- (void)logInAppMessageBackendRequestErrorOfType:(long long)arg1 response:(id)arg2;
- (void)logInteractionWithTriggerMessageOfFormat:(id)arg1 trackingURL:(id)arg2;
- (void)logImpressionOfTriggerMessageWithImpressionUrl:(id)arg1 messageFormat:(id)arg2;
- (void)performLogRequestForURL:(id)arg1 type:(long long)arg2 messageFormat:(id)arg3;
- (id)initWithDataLoader:(id)arg1 logCenter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

