//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "DZRDynamicPageCell-Protocol.h"

@class DZRDynamicPageOnAirLabel, DZRDynamicPageShadeView, DZREdgeInsetsLabel, NSString, UILabel, UIView, _TtC6Deezer16IllustrationView;

@interface DZRDynamicPageDeeplinkLargeCardCell : UICollectionViewCell <DZRDynamicPageCell>
{
    UIView *_labelsContainer;
    DZRDynamicPageOnAirLabel *_onAirLabel;
    DZREdgeInsetsLabel *_roundedLabel;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_captionLabel;
    DZRDynamicPageShadeView *_shadeView;
    _TtC6Deezer16IllustrationView *_illustrationView;
}

+ (struct CGSize)sizeWithItem:(id)arg1 inSection:(id)arg2 usingBounds:(struct CGRect)arg3;
+ (id)cellIdentifier;
@property(retain, nonatomic) _TtC6Deezer16IllustrationView *illustrationView; // @synthesize illustrationView=_illustrationView;
@property(retain, nonatomic) DZRDynamicPageShadeView *shadeView; // @synthesize shadeView=_shadeView;
@property(retain, nonatomic) UILabel *captionLabel; // @synthesize captionLabel=_captionLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) DZREdgeInsetsLabel *roundedLabel; // @synthesize roundedLabel=_roundedLabel;
@property(retain, nonatomic) DZRDynamicPageOnAirLabel *onAirLabel; // @synthesize onAirLabel=_onAirLabel;
@property(retain, nonatomic) UIView *labelsContainer; // @synthesize labelsContainer=_labelsContainer;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)nonEmptyLabels;
- (id)allLabels;
- (void)populateWithItem:(id)arg1 inSection:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

