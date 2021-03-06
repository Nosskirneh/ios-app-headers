//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class YTPlaybackData, YTSingleVideoController;

@interface YTSingleVideoNode : NSObject
{
    YTSingleVideoNode *_next;
    YTSingleVideoController *_videoController;
    YTPlaybackData *_playbackData;
}

@property(readonly, nonatomic) YTPlaybackData *playbackData; // @synthesize playbackData=_playbackData;
@property(readonly, nonatomic) YTSingleVideoController *videoController; // @synthesize videoController=_videoController;
@property(retain, nonatomic) YTSingleVideoNode *next; // @synthesize next=_next;
- (void).cxx_destruct;
- (id)initWithVideoController:(id)arg1 playbackData:(id)arg2;

@end

