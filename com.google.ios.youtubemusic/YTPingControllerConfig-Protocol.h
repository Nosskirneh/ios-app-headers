//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class YTIPingConfigSet;

@protocol YTPingControllerConfig <NSObject>
@property(readonly, nonatomic) _Bool doNotCount;
- (YTIPingConfigSet *)drpConfig;
- (YTIPingConfigSet *)remarketingConfig;
- (YTIPingConfigSet *)ptrackingConfig;
- (YTIPingConfigSet *)atrConfig;
- (YTIPingConfigSet *)qoeConfig;
- (YTIPingConfigSet *)vssConfig;
- (double)timeoutInterval;
@end

