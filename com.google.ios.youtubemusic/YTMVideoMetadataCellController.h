//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTInnerTubeCellController.h"

#import "YTMVideoMetadataCellDelegate-Protocol.h"

@class NSString;

@interface YTMVideoMetadataCellController : YTInnerTubeCellController <YTMVideoMetadataCellDelegate>
{
    _Bool _expanded;
}

- (id)metadataCell;
- (void)videoMetadataCell:(id)arg1 didTapExpandButton:(id)arg2;
- (struct CGSize)cellSizeWithSize:(struct CGSize)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
- (struct CGSize)cellSizeWithSize:(struct CGSize)arg1;
- (void)setCell:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
