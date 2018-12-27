//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FIRAnalyticsInterop-Protocol.h"
#import "FIRComponentRegistrant-Protocol.h"

@class FIRAnalytics;

@interface FIRAnalyticsConnector : NSObject <FIRComponentRegistrant, FIRAnalyticsInterop>
{
    FIRAnalytics *_analytics;
}

+ (id)componentsToRegister;
+ (void)load;
@property(nonatomic) __weak FIRAnalytics *analytics; // @synthesize analytics=_analytics;
- (void).cxx_destruct;
- (void)setUserPropertyWithOrigin:(id)arg1 name:(id)arg2 value:(id)arg3;
- (void)setConditionalUserProperty:(id)arg1;
- (long long)maxUserProperties:(id)arg1;
- (void)logEventWithOrigin:(id)arg1 name:(id)arg2 parameters:(id)arg3;
- (id)conditionalUserProperties:(id)arg1 propertyNamePrefix:(id)arg2;
- (void)clearConditionalUserProperty:(id)arg1 clearEventName:(id)arg2 clearEventParameters:(id)arg3;

@end

