//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView, YTCellController;

@protocol YTSectionSelectionBehavior <NSObject>
- (void)didDeselectItemAtIndex:(long long)arg1 cellController:(YTCellController *)arg2 fromView:(UIView *)arg3;
- (void)didSelectItemAtIndex:(long long)arg1 cellController:(YTCellController *)arg2 fromView:(UIView *)arg3;
- (_Bool)shouldSelectItemAtIndex:(unsigned long long)arg1 cellController:(YTCellController *)arg2;
@end

