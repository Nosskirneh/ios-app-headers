//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class DZFlatButton, DZRAppDelegate, NSLayoutConstraint, UIImageView, UILabel, UITableView, UIView, _TtC6Deezer18OfferwallCardModel;

@interface _TtC6Deezer36OfferwallCarousselCoreViewController : UIViewController
{
    // Error parsing type: , name: headerView
    // Error parsing type: , name: overHeaderView
    // Error parsing type: , name: featureTableView
    // Error parsing type: , name: button
    // Error parsing type: , name: descriptionLabel
    // Error parsing type: , name: mentionLabel
    // Error parsing type: , name: subtitleLabel
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: imageView
    // Error parsing type: , name: featureLabel
    // Error parsing type: , name: overHeaderViewHeightConstraint
    // Error parsing type: , name: delegate
    // Error parsing type: , name: presenter
    // Error parsing type: , name: model
    // Error parsing type: , name: appDelegate.storage
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)trackingModel;
- (void)actionClickCTA:(id)arg1;
- (void)viewDidLoad;
@property(nonatomic, retain) DZRAppDelegate *appDelegate;
@property(nonatomic, retain) _TtC6Deezer18OfferwallCardModel *model; // @synthesize model;
@property(nonatomic) __weak UIViewController *presenter; // @synthesize presenter;
@property(nonatomic) __weak NSLayoutConstraint *overHeaderViewHeightConstraint; // @synthesize overHeaderViewHeightConstraint;
@property(nonatomic) __weak UILabel *featureLabel; // @synthesize featureLabel;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel;
@property(nonatomic) __weak UILabel *subtitleLabel; // @synthesize subtitleLabel;
@property(nonatomic) __weak UILabel *mentionLabel; // @synthesize mentionLabel;
@property(nonatomic) __weak UILabel *descriptionLabel; // @synthesize descriptionLabel;
@property(nonatomic) __weak DZFlatButton *button; // @synthesize button;
@property(nonatomic) __weak UITableView *featureTableView; // @synthesize featureTableView;
@property(nonatomic) __weak UIView *overHeaderView; // @synthesize overHeaderView;
@property(nonatomic) __weak UIView *headerView; // @synthesize headerView;

@end

