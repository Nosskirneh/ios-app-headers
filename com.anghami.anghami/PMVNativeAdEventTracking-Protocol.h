//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol PMVNativeAdTrackable, PMVStoppable;

@protocol PMVNativeAdEventTracking <NSObject>
- (id <PMVStoppable>)trackEventKind:(long long)arg1 ad:(id <PMVNativeAdTrackable>)arg2 path:(NSString *)arg3 title:(NSString *)arg4 label:(NSString *)arg5;
@end

