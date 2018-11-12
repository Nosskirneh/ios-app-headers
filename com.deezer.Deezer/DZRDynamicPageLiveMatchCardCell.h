//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "DZRDynamicPageCell-Protocol.h"
#import "DZRUpdatableCell-Protocol.h"

@class NSString, UIImageView, UILabel, UIView, _TtC6Deezer16IllustrationView;
@protocol DZRDynamicPageItem;

@interface DZRDynamicPageLiveMatchCardCell : UICollectionViewCell <DZRDynamicPageCell, DZRUpdatableCell>
{
    UIView *_teamHomeContainer;
    UIView *_teamVisitorContainer;
    UIView *_informationContainer;
    _TtC6Deezer16IllustrationView *_teamHomeIllustrationView;
    _TtC6Deezer16IllustrationView *_teamVisitorIllustrationView;
    UIImageView *_playButtonImageView;
    UIImageView *_wavesImageView;
    UILabel *_teamHomeNameLabel;
    UILabel *_teamVisitorNameLabel;
    UILabel *_liveLabel;
    id <DZRDynamicPageItem> _item;
    UILabel *_messageLabel;
    long long _state;
}

+ (struct CGSize)sizeWithItem:(id)arg1 inSection:(id)arg2 usingBounds:(struct CGRect)arg3;
+ (id)cellIdentifier;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) id <DZRDynamicPageItem> item; // @synthesize item=_item;
@property(retain, nonatomic) UILabel *liveLabel; // @synthesize liveLabel=_liveLabel;
@property(retain, nonatomic) UILabel *teamVisitorNameLabel; // @synthesize teamVisitorNameLabel=_teamVisitorNameLabel;
@property(retain, nonatomic) UILabel *teamHomeNameLabel; // @synthesize teamHomeNameLabel=_teamHomeNameLabel;
@property(retain, nonatomic) UIImageView *wavesImageView; // @synthesize wavesImageView=_wavesImageView;
@property(retain, nonatomic) UIImageView *playButtonImageView; // @synthesize playButtonImageView=_playButtonImageView;
@property(retain, nonatomic) _TtC6Deezer16IllustrationView *teamVisitorIllustrationView; // @synthesize teamVisitorIllustrationView=_teamVisitorIllustrationView;
@property(retain, nonatomic) _TtC6Deezer16IllustrationView *teamHomeIllustrationView; // @synthesize teamHomeIllustrationView=_teamHomeIllustrationView;
@property(retain, nonatomic) UIView *informationContainer; // @synthesize informationContainer=_informationContainer;
@property(retain, nonatomic) UIView *teamVisitorContainer; // @synthesize teamVisitorContainer=_teamVisitorContainer;
@property(retain, nonatomic) UIView *teamHomeContainer; // @synthesize teamHomeContainer=_teamHomeContainer;
- (void).cxx_destruct;
- (void)updateState;
- (void)updateWithNewState:(long long)arg1;
- (void)iPadLayout;
- (void)prepareForReuse;
- (void)iPhoneLayout;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)allIllustrationViews;
- (id)allLabels;
- (void)layoutSubviews;
- (void)populateWithItem:(id)arg1 inSection:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)animatePlayButton;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
