//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaDevicePickerDeviceSpecificConfigurationProvider-Protocol.h"

@class NSString, UIViewController;

@interface SPTGaiaDevicePickerDeviceSpecificConfigurationManager : NSObject <SPTGaiaDevicePickerDeviceSpecificConfigurationProvider>
{
    UIViewController *_mainViewController;
}

@property(nonatomic) __weak UIViewController *mainViewController; // @synthesize mainViewController=_mainViewController;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool devicePickerCanBeAccessedAsStandalonePage;
@property(readonly, nonatomic) _Bool devicePickerWantsPopoverPresentation;
@property(readonly, nonatomic) _Bool devicePickerWantsLightTheme;
- (id)initWithMainViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

