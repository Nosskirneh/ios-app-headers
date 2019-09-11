//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaContextMenuModelProvider-Protocol.h"

@class NSDictionary, NSString, SPTGaiaDeviceAppearanceMapping, SPTGaiaHomeDeviceManager;
@protocol GLUEImageLoader, SPTGaiaConnectManager, SPTGaiaDevicePickerContextMenuFlagsProvider><SPTGaiaHomeDeviceFlagsProvider, SPTLinkDispatcher;

@interface SPTGaiaContextMenuModelManager : NSObject <SPTGaiaContextMenuModelProvider>
{
    id <SPTGaiaDevicePickerContextMenuFlagsProvider><SPTGaiaHomeDeviceFlagsProvider> _flagsProvider;
    SPTGaiaDeviceAppearanceMapping *_iconMapper;
    NSDictionary *_modelsDictionary;
    id <GLUEImageLoader> _imageLoader;
    SPTGaiaHomeDeviceManager *_savedDeviceManager;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTGaiaConnectManager> _connectManager;
}

@property(retain, nonatomic) id <SPTGaiaConnectManager> connectManager; // @synthesize connectManager=_connectManager;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) SPTGaiaHomeDeviceManager *savedDeviceManager; // @synthesize savedDeviceManager=_savedDeviceManager;
@property(retain, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(copy, nonatomic) NSDictionary *modelsDictionary; // @synthesize modelsDictionary=_modelsDictionary;
@property(readonly, nonatomic) SPTGaiaDeviceAppearanceMapping *iconMapper; // @synthesize iconMapper=_iconMapper;
@property(readonly, nonatomic) id <SPTGaiaDevicePickerContextMenuFlagsProvider><SPTGaiaHomeDeviceFlagsProvider> flagsProvider; // @synthesize flagsProvider=_flagsProvider;
- (void).cxx_destruct;
- (id)contextMenuModelsForDevices:(id)arg1;
- (id)contextModelForDevice:(id)arg1;
- (void)setDevices:(id)arg1;
- (id)initWithFlagsProvider:(id)arg1 iconMapper:(id)arg2 glueImageLoaderFactory:(id)arg3 savedDeviceManager:(id)arg4 linkDispatcher:(id)arg5 connectManager:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

