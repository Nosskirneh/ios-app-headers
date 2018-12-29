//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (Layout)
- (void)logFrameWithDescription:(id)arg1;
- (void)logRecursive;
- (void)logFrame;
- (void)log:(id)arg1;
- (void)log;
- (void)setHeight:(double)arg1;
- (void)setWidth:(double)arg1;
- (void)setBottom:(double)arg1;
- (void)setRight:(double)arg1;
- (void)setTop:(double)arg1;
- (void)setLeft:(double)arg1;
- (void)fillVerticallyTo:(id)arg1 padding:(double)arg2;
- (void)fillHorizontallyTo:(id)arg1 padding:(double)arg2;
- (void)matchSizeOfSubviews;
- (void)matchWidthOfSubviews;
- (void)matchHeightOfSubviews;
- (double)widthOfSubviews;
- (double)heightOfSubviews;
- (void)fillSuperview;
- (void)fillWidthOfSuperviewWithPadding:(double)arg1;
- (void)fillWidthOfSuperview;
- (void)fillPercentageWidthOfSuperview:(double)arg1;
- (void)fillHeightOfSuperviewWithPadding:(double)arg1;
- (void)fillHeightOfSuperview;
- (void)fillPercentageHeightOfSuperview:(double)arg1;
- (void)matchHeightOf:(id)arg1;
- (void)matchWidthOf:(id)arg1;
- (void)placeAtCenterInside:(id)arg1;
- (void)placeAtVerticalCenterInside:(id)arg1;
- (void)placeAtVerticalPercentage:(double)arg1 inside:(id)arg2;
- (void)placeAtHorizontalCenterInside:(id)arg1;
- (void)placeAtHorizontalPercentage:(double)arg1 inside:(id)arg2;
- (void)placeAtRightInside:(id)arg1 padding:(double)arg2;
- (void)placeAtRightInside:(id)arg1;
- (void)placeAtLeftInside:(id)arg1 padding:(double)arg2;
- (void)placeAtLeftInside:(id)arg1;
- (void)placeAtTopInside:(id)arg1 padding:(double)arg2;
- (void)placeAtTopInside:(id)arg1;
- (void)placeAtBottomInside:(id)arg1 padding:(double)arg2;
- (void)placeAtBottomInside:(id)arg1;
- (void)placeToRightOf:(id)arg1 padding:(double)arg2;
- (void)placeToRightOf:(id)arg1;
- (void)placeToLeftOf:(id)arg1 padding:(double)arg2;
- (void)placeToLeftOf:(id)arg1;
- (void)placeBelow:(id)arg1 padding:(double)arg2;
- (void)placeBelow:(id)arg1;
- (void)placeAbove:(id)arg1 padding:(double)arg2;
- (void)placeAbove:(id)arg1;
- (void)alignBottomWith:(id)arg1;
- (void)alignVerticalCenterWith:(id)arg1;
- (void)alignTopWith:(id)arg1;
- (void)alignRightWith:(id)arg1;
- (void)alignHorizontalCenterWith:(id)arg1;
- (void)alignLeftWith:(id)arg1;
- (void)moveBottomTo:(double)arg1;
- (void)moveVerticalCenterTo:(double)arg1;
- (void)moveTopTo:(double)arg1;
- (void)moveRightTo:(double)arg1;
- (void)moveHorizontalCenterTo:(double)arg1;
- (void)moveLeftTo:(double)arg1;
- (struct CGSize)size;
- (double)width;
- (double)height;
- (double)rightBound;
- (double)leftBound;
- (double)bottomBound;
- (double)topBound;
- (double)horizontalCenter;
- (double)verticalCenter;
- (double)right;
- (double)left;
- (double)bottom;
- (double)top;
@end
