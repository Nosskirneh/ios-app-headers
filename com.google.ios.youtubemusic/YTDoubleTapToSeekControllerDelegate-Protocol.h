//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol YTDoubleTapToSeekControllerDelegate <NSObject>
- (void)didEndDoubleTapToSeek;
- (void)willStartDoubleTapToSeek;
- (void)didSeekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (_Bool)canDoubleTapForCurrentPlayerState;
@end
