//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTShareLocalSettingsManager : NSObject
{
    id <SPTLocalSettings> _localSettings;
    id <SPTShareDeeplinkHandler> _deeplinkHandler;
    id <SPTShareTestManager> _testManager;
}

@property(retain, nonatomic) id <SPTShareTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) id <SPTShareDeeplinkHandler> deeplinkHandler; // @synthesize deeplinkHandler=_deeplinkHandler;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
- (void).cxx_destruct;
- (_Bool)isShareDestinationIdInstalled:(long long)arg1 shareDestinations:(id)arg2;
- (_Bool)shouldDisplaySnapchatDisclaimer:(id)arg1;
- (void)recordSnapchatDisclaimerDismissed;
- (id)initWithLocalSettings:(id)arg1 deeplinkHandler:(id)arg2 testManager:(id)arg3;

@end
