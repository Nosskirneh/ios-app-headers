//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTMCollectionViewCell.h"

#import "YTCellActionProtocol-Protocol.h"
#import "YTCollectionViewCellProtocol-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"

@class NSString, YTFormattedStringLabel, YTIAutomixPlaylistVideoRenderer, YTIAutomixPreviewVideoRenderer, YTImageView;
@protocol YTResponder;

@interface YTMAutomixPreviewVideoCell : YTMCollectionViewCell <YTCellActionProtocol, YTCollectionViewCellProtocol, YTThumbnailMapping>
{
    YTIAutomixPreviewVideoRenderer *_entry;
    YTIAutomixPlaylistVideoRenderer *_playlistEntry;
    YTImageView *_thumbnailView;
    YTFormattedStringLabel *_previewLabel;
    YTFormattedStringLabel *_titleLabel;
    YTFormattedStringLabel *_bylineLabel;
    id <YTResponder> _parentResponder;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
- (void)setParentResponder:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void).cxx_destruct;
- (id)thumbnailMappings;
- (void)removeActionTarget;
- (void)setActionTarget:(id)arg1 action:(SEL)arg2;
- (void)removeLongPressTarget;
- (void)setLongPressTarget:(id)arg1 action:(SEL)arg2;
- (id)entry;
- (void)setEntry:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
