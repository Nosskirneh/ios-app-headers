//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC3Ads16AnalyticsAdState.h"

@class NSDictionary, NSURL;

@interface _TtC3Ads22InlayAppInstallAdState : _TtC3Ads16AnalyticsAdState
{
    // Error parsing type: , name: clickthroughUrl
}

+ (id)monetizationType;
+ (id)monetizationTypeKey;
+ (id)clickTargetKey;
+ (id)adUrnKey;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithAdNetworkUrn:(id)arg1 impressionUrls:(id)arg2 clickUrls:(id)arg3 monetizableTrackUrn:(id)arg4 monetizationType:(id)arg5 requestEndpoint:(id)arg6;
- (long long)eventVersion;
@property(nonatomic, readonly) NSDictionary *defaultAttributes;
- (id)clickEventAttributesOnScreen:(long long)arg1;
- (id)impressionName;
- (id)initWithAdUrn:(id)arg1 impressionUrls:(id)arg2 clickUrls:(id)arg3 clickthroughUrl:(id)arg4 requestEndpoint:(id)arg5;
@property(nonatomic, copy) NSURL *clickthroughUrl; // @synthesize clickthroughUrl;

@end

