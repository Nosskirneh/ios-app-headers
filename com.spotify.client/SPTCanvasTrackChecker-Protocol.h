//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, SPTPlayerTrack;

@protocol SPTCanvasTrackChecker <NSObject>
- (id <SPTCanvasModel>)canvasModelForTrack:(SPTPlayerTrack *)arg1 withPlaceholderURI:(NSURL *)arg2;
- (_Bool)isCanvasEnabledForTrack:(SPTPlayerTrack *)arg1;
@end
