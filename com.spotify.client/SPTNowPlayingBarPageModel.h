//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaConnectObserver-Protocol.h"

@class NSString;
@protocol SPTConnectUIDevicePickerPresenter, SPTGaiaConnectAPI, SPTNowPlayingBarPageModelDelegate;

@interface SPTNowPlayingBarPageModel : NSObject <SPTGaiaConnectObserver>
{
    _Bool _remoteDevicesVisible;
    _Bool _disableRemoteDevicesView;
    id <SPTNowPlayingBarPageModelDelegate> _delegate;
    id <SPTGaiaConnectAPI> _connectManager;
    id <SPTConnectUIDevicePickerPresenter> _devicePresenter;
}

@property(retain, nonatomic) id <SPTConnectUIDevicePickerPresenter> devicePresenter; // @synthesize devicePresenter=_devicePresenter;
@property(retain, nonatomic) id <SPTGaiaConnectAPI> connectManager; // @synthesize connectManager=_connectManager;
@property(nonatomic) _Bool disableRemoteDevicesView; // @synthesize disableRemoteDevicesView=_disableRemoteDevicesView;
@property(nonatomic, getter=isRemoteDevicesVisible) _Bool remoteDevicesVisible; // @synthesize remoteDevicesVisible=_remoteDevicesVisible;
@property(nonatomic) __weak id <SPTNowPlayingBarPageModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)connectActiveConnectionTypeDidChange:(long long)arg1;
- (void)connectAvailableDevicesDidChange:(id)arg1;
- (void)calculateRemoteDevicesVisible;
- (id)initWithConnectManager:(id)arg1 devicePresenter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

