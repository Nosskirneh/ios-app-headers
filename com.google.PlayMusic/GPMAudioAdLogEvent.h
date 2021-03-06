//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPMAdLogEvent.h"

@class IMAAdError;

@interface GPMAudioAdLogEvent : GPMAdLogEvent
{
    long long _renderResult;
    long long _responseLatencyMillis;
    long long _networkType;
    long long _adLengthMillis;
    _Bool _companionAdShown;
    IMAAdError *_maybeError;
}

- (void).cxx_destruct;
- (int)renderResultFrommGPMRenderResult:(long long)arg1;
- (id)musicClientEvent;
- (id)initWithRenderResult:(long long)arg1 responseLatencyMillis:(long long)arg2 networkType:(long long)arg3 adLengthMillis:(long long)arg4 companionAdShown:(_Bool)arg5 maybeErrorCode:(id)arg6;

@end

