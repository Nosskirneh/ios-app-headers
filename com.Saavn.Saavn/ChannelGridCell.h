//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class ChannelGridItem, UITableView;

@interface ChannelGridCell : UITableViewCell
{
    UITableView *parentTable;
    ChannelGridItem *_leftItem;
    ChannelGridItem *_rightItem;
}

+ (id)reuseId;
@property(retain, nonatomic) ChannelGridItem *rightItem; // @synthesize rightItem=_rightItem;
@property(retain, nonatomic) ChannelGridItem *leftItem; // @synthesize leftItem=_leftItem;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateUIMode;
- (void)initCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 inTable:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

