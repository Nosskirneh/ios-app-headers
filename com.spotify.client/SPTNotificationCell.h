//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "GLUEStyleable.h"

@class GLUELabel, NSString, SPTSwitch, UIView;

@interface SPTNotificationCell : UITableViewCell <GLUEStyleable>
{
    GLUELabel *_titleLabel;
    GLUELabel *_descriptionLabel;
    id <SPTNotificationSwitchDelegate> _delegate;
    SPTSwitch *_emailSwitch;
    SPTSwitch *_pushSwitch;
    UIView *_pushContainerView;
    GLUELabel *_pushLabel;
    UIView *_emailContainerView;
    GLUELabel *_emailLabel;
}

@property(readonly, nonatomic) GLUELabel *emailLabel; // @synthesize emailLabel=_emailLabel;
@property(readonly, nonatomic) UIView *emailContainerView; // @synthesize emailContainerView=_emailContainerView;
@property(readonly, nonatomic) GLUELabel *pushLabel; // @synthesize pushLabel=_pushLabel;
@property(readonly, nonatomic) UIView *pushContainerView; // @synthesize pushContainerView=_pushContainerView;
@property(readonly, nonatomic) SPTSwitch *pushSwitch; // @synthesize pushSwitch=_pushSwitch;
@property(readonly, nonatomic) SPTSwitch *emailSwitch; // @synthesize emailSwitch=_emailSwitch;
@property(nonatomic) __weak id <SPTNotificationSwitchDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) GLUELabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)didToggleEmailSwitch:(id)arg1;
- (void)didTogglePushSwitch:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
