//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, RHMetricsController;

@interface RHSearchAllMetricsService : NSObject
{
    RHMetricsController *_metricsController;
    NSString *_screenName;
}

@property(copy, nonatomic) NSString *screenName; // @synthesize screenName=_screenName;
@property(retain, nonatomic) RHMetricsController *metricsController; // @synthesize metricsController=_metricsController;
- (void).cxx_destruct;
- (void)trackEventForElementName:(id)arg1;
- (id)initWithMetricsController:(id)arg1 andScreenName:(id)arg2;

@end

