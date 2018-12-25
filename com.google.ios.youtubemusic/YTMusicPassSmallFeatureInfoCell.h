//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTCollectionViewCell.h"

#import "YTCollectionViewCellProtocol-Protocol.h"
#import "YTFormattedStringLabelDelegate-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"

@class NSString, YTIMusicPassSmallFeatureInfoRenderer, YTMusicPassSmallFeatureInfoView;
@protocol YTResponder;

@interface YTMusicPassSmallFeatureInfoCell : YTCollectionViewCell <YTFormattedStringLabelDelegate, YTCollectionViewCellProtocol, YTThumbnailMapping>
{
    YTIMusicPassSmallFeatureInfoRenderer *_renderer;
    YTMusicPassSmallFeatureInfoView *_view;
    id <YTResponder> _parentResponder;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
- (void)setParentResponder:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void).cxx_destruct;
- (id)thumbnailMappings;
- (void)formattedStringLabel:(id)arg1 didPressNavigationEndpoint:(id)arg2 linkText:(id)arg3;
- (void)formattedStringLabel:(id)arg1 didPressURL:(id)arg2;
- (id)entry;
- (void)setEntry:(id)arg1;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
