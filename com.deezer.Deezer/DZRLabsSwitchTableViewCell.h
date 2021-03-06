//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UISwitch;
@protocol DZRLabsProtocol;

@interface DZRLabsSwitchTableViewCell : UITableViewCell
{
    id <DZRLabsProtocol> _feature;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UISwitch *_switchControl;
}

@property(nonatomic) __weak UISwitch *switchControl; // @synthesize switchControl=_switchControl;
@property(nonatomic) __weak UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) id <DZRLabsProtocol> feature; // @synthesize feature=_feature;
- (void).cxx_destruct;
- (void)switchValueChanged:(id)arg1;
- (void)configureWithLabFeature:(id)arg1;

@end

