//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol _TtP3Ads25AnalyticsAdStateProviding_ <NSObject>
@property(nonatomic, readonly) NSString *requestEndpoint;
- (long long)eventVersion;
- (NSDictionary *)impressionEventAttributesOnScreen:(long long)arg1;
- (NSDictionary *)clickEventAttributesOnScreen:(long long)arg1;
@end
