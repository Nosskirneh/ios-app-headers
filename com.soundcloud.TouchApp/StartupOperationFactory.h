//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol _TtP12SCCollection22PrivacySettingsStoring_;

@interface StartupOperationFactory : NSObject
{
    id <_TtP12SCCollection22PrivacySettingsStoring_> _privacySettingsStorage;
}

@property(readonly, nonatomic) id <_TtP12SCCollection22PrivacySettingsStoring_> privacySettingsStorage; // @synthesize privacySettingsStorage=_privacySettingsStorage;
- (void).cxx_destruct;
- (id)advertisingRegistrationOperations;
- (id)analyticsRegistrationOperations;
- (id)startupOperationsWithLaunchOptions:(id)arg1;
- (id)init;
- (id)initWithPrivacySettingsStorage:(id)arg1;

@end

