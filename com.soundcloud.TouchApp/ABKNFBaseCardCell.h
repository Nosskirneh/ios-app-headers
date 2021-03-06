//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UIImageView, UIView;

@interface ABKNFBaseCardCell : UITableViewCell
{
    _Bool _hideUnreadIndicator;
    UIView *_rootView;
    UIImageView *_unreadIndicatorView;
    NSLayoutConstraint *_rootViewLeadingConstraint;
    NSLayoutConstraint *_rootViewTrailingConstraint;
    NSLayoutConstraint *_rootViewTopConstraint;
    NSLayoutConstraint *_rootViewBottomConstraint;
    CDUnknownBlockType _onCellHeightUpdateBlock;
    double _cardSidePadding;
    double _cardSpacing;
}

+ (id)findCellIdentifierWithCard:(id)arg1;
+ (id)dequeueCellFromTableView:(id)arg1 forIndexPath:(id)arg2 forCard:(id)arg3;
@property(nonatomic) _Bool hideUnreadIndicator; // @synthesize hideUnreadIndicator=_hideUnreadIndicator;
@property double cardSpacing; // @synthesize cardSpacing=_cardSpacing;
@property double cardSidePadding; // @synthesize cardSidePadding=_cardSidePadding;
@property(copy, nonatomic) CDUnknownBlockType onCellHeightUpdateBlock; // @synthesize onCellHeightUpdateBlock=_onCellHeightUpdateBlock;
@property(nonatomic) __weak NSLayoutConstraint *rootViewBottomConstraint; // @synthesize rootViewBottomConstraint=_rootViewBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *rootViewTopConstraint; // @synthesize rootViewTopConstraint=_rootViewTopConstraint;
@property(nonatomic) __weak NSLayoutConstraint *rootViewTrailingConstraint; // @synthesize rootViewTrailingConstraint=_rootViewTrailingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *rootViewLeadingConstraint; // @synthesize rootViewLeadingConstraint=_rootViewLeadingConstraint;
@property(nonatomic) __weak UIImageView *unreadIndicatorView; // @synthesize unreadIndicatorView=_unreadIndicatorView;
@property(nonatomic) __weak UIView *rootView; // @synthesize rootView=_rootView;
- (void).cxx_destruct;
- (id)getPlaceHolderImage;
- (void)applyCard:(id)arg1;
- (void)awakeFromNib;
- (void)setUp;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

