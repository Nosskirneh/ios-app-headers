//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC4WiMP14LocalPlayQueue.h"

#import "_TtP4WiMP17PlayQueuePlayable_-Protocol.h"

@interface _TtC4WiMP14LocalPlayQueue (WiMP1) <_TtP4WiMP17PlayQueuePlayable_>
- (void)sourceDataLoadedWithOptions:(id)arg1;
- (void)clearQueueAndStopPlayback;
- (void)playWithItems:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)playWithItems:(id)arg1 options:(id)arg2;
- (void)playPreviousItem;
- (void)playNextItem;
- (void)playCurrentItem;
- (void)endPreparingForPlayback;
- (void)beginPreparingForPlayback;
@end

