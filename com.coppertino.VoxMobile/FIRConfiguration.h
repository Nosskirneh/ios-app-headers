//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FIRAnalyticsConfiguration;

@interface FIRConfiguration : NSObject
{
    FIRAnalyticsConfiguration *_analyticsConfiguration;
    long long _logLevel;
}

+ (id)sharedInstance;
@property(nonatomic) long long logLevel; // @synthesize logLevel=_logLevel;
@property(retain, nonatomic) FIRAnalyticsConfiguration *analyticsConfiguration; // @synthesize analyticsConfiguration=_analyticsConfiguration;
- (void).cxx_destruct;
- (void)setLoggerLevel:(long long)arg1;
- (id)init;

@end

