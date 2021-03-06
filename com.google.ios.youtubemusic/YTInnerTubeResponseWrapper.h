//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GPBMessage, YTInnerTubeResponseCacheContext, YTNetworkRequestStatistics;

@interface YTInnerTubeResponseWrapper : NSObject
{
    GPBMessage *_response;
    YTInnerTubeResponseCacheContext *_cacheContext;
    YTNetworkRequestStatistics *_requestStatistics;
    id _mutableSharedData;
}

@property(readonly, nonatomic) id mutableSharedData; // @synthesize mutableSharedData=_mutableSharedData;
@property(readonly, nonatomic) YTNetworkRequestStatistics *requestStatistics; // @synthesize requestStatistics=_requestStatistics;
@property(readonly, nonatomic) YTInnerTubeResponseCacheContext *cacheContext; // @synthesize cacheContext=_cacheContext;
@property(readonly, nonatomic) GPBMessage *response; // @synthesize response=_response;
- (void).cxx_destruct;
- (id)initWithResponse:(id)arg1 cacheContext:(id)arg2 requestStatistics:(id)arg3 mutableSharedData:(id)arg4;

@end

