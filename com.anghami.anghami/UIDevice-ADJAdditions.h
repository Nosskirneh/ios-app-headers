//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIDevice.h>

@interface UIDevice (ADJAdditions)
- (_Bool)adjSetIadWithDates:(id)arg1 ADClientSharedClientInstance:(id)arg2;
- (_Bool)adjSetIadWithDetails:(id)arg1 ADClientSharedClientInstance:(id)arg2 retriesLeft:(int)arg3;
- (void)adjSetIad:(id)arg1 triesV3Left:(int)arg2;
- (id)adjVendorId;
- (id)adjCreateUuid;
- (id)adjDeviceName;
- (id)adjDeviceType;
- (id)adjFbAttributionId;
- (id)adjIdForAdvertisers;
- (_Bool)adjTrackingEnabled;
@end

