//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UACustomEvent, UARegionEvent;

@protocol UAAnalyticsDelegate <NSObject>

@optional
- (void)screenTracked:(NSString *)arg1;
- (void)regionEventAdded:(UARegionEvent *)arg1;
- (void)customEventAdded:(UACustomEvent *)arg1;
@end
