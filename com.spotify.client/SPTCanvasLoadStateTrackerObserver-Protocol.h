//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SPTCanvasLoadStateUpdater;

@protocol SPTCanvasLoadStateTrackerObserver <NSObject>
- (void)loadStateUpdater:(id <SPTCanvasLoadStateUpdater>)arg1 didUpdateforCanvasId:(NSString *)arg2;

@optional
- (void)loadStateWillNoLongerUpdateForCanvasId:(NSString *)arg1;
@end

