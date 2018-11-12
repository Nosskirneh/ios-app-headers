//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "HUBViewControllerScrollHandler-Protocol.h"

@interface HUBViewControllerDefaultScrollHandler : NSObject <HUBViewControllerScrollHandler>
{
}

- (struct CGPoint)contentOffsetForDisplayingComponentAtIndex:(unsigned long long)arg1 scrollPosition:(unsigned long long)arg2 contentInset:(struct UIEdgeInsets)arg3 contentSize:(struct CGSize)arg4 viewController:(id)arg5;
- (struct CGPoint)targetContentOffsetForEndedScrollInViewController:(id)arg1 velocity:(struct CGVector)arg2 contentInset:(struct UIEdgeInsets)arg3 currentContentOffset:(struct CGPoint)arg4 proposedContentOffset:(struct CGPoint)arg5;
- (void)scrollingDidEndInViewController:(id)arg1 currentContentRect:(struct CGRect)arg2;
- (void)scrollingWillStartInViewController:(id)arg1 currentContentRect:(struct CGRect)arg2;
- (void)scrollViewDidScrollInViewController:(id)arg1 withContentOffset:(struct CGPoint)arg2;
- (struct UIEdgeInsets)contentInsetsForViewController:(id)arg1 proposedContentInsets:(struct UIEdgeInsets)arg2;
- (double)scrollDecelerationRateForViewController:(id)arg1;
- (long long)keyboardDismissModeForViewController:(id)arg1;
- (_Bool)shouldAutomaticallyAdjustContentInsetsInViewController:(id)arg1;
- (_Bool)shouldShowScrollIndicatorsInViewController:(id)arg1;

@end

