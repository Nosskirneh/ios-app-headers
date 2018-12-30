//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface M3U8ExtXStreamInfList : NSObject
{
    NSMutableArray *_m3u8InfoList;
}

@property(retain, nonatomic) NSMutableArray *m3u8InfoList; // @synthesize m3u8InfoList=_m3u8InfoList;
- (void).cxx_destruct;
- (void)removeAllStreamsWithResolutionSmallerThan:(struct CGSize)arg1;
- (void)removeAllStreamsExceptFirst;
- (id)description;
- (id)bestStreamWithSpeedInBytesPerSecond:(double)arg1;
- (id)streamWithSizeClosestTo:(struct CGSize)arg1;
- (void)bringStreamToFront:(id)arg1;
- (void)sortByBandwidthInOrder:(long long)arg1;
- (id)lastXStreamInf;
- (id)firstStreamInf;
- (id)xStreamInfAtIndex:(unsigned long long)arg1;
- (void)addExtXStreamInf:(id)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)init;

@end
