//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@interface _TtC6Deezer11CardsLayout : UICollectionViewFlowLayout
{
    // Error parsing type: , name: sideItemSpacing
    // Error parsing type: , name: sideItemScale
    // Error parsing type: , name: sideItemAlpha
    // Error parsing type: , name: canAutomaticallyAdjustsDecelerationRate
    // Error parsing type: , name: lastCenteredPage
    // Error parsing type: , name: lastState
}

- (id)initWithCoder:(id)arg1;
- (id)init;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)finalizeAnimatedBoundsChange;
- (void)prepareLayout;
@property(nonatomic) long long lastCenteredPage; // @synthesize lastCenteredPage;
@property(nonatomic) _Bool canAutomaticallyAdjustsDecelerationRate; // @synthesize canAutomaticallyAdjustsDecelerationRate;
@property(nonatomic) double sideItemAlpha; // @synthesize sideItemAlpha;
@property(nonatomic) double sideItemScale; // @synthesize sideItemScale;
@property(nonatomic) double sideItemSpacing; // @synthesize sideItemSpacing;

@end

