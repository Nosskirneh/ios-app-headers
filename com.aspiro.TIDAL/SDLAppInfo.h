//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDLRPCStruct.h"

@class NSString;

@interface SDLAppInfo : SDLRPCStruct
{
}

+ (id)currentAppInfo;
@property(retain, nonatomic) NSString *appVersion;
@property(retain, nonatomic) NSString *appBundleID;
@property(retain, nonatomic) NSString *appDisplayName;

@end

