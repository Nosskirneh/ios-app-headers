//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTGaiaContextMenuAction.h"

@class NSString, SPTGaiaDevice, UIImage;

@interface SPTGaiaContextConnectionAction : NSObject <SPTGaiaContextMenuAction>
{
    id <SPTGaiaContextMenuActionDelegate> _delegate;
    SPTGaiaDevice *_device;
    NSString *_logEventVersion;
    NSString *_identifier;
    NSString *_title;
    UIImage *_iconImage;
    long long _deviceIcon;
}

@property(nonatomic) long long deviceIcon; // @synthesize deviceIcon=_deviceIcon;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *logEventVersion; // @synthesize logEventVersion=_logEventVersion;
@property(retain, nonatomic) SPTGaiaDevice *device; // @synthesize device=_device;
@property(nonatomic) __weak id <SPTGaiaContextMenuActionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool supportsAutomaticFiltering;
- (void)showProgressView;
- (id)iconColor;
- (long long)icon;
- (id)accessoryView;
- (id)performAction;
@property(readonly, nonatomic) _Bool available;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 icon:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

