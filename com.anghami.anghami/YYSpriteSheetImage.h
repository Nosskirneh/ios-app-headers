//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

#import "YYAnimatedImage-Protocol.h"

@class NSArray, NSString;

@interface YYSpriteSheetImage : UIImage <YYAnimatedImage>
{
    NSArray *_contentRects;
    NSArray *_frameDurations;
    unsigned long long _loopCount;
}

@property(readonly, nonatomic) unsigned long long loopCount; // @synthesize loopCount=_loopCount;
@property(readonly, nonatomic) NSArray *frameDurations; // @synthesize frameDurations=_frameDurations;
@property(readonly, nonatomic) NSArray *contentRects; // @synthesize contentRects=_contentRects;
- (void).cxx_destruct;
- (struct CGRect)animatedImageContentsRectAtIndex:(unsigned long long)arg1;
- (double)animatedImageDurationAtIndex:(unsigned long long)arg1;
- (id)animatedImageFrameAtIndex:(unsigned long long)arg1;
- (unsigned long long)animatedImageBytesPerFrame;
- (unsigned long long)animatedImageLoopCount;
- (unsigned long long)animatedImageFrameCount;
- (struct CGRect)contentsRectForCALayerAtIndex:(unsigned long long)arg1;
- (id)initWithSpriteSheetImage:(id)arg1 contentRects:(id)arg2 frameDurations:(id)arg3 loopCount:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

