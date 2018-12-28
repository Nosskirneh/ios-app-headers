//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADNObserverCollection, NSArray, NSOperationQueue;

@interface GADNManualImpressionMonitor : NSObject
{
    NSArray *_manualImpressionURLStrings;
    NSOperationQueue *_observationQueue;
    GADNObserverCollection *_observers;
}

+ (void)addMonitorToAd:(id)arg1 adConfiguration:(struct NSDictionary *)arg2;
- (void).cxx_destruct;
- (void)handleManualImpressionInContext:(id)arg1;
- (id)initWithAd:(id)arg1 manualImpressionURLStrings:(id)arg2;

@end

