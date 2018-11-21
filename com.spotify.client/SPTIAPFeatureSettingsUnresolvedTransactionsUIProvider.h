//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureSettingsUIProvider-Protocol.h"

@class NSString;
@protocol SPTAlertController, SPTIAPController;

@interface SPTIAPFeatureSettingsUnresolvedTransactionsUIProvider : NSObject <SPTFeatureSettingsUIProvider>
{
    id <SPTIAPController> _iapController;
    id <SPTAlertController> _alertController;
}

@property(retain, nonatomic) id <SPTAlertController> alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) id <SPTIAPController> iapController; // @synthesize iapController=_iapController;
- (void).cxx_destruct;
- (id)featureSettingsPresentation:(id)arg1 cellForRow:(unsigned long long)arg2;
- (void)featureSettingsPresentation:(id)arg1 didSelectRow:(unsigned long long)arg2;
- (unsigned long long)numberOfRowsForFeatureSettingsItem:(id)arg1;
- (id)initWithIAPController:(id)arg1 alertController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

