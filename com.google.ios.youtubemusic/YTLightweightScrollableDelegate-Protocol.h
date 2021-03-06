//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol YTLightweightScrollable;

@protocol YTLightweightScrollableDelegate <NSObject>

@optional
- (void)scrollableWillEndDragging:(id <YTLightweightScrollable>)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollableDidEndDecelerating:(id <YTLightweightScrollable>)arg1;
- (void)scrollableWillBeginDragging:(id <YTLightweightScrollable>)arg1;
- (void)scrollableDidEndDragging:(id <YTLightweightScrollable>)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollableDidScroll:(id <YTLightweightScrollable>)arg1;
@end

