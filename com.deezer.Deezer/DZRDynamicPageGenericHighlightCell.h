//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "DZRDynamicPageCell-Protocol.h"

@class NSString, NSTimer, UILabel, _TtC6Deezer16IllustrationView;
@protocol DZRDynamicPageItem;

@interface DZRDynamicPageGenericHighlightCell : UICollectionViewCell <DZRDynamicPageCell>
{
    _Bool _waitingFirstPicture;
    _Bool _waitingNextPicture;
    id <DZRDynamicPageItem> _item;
    _TtC6Deezer16IllustrationView *_illustrationView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    long long _pictureCurrentIndex;
    NSTimer *_picturesTimer;
}

+ (struct CGSize)sizeWithItem:(id)arg1 inSection:(id)arg2 usingBounds:(struct CGRect)arg3;
+ (id)cellIdentifier;
@property(nonatomic, getter=isWaitingNextPicture) _Bool waitingNextPicture; // @synthesize waitingNextPicture=_waitingNextPicture;
@property(nonatomic, getter=isWaitingFirstPicture) _Bool waitingFirstPicture; // @synthesize waitingFirstPicture=_waitingFirstPicture;
@property(retain, nonatomic) NSTimer *picturesTimer; // @synthesize picturesTimer=_picturesTimer;
@property(nonatomic) long long pictureCurrentIndex; // @synthesize pictureCurrentIndex=_pictureCurrentIndex;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) _TtC6Deezer16IllustrationView *illustrationView; // @synthesize illustrationView=_illustrationView;
@property(retain, nonatomic) id <DZRDynamicPageItem> item; // @synthesize item=_item;
- (void).cxx_destruct;
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

