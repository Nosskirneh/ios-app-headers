//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTSeparatorCollectionViewFlowLayout.h"

@protocol YTInlinePlaybackFlowLayoutDelegate;

@interface YTInlinePlaybackSmallscreenFlowLayout : YTSeparatorCollectionViewFlowLayout
{
    double _headerPosition;
    id <YTInlinePlaybackFlowLayoutDelegate> _delegate;
    _Bool _isPortraitContentOffsetLocked;
    _Bool _stickyHeadersEnabled;
    _Bool _holdRelativeScrollPosition;
}

@property(nonatomic) _Bool holdRelativeScrollPosition; // @synthesize holdRelativeScrollPosition=_holdRelativeScrollPosition;
- (void).cxx_destruct;
- (_Bool)shouldLockPortraitContentOffsetForCollectionViewUpdates:(id)arg1;
- (id)stickyHeadersLayoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)setInlinePlaybackFlowLayoutDelegate:(id)arg1;

@end

