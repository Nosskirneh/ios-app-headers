//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "DZRDynamicPageCell-Protocol.h"
#import "_TtP6Deezer24IllustrationViewDelegate_-Protocol.h"

@class DZRPlayButton, NSString, UIImageView, UILabel, UIView, _TtC6Deezer16IllustrationView;
@protocol DZRDynamicPageItem;

@interface DZRDynamicPageHighlightCell : UICollectionViewCell <_TtP6Deezer24IllustrationViewDelegate_, DZRDynamicPageCell>
{
    id <DZRDynamicPageItem> _item;
    _TtC6Deezer16IllustrationView *_illustrationView;
    UIImageView *_blurIllustrationView;
    UIView *_maskView;
    DZRPlayButton *_playButton;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

+ (struct CGSize)sizeWithItem:(id)arg1 inSection:(id)arg2 usingBounds:(struct CGRect)arg3;
+ (id)cellIdentifier;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) DZRPlayButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIImageView *blurIllustrationView; // @synthesize blurIllustrationView=_blurIllustrationView;
@property(retain, nonatomic) _TtC6Deezer16IllustrationView *illustrationView; // @synthesize illustrationView=_illustrationView;
@property(retain, nonatomic) id <DZRDynamicPageItem> item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)swapBackgroundImageWith:(id)arg1;
- (void)illustrationView:(id)arg1 willChangeImage:(id)arg2 animated:(_Bool)arg3 forIllustration:(id)arg4;
- (void)layoutSubviewsForiPad;
- (void)layoutSubviewsForiPhone;
- (void)layoutSubviews;
- (void)populateWithItem:(id)arg1 inSection:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

