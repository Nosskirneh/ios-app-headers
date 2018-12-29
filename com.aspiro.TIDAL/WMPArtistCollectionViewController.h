//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WMPCollectionViewController.h"

@class NSString, WMPImageService;

@interface WMPArtistCollectionViewController : WMPCollectionViewController
{
    long long _cellType;
    NSString *_cellId;
    WMPImageService *_imageService;
}

+ (id)getInstance;
@property(retain, nonatomic) WMPImageService *imageService; // @synthesize imageService=_imageService;
@property(retain, nonatomic) NSString *cellId; // @synthesize cellId=_cellId;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
- (void).cxx_destruct;
- (id)artistAtIndexPath:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)didPressMoreButton:(id)arg1;
- (void)configureWithItemId:(id)arg1 entityName:(id)arg2 sortAndRangeParameters:(id)arg3 cellType:(long long)arg4;
- (void)configureWithCellType:(long long)arg1;
- (double)otherContentHeight;
- (double)artworkRatio;
- (id)initWithCoder:(id)arg1;

@end

