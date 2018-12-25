//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTBaseNetworkService.h"

@class GIMMe, NSData, NSString, NSURL, YTApiaryDeviceCrypto, YTUserDefaults;

@interface YTDeviceRegistrationService : YTBaseNetworkService
{
    NSURL *_registrationURL;
    YTUserDefaults *_userDefaults;
    NSString *_deviceID;
    NSString *_apiaryRegistrationURLBase;
    NSString *_apiaryDeveloperKey;
    NSData *_projectKey;
    YTApiaryDeviceCrypto *_deviceCrypto;
}

@property(retain, nonatomic) YTApiaryDeviceCrypto *deviceCrypto; // @synthesize deviceCrypto=_deviceCrypto;
- (void).cxx_destruct;
- (void)saveRegistrationToStorage;
- (void)loadRegistrationFromStorage;
- (id)requestToRegisterDevice;
- (void)reset;
- (void)makeDeviceRegistrationRequestWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(nonatomic) __weak GIMMe *gimme;

@end

