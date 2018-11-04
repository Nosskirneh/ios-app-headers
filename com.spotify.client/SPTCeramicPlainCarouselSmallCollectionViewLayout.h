//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTCeramicCollectionViewLayout.h"

#import "SPTCeramicCollectionViewLayout.h"

@class NSString, SPTCeramicCollectionView;

@interface SPTCeramicPlainCarouselSmallCollectionViewLayout : SPTCeramicCollectionViewLayout <SPTCeramicCollectionViewLayout>
{
    _Bool _blockDescriptionSupport;
}

@property(readonly, nonatomic, getter=hasBlockDescriptionSupport) _Bool blockDescriptionSupport; // @synthesize blockDescriptionSupport=_blockDescriptionSupport;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2 headerDescriptionHeight:(double)arg3 footerHeight:(double)arg4;

// Remaining properties
@property(readonly, nonatomic, getter=isCellFullWidth) _Bool cellFullWidth;
@property(readonly, nonatomic) SPTCeramicCollectionView *collectionView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) struct CGRect externalVerticalScrollFrame;
@property(nonatomic) double footerHeight;
@property(readonly) unsigned long long hash;
@property(nonatomic) double headerDescriptionHeight;
@property(nonatomic) double interBlockSpaceHeight;
@property(readonly) Class superclass;

@end

