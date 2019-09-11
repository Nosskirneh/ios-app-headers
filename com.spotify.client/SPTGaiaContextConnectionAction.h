//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaContextMenuAction-Protocol.h"

@class NSString, SPTGaiaConnectDevice, UIImage;
@protocol SPTGaiaConnectManager, SPTGaiaContextMenuActionDelegate;

@interface SPTGaiaContextConnectionAction : NSObject <SPTGaiaContextMenuAction>
{
    id <SPTGaiaContextMenuActionDelegate> _delegate;
    SPTGaiaConnectDevice *_connectDevice;
    NSString *_logEventVersion;
    id <SPTGaiaConnectManager> _connectManager;
    NSString *_identifier;
    NSString *_title;
    UIImage *_iconImage;
    long long _deviceIcon;
}

@property(nonatomic) long long deviceIcon; // @synthesize deviceIcon=_deviceIcon;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) id <SPTGaiaConnectManager> connectManager; // @synthesize connectManager=_connectManager;
@property(readonly, nonatomic) NSString *logEventVersion; // @synthesize logEventVersion=_logEventVersion;
@property(retain, nonatomic) SPTGaiaConnectDevice *connectDevice; // @synthesize connectDevice=_connectDevice;
@property(nonatomic) __weak id <SPTGaiaContextMenuActionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool supportsAutomaticFiltering;
- (void)showProgressView;
- (id)incarnationForDevice;
- (id)iconColor;
- (long long)icon;
- (id)accessoryView;
- (void)performActionConnectDevice;
- (id)performAction;
- (_Bool)availableConnectDevice;
@property(readonly, nonatomic) _Bool available;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 icon:(long long)arg3 connectManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

