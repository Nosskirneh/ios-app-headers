//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTInnerTubeRequestor.h"

@interface YTMInnerTubeRequestor : YTInnerTubeRequestor
{
}

- (void)logRequestIfGetBrowse:(id)arg1;
- (void)makeInnerTubeRequest:(id)arg1 withParser:(id)arg2 valueHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4 retryEnabled:(_Bool)arg5 timeoutInterval:(double)arg6 enableLatencyTicks:(_Bool)arg7;
- (void)makeInnerTubeRequest:(id)arg1 withParser:(id)arg2 completionBlock:(CDUnknownBlockType)arg3 retryEnabled:(_Bool)arg4 timeoutInterval:(double)arg5 enableLatencyTicks:(_Bool)arg6 mutableSharedData:(id)arg7;

@end
