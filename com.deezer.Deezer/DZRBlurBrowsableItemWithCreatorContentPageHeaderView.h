//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "DZRContentPageHeaderViewProtocol-Protocol.h"

@class NSLayoutConstraint, NSString, UIControl, UILabel, _TtC6Deezer16IllustrationView;
@protocol DeezerBrowsable;

@interface DZRBlurBrowsableItemWithCreatorContentPageHeaderView : UIView <DZRContentPageHeaderViewProtocol>
{
    _TtC6Deezer16IllustrationView *_itemCreatorIllustrationView;
    _TtC6Deezer16IllustrationView *_itemIllustrationView;
    UILabel *_itemNameLabel;
    UILabel *_itemExtraInfosLabel;
    UIControl *_creatorView;
    UILabel *_itemCreatorNameLabel;
    NSLayoutConstraint *_itemCreatorIllustrationViewToNameLabelHorizontalConstraint;
    NSLayoutConstraint *_itemExtraInfosLabelToCreatorViewVerticalConstraint;
    NSLayoutConstraint *_itemCreatorIllustrationViewHeightConstraint;
    id <DeezerBrowsable> _creator;
}

@property(retain, nonatomic) id <DeezerBrowsable> creator; // @synthesize creator=_creator;
@property(nonatomic) __weak NSLayoutConstraint *itemCreatorIllustrationViewHeightConstraint; // @synthesize itemCreatorIllustrationViewHeightConstraint=_itemCreatorIllustrationViewHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *itemExtraInfosLabelToCreatorViewVerticalConstraint; // @synthesize itemExtraInfosLabelToCreatorViewVerticalConstraint=_itemExtraInfosLabelToCreatorViewVerticalConstraint;
@property(nonatomic) __weak NSLayoutConstraint *itemCreatorIllustrationViewToNameLabelHorizontalConstraint; // @synthesize itemCreatorIllustrationViewToNameLabelHorizontalConstraint=_itemCreatorIllustrationViewToNameLabelHorizontalConstraint;
@property(nonatomic) __weak UILabel *itemCreatorNameLabel; // @synthesize itemCreatorNameLabel=_itemCreatorNameLabel;
@property(nonatomic) __weak UIControl *creatorView; // @synthesize creatorView=_creatorView;
@property(nonatomic) __weak UILabel *itemExtraInfosLabel; // @synthesize itemExtraInfosLabel=_itemExtraInfosLabel;
@property(nonatomic) __weak UILabel *itemNameLabel; // @synthesize itemNameLabel=_itemNameLabel;
@property(nonatomic) __weak _TtC6Deezer16IllustrationView *itemIllustrationView; // @synthesize itemIllustrationView=_itemIllustrationView;
@property(nonatomic) __weak _TtC6Deezer16IllustrationView *itemCreatorIllustrationView; // @synthesize itemCreatorIllustrationView=_itemCreatorIllustrationView;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)goToCreator:(id)arg1;
- (void)hideCreatorImage;
- (void)populateWithItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

