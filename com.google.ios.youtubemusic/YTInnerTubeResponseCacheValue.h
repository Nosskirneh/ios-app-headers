//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, YTInnerTubeResponseCacheContext;

@interface YTInnerTubeResponseCacheValue : NSObject
{
    NSArray *_responses;
    unsigned long long _cost;
    YTInnerTubeResponseCacheContext *_context;
    id _mutableSharedData;
}

@property(readonly, nonatomic) id mutableSharedData; // @synthesize mutableSharedData=_mutableSharedData;
@property(readonly, nonatomic) YTInnerTubeResponseCacheContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) unsigned long long cost; // @synthesize cost=_cost;
@property(readonly, nonatomic) NSArray *responses; // @synthesize responses=_responses;
- (void).cxx_destruct;
- (id)initWithResponse:(id)arg1 cacheContext:(id)arg2 cost:(unsigned long long)arg3 mutableSharedData:(id)arg4;
- (id)initWithResponses:(id)arg1 cacheContext:(id)arg2 cost:(unsigned long long)arg3 mutableSharedData:(id)arg4;

@end

