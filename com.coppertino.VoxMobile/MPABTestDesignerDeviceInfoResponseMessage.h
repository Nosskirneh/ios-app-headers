//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MPAbstractABTestDesignerMessage.h"

@class NSArray, NSString;

@interface MPABTestDesignerDeviceInfoResponseMessage : MPAbstractABTestDesignerMessage
{
}

+ (id)message;
@property(copy, nonatomic) NSArray *tweaks;
@property(copy, nonatomic) NSString *mainBundleIdentifier;
@property(copy, nonatomic) NSArray *availableFontFamilies;
@property(copy, nonatomic) NSString *deviceModel;
@property(copy, nonatomic) NSString *libVersion;
@property(copy, nonatomic) NSString *deviceName;
@property(copy, nonatomic) NSString *appRelease;
@property(copy, nonatomic) NSString *appVersion;
@property(copy, nonatomic) NSString *systemVersion;
@property(copy, nonatomic) NSString *systemName;

@end

