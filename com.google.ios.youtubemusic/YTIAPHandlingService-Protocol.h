//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GPBMessage;

@protocol YTIAPHandlingService <NSObject>
- (_Bool)handlesTransactionType:(unsigned long long)arg1;
- (void)makeRequestWithProto:(GPBMessage *)arg1 innerTubeResponseBlock:(void (^)(id, YTInnerTubeResponseCacheContext *))arg2 errorBlock:(void (^)(NSError *))arg3;
@end

