//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class DZRDeveloperGatekeeperModuleItem, DZRGatekeeperModuleStatusView, UILabel;

@interface DZRDeveloperGatekeeperCell : UITableViewCell
{
    DZRDeveloperGatekeeperModuleItem *_module;
    UILabel *_titleLabel;
    UILabel *_typeLabel;
    DZRGatekeeperModuleStatusView *_statusView;
}

@property(retain, nonatomic) DZRGatekeeperModuleStatusView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) UILabel *typeLabel; // @synthesize typeLabel=_typeLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) DZRDeveloperGatekeeperModuleItem *module; // @synthesize module=_module;
- (void).cxx_destruct;

@end

