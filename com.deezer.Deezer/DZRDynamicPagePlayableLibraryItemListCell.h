//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "DZRDynamicPageCell-Protocol.h"
#import "DZRUpdatableCell-Protocol.h"

@class DZRDynamicPagePlayButton, NSString, UILabel, UIView, _TtC6Deezer16IllustrationView;
@protocol DZRDynamicPageItem;

@interface DZRDynamicPagePlayableLibraryItemListCell : UICollectionViewCell <DZRUpdatableCell, DZRDynamicPageCell>
{
    id <DZRDynamicPageItem> _item;
    UIView *_labelsContainer;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_captionLabel;
    _TtC6Deezer16IllustrationView *_illustrationView;
    DZRDynamicPagePlayButton *_playButton;
}

+ (struct CGSize)sizeWithItem:(id)arg1 inSection:(id)arg2 usingBounds:(struct CGRect)arg3;
+ (id)cellIdentifier;
@property(retain, nonatomic) DZRDynamicPagePlayButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) _TtC6Deezer16IllustrationView *illustrationView; // @synthesize illustrationView=_illustrationView;
@property(retain, nonatomic) UILabel *captionLabel; // @synthesize captionLabel=_captionLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *labelsContainer; // @synthesize labelsContainer=_labelsContainer;
@property(retain, nonatomic) id <DZRDynamicPageItem> item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)updateState;
- (void)action:(id)arg1 didFailWithError:(id)arg2;
- (void)didTapPlayButton:(id)arg1;
- (void)layoutSubviews;
- (id)nonEmptyLabels;
- (void)populateWithItem:(id)arg1 inSection:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

