//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTCollectionViewCell.h"

#import "YTCollectionViewCellProtocol-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"

@class NSString, YTShareContactView;
@protocol YTResponder;

@interface YTShareCompactContactCell : YTCollectionViewCell <YTCollectionViewCellProtocol, YTThumbnailMapping>
{
    id _contactRenderer;
    YTShareContactView *_contactView;
    id <YTResponder> _parentResponder;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
- (void)setParentResponder:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void).cxx_destruct;
- (id)contactView;
- (void)dismissSuggestedContact;
- (void)didLongPress:(id)arg1;
- (id)entry;
- (void)setEntry:(id)arg1;
- (id)thumbnailMappings;
- (void)prepareForReuse;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

