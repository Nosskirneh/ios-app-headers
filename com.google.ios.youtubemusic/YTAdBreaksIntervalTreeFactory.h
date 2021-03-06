//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, YTIAdRequestConfig;

@interface YTAdBreaksIntervalTreeFactory : NSObject
{
    YTIAdRequestConfig *_adRequestConfig;
    NSMutableArray *_adBreaks;
    double _videoLength;
}

@property(nonatomic) double videoLength; // @synthesize videoLength=_videoLength;
@property(retain, nonatomic) NSMutableArray *adBreaks; // @synthesize adBreaks=_adBreaks;
- (void).cxx_destruct;
- (void)logErrorIfUnsupportedAdType:(id)arg1;
- (double)playbackIntervalEnd:(id)arg1;
- (id)createIntervalTree;
- (void)sortAdBreaksByOffsetTime;
- (void)filterOutNonMidrollPostrollAdBreaks;
- (id)intervalTreeForAdBreaks:(id)arg1 videoLength:(double)arg2 adRequestConfig:(id)arg3;

@end

