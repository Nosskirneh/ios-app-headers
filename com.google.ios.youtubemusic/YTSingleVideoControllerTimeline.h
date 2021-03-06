//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, YTSingleVideoNode;

@interface YTSingleVideoControllerTimeline : NSObject
{
    GIMMe *_gimme;
    YTSingleVideoNode *_headNode;
    YTSingleVideoNode *_contentNode;
}

@property(readonly, nonatomic) YTSingleVideoNode *contentNode; // @synthesize contentNode=_contentNode;
@property(readonly, nonatomic) YTSingleVideoNode *headNode; // @synthesize headNode=_headNode;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)removeNode:(id)arg1;
- (id)initWithPlaybackData:(id)arg1 initialContentMediaTime:(double)arg2 prebufferedContentVideo:(id)arg3;

@end

