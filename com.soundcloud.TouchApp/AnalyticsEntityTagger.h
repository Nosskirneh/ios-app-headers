//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol _TtP8Features28APAnalyticsProviderInterface_;

@interface AnalyticsEntityTagger : NSObject
{
    id <_TtP8Features28APAnalyticsProviderInterface_> _analyticsProvider;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) id <_TtP8Features28APAnalyticsProviderInterface_> analyticsProvider; // @synthesize analyticsProvider=_analyticsProvider;
- (void).cxx_destruct;
- (id)screenName:(long long)arg1;
- (_Bool)isValidScreen:(long long)arg1;
- (void)tagEvents:(id)arg1;
- (id)promotedEventsForUrls:(id)arg1;
- (id)initWithAnalyticsProvider:(id)arg1;

@end
