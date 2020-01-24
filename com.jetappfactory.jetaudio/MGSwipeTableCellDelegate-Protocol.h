//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MGSwipeExpansionSettings, MGSwipeSettings, MGSwipeTableCell, NSArray;

@protocol MGSwipeTableCellDelegate <NSObject>

@optional
- (void)swipeTableCellWillEndSwiping:(MGSwipeTableCell *)arg1;
- (void)swipeTableCellWillBeginSwiping:(MGSwipeTableCell *)arg1;
- (_Bool)swipeTableCell:(MGSwipeTableCell *)arg1 shouldHideSwipeOnTap:(struct CGPoint)arg2;
- (NSArray *)swipeTableCell:(MGSwipeTableCell *)arg1 swipeButtonsForDirection:(long long)arg2 swipeSettings:(MGSwipeSettings *)arg3 expansionSettings:(MGSwipeExpansionSettings *)arg4;
- (_Bool)swipeTableCell:(MGSwipeTableCell *)arg1 tappedButtonAtIndex:(long long)arg2 direction:(long long)arg3 fromExpansion:(_Bool)arg4;
- (void)swipeTableCell:(MGSwipeTableCell *)arg1 didChangeSwipeState:(long long)arg2 gestureIsActive:(_Bool)arg3;
- (_Bool)swipeTableCell:(MGSwipeTableCell *)arg1 canSwipe:(long long)arg2;
- (_Bool)swipeTableCell:(MGSwipeTableCell *)arg1 canSwipe:(long long)arg2 fromPoint:(struct CGPoint)arg3;
@end

