//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIColor;

@interface _TtC6Deezer18ElasticPageControl : UIControl
{
    // Error parsing type: , name: numberOfPages
    // Error parsing type: , name: hidesForSinglePage
    // Error parsing type: , name: pageIndicatorTintColor
    // Error parsing type: , name: currentPageIndicatorTintColor
    // Error parsing type: , name: pageIndicatorSize
    // Error parsing type: , name: currentPageIndicatorWidth
    // Error parsing type: , name: pageIndicatorRadius
    // Error parsing type: , name: spacing
    // Error parsing type: , name: progress
    // Error parsing type: , name: inactive
    // Error parsing type: , name: active
    // Error parsing type: , name: moveToPage
    // Error parsing type: , name: displayLink
}

- (CDUnknownBlockType).cxx_destruct;
- (void)updateFor:(double)arg1;
- (void)updateNumberOfPages:(unsigned long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (void)layoutSubviews;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) double progress; // @synthesize progress;
@property(nonatomic) double spacing; // @synthesize spacing;
@property(nonatomic) double pageIndicatorRadius; // @synthesize pageIndicatorRadius;
@property(nonatomic) double currentPageIndicatorWidth; // @synthesize currentPageIndicatorWidth;
@property(nonatomic) struct CGSize pageIndicatorSize; // @synthesize pageIndicatorSize;
@property(nonatomic, retain) UIColor *tintColor;
@property(nonatomic, retain) UIColor *currentPageIndicatorTintColor; // @synthesize currentPageIndicatorTintColor;
@property(nonatomic, retain) UIColor *pageIndicatorTintColor; // @synthesize pageIndicatorTintColor;
@property(nonatomic) _Bool hidesForSinglePage; // @synthesize hidesForSinglePage;
@property(nonatomic) unsigned long long numberOfPages; // @synthesize numberOfPages;
@property(nonatomic, readonly) long long currentPage;

@end

