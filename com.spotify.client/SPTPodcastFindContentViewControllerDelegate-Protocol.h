//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIScrollView;

@protocol SPTPodcastFindContentViewControllerDelegate <NSObject>
- (void)updateEmptyStateWithDataLoaded:(_Bool)arg1;
- (void)scrollViewDidEndScrolling:(UIScrollView *)arg1;
- (void)scrollView:(UIScrollView *)arg1 contentOffsetDidChange:(struct CGPoint)arg2;
@end

