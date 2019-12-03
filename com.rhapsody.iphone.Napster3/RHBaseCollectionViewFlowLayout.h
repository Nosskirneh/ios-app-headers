//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PSTCollectionViewFlowLayout.h"

#import "RHCollectionViewDelegateFlowLayout-Protocol.h"

@class NSString;

@interface RHBaseCollectionViewFlowLayout : PSTCollectionViewFlowLayout <RHCollectionViewDelegateFlowLayout>
{
    NSString *_headerXibName;
    NSString *_footerXibName;
    struct CGSize _viewSizePortrait;
    struct CGSize _viewSizeLandscape;
    struct CGSize _cellSizePortrait;
    struct CGSize _cellSizeLandscape;
}

@property(nonatomic) struct CGSize cellSizeLandscape; // @synthesize cellSizeLandscape=_cellSizeLandscape;
@property(nonatomic) struct CGSize cellSizePortrait; // @synthesize cellSizePortrait=_cellSizePortrait;
@property(nonatomic) struct CGSize viewSizeLandscape; // @synthesize viewSizeLandscape=_viewSizeLandscape;
@property(nonatomic) struct CGSize viewSizePortrait; // @synthesize viewSizePortrait=_viewSizePortrait;
@property(retain, nonatomic) NSString *footerXibName; // @synthesize footerXibName=_footerXibName;
@property(retain, nonatomic) NSString *headerXibName; // @synthesize headerXibName=_headerXibName;
- (void).cxx_destruct;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)setupDefaults;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
