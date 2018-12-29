//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GPMGcmRegistrationController : NSObject
{
}

+ (void)logFailureWithLogger:(id)arg1 gcmEventType:(unsigned long long)arg2;
+ (void)removeRegistrationToken:(id)arg1 fromIdentity:(id)arg2 logger:(id)arg3;
+ (id)deviceGroupRequestFetcherWithAuthToken:(id)arg1 registrationToken:(id)arg2 notificationKey:(id)arg3 operation:(id)arg4;
+ (void)fetchGCMAuthTokenForIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)deviceGroupKeyFromData:(id)arg1;
+ (void)setupGcmWithRegistrationToken:(id)arg1 identity:(id)arg2 receiver:(id)arg3 logger:(id)arg4;
+ (void)unregisterForGcmForIdentity:(id)arg1 logger:(id)arg2;
+ (void)registerForGcmWithAPNSDeviceToken:(id)arg1 identity:(id)arg2 receiver:(id)arg3 logger:(id)arg4;

@end
