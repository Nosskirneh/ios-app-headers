//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaConnectObserver-Protocol.h"
#import "SPTVolumeObserver-Protocol.h"

@class NSString;
@protocol SPTGaiaConnectAPI, SPTVolumeAPI, SPTVolumeRemotePopupViewModelDelegate;

@interface SPTVolumeRemotePopupViewModel : NSObject <SPTVolumeObserver, SPTGaiaConnectObserver>
{
    id <SPTVolumeRemotePopupViewModelDelegate> _delegate;
    double _volumePercentage;
    NSString *_deviceString;
    id <SPTVolumeAPI> _volumeManager;
    id <SPTGaiaConnectAPI> _connectManager;
}

@property(readonly, nonatomic) id <SPTGaiaConnectAPI> connectManager; // @synthesize connectManager=_connectManager;
@property(readonly, nonatomic) id <SPTVolumeAPI> volumeManager; // @synthesize volumeManager=_volumeManager;
@property(copy, nonatomic) NSString *deviceString; // @synthesize deviceString=_deviceString;
@property(nonatomic) double volumePercentage; // @synthesize volumePercentage=_volumePercentage;
@property(nonatomic) __weak id <SPTVolumeRemotePopupViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)connectActiveDeviceDidChange:(id)arg1;
- (void)volumeUpdated:(id)arg1;
- (void)updateDeviceString;
- (void)updateVolumePercentage;
- (void)dealloc;
- (void)setupObserving;
- (id)initWithVolumeManager:(id)arg1 connectManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

