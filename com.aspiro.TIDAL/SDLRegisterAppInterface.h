//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDLRPCRequest.h"

@class NSArray, NSNumber, NSString, SDLAppInfo, SDLDeviceInfo, SDLSyncMsgVersion;
@protocol SDLBool;

@interface SDLRegisterAppInterface : SDLRPCRequest
{
}

@property(retain, nonatomic) SDLAppInfo *appInfo;
@property(retain, nonatomic) NSString *appID;
@property(retain, nonatomic) SDLDeviceInfo *deviceInfo;
@property(retain, nonatomic) NSString *hashID;
@property(retain, nonatomic) NSArray *appHMIType;
@property(retain, nonatomic) NSString *hmiDisplayLanguageDesired;
@property(retain, nonatomic) NSString *languageDesired;
@property(retain, nonatomic) NSNumber<SDLBool> *isMediaApplication;
@property(retain, nonatomic) NSArray *vrSynonyms;
@property(retain, nonatomic) NSString *ngnMediaScreenAppName;
@property(retain, nonatomic) NSArray *ttsName;
@property(retain, nonatomic) NSString *appName;
@property(retain, nonatomic) SDLSyncMsgVersion *syncMsgVersion;
- (id)initWithAppName:(id)arg1 appId:(id)arg2 languageDesired:(id)arg3 isMediaApp:(_Bool)arg4 appTypes:(id)arg5 shortAppName:(id)arg6 ttsName:(id)arg7 vrSynonyms:(id)arg8 hmiDisplayLanguageDesired:(id)arg9 resumeHash:(id)arg10;
- (id)initWithAppName:(id)arg1 appId:(id)arg2 languageDesired:(id)arg3 isMediaApp:(_Bool)arg4 appTypes:(id)arg5 shortAppName:(id)arg6;
- (id)initWithAppName:(id)arg1 appId:(id)arg2 languageDesired:(id)arg3;
- (id)initWithLifecycleConfiguration:(id)arg1;
- (id)init;

@end

