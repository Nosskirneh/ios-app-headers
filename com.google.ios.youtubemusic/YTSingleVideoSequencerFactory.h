//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe;

@interface YTSingleVideoSequencerFactory : NSObject
{
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)sequencerWithPlaybackData:(id)arg1 delegate:(id)arg2 videoControllerDelegate:(id)arg3 playerView:(id)arg4 viewportSizeProvider:(id)arg5;

@end

