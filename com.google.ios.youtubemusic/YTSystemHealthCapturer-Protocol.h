//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class YTISystemHealthMetricCaptured;
@protocol YTSystemHealthConfig;

@protocol YTSystemHealthCapturer <NSObject>
- (_Bool)captureSystemHealthMetrics:(YTISystemHealthMetricCaptured *)arg1;
- (_Bool)isEnabled;
- (void)configureWithConfig:(id <YTSystemHealthConfig>)arg1;
@end

