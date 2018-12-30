//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UADefaultMessageCenterStyle, UIImageView, UILabel, UIView;

@interface UADefaultMessageCenterListCell : UITableViewCell
{
    UADefaultMessageCenterStyle *_style;
    UILabel *_date;
    UILabel *_title;
    UIView *_unreadIndicator;
    UIImageView *_listIconView;
}

@property(nonatomic) __weak UIImageView *listIconView; // @synthesize listIconView=_listIconView;
@property(nonatomic) __weak UIView *unreadIndicator; // @synthesize unreadIndicator=_unreadIndicator;
@property(nonatomic) __weak UILabel *title; // @synthesize title=_title;
@property(nonatomic) __weak UILabel *date; // @synthesize date=_date;
@property(retain, nonatomic) UADefaultMessageCenterStyle *style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setData:(id)arg1;

@end
