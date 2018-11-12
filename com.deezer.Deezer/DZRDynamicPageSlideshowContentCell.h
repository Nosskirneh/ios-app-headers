//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "DZRDynamicPageCell-Protocol.h"
#import "DZRUpdatableCell-Protocol.h"
#import "_TtP6Deezer24IllustrationViewDelegate_-Protocol.h"

@class DZFlatButton, DZRDynamicPageShadeView, NSString, UIImage, UILabel, UIView, _TtC6Deezer16IllustrationView;
@protocol DZRDynamicPageItem;

@interface DZRDynamicPageSlideshowContentCell : UICollectionViewCell <DZRUpdatableCell, _TtP6Deezer24IllustrationViewDelegate_, DZRDynamicPageCell>
{
    id <DZRDynamicPageItem> _item;
    UIView *_containerView;
    DZRDynamicPageShadeView *_shadeView;
    _TtC6Deezer16IllustrationView *_illustrationView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    DZFlatButton *_button;
    long long _listeningState;
    UIImage *_currentImage;
}

+ (struct CGSize)sizeWithItem:(id)arg1 inSection:(id)arg2 usingBounds:(struct CGRect)arg3;
+ (id)cellIdentifier;
@property(retain, nonatomic) UIImage *currentImage; // @synthesize currentImage=_currentImage;
@property(nonatomic) long long listeningState; // @synthesize listeningState=_listeningState;
@property(retain, nonatomic) DZFlatButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) _TtC6Deezer16IllustrationView *illustrationView; // @synthesize illustrationView=_illustrationView;
@property(retain, nonatomic) DZRDynamicPageShadeView *shadeView; // @synthesize shadeView=_shadeView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) id <DZRDynamicPageItem> item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)illustrationView:(id)arg1 willChangeImage:(id)arg2 animated:(_Bool)arg3 forIllustration:(id)arg4;
- (void)updateState;
- (void)action:(id)arg1 didFailWithError:(id)arg2;
- (void)didTapPlayButton:(id)arg1;
- (void)layoutSubviews;
- (void)populateWithItem:(id)arg1 inSection:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
