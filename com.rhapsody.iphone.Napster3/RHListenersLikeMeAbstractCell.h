//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UILabel;

@interface RHListenersLikeMeAbstractCell : UITableViewCell
{
    UILabel *_titleLabel;
    UIButton *_playButton;
    UILabel *_artistsLabel;
    UILabel *_seeAllLabel;
}

@property(nonatomic) __weak UILabel *seeAllLabel; // @synthesize seeAllLabel=_seeAllLabel;
@property(nonatomic) __weak UILabel *artistsLabel; // @synthesize artistsLabel=_artistsLabel;
@property(nonatomic) __weak UIButton *playButton; // @synthesize playButton=_playButton;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (struct UIEdgeInsets)layoutMargins;
- (void)configureUI;

@end

