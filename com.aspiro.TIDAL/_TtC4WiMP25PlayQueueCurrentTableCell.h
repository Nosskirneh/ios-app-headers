//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC4WiMP18PlayQueueTableCell.h"

@class UILabel;

@interface _TtC4WiMP25PlayQueueCurrentTableCell : _TtC4WiMP18PlayQueueTableCell
{
    // Error parsing type: , name: headerTitleLabel
    // Error parsing type: , name: footerTitleLabel
}

+ (id)cellIdentifier;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)configureWithItem:(id)arg1 isCurrent:(_Bool)arg2 isVideo:(_Bool)arg3 indexPath:(id)arg4 position:(long long)arg5;
- (void)updateHeaderAndFooterWithClear:(_Bool)arg1;
- (void)awakeFromNib;
@property(nonatomic) __weak UILabel *footerTitleLabel; // @synthesize footerTitleLabel;
@property(nonatomic) __weak UILabel *headerTitleLabel; // @synthesize headerTitleLabel;

@end
