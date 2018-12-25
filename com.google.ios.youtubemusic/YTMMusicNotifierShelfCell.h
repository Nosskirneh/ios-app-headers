//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTMCollectionViewCell.h"

#import "YTCollectionViewCellProtocol-Protocol.h"

@class NSArray, NSString, YTFormattedStringLabel, YTIMusicNotifierShelfRenderer;
@protocol YTResponder;

@interface YTMMusicNotifierShelfCell : YTMCollectionViewCell <YTCollectionViewCellProtocol>
{
    YTIMusicNotifierShelfRenderer *_renderer;
    YTFormattedStringLabel *_titleLabel;
    NSArray *_buttons;
    id <YTResponder> _parentResponder;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
- (void)setParentResponder:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void).cxx_destruct;
- (void)removeButtonTargets;
- (void)didTapButton:(id)arg1;
- (id)entry;
- (void)setEntry:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

