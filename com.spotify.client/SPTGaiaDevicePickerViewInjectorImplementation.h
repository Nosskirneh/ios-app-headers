//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaDevicePickerViewInjector-Protocol.h"

@class NSString, UIView;
@protocol SPTGaiaDevicePickerViewFactory;

@interface SPTGaiaDevicePickerViewInjectorImplementation : NSObject <SPTGaiaDevicePickerViewInjector>
{
    UIView *_injectedVolumeSliderView;
    id <SPTGaiaDevicePickerViewFactory> _injectedViewFactory;
}

@property(retain, nonatomic) id <SPTGaiaDevicePickerViewFactory> injectedViewFactory; // @synthesize injectedViewFactory=_injectedViewFactory;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *injectedVolumeSliderView; // @synthesize injectedVolumeSliderView=_injectedVolumeSliderView;
- (void)injectVolumeSliderViewWithFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

