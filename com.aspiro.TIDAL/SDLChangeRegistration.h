//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDLRPCRequest.h"

@class NSArray, NSString;

@interface SDLChangeRegistration : SDLRPCRequest
{
}

@property(copy, nonatomic) NSArray *vrSynonyms;
@property(copy, nonatomic) NSString *ngnMediaScreenAppName;
@property(copy, nonatomic) NSArray *ttsName;
@property(copy, nonatomic) NSString *appName;
@property(retain, nonatomic) NSString *hmiDisplayLanguage;
@property(retain, nonatomic) NSString *language;
- (id)initWithLanguage:(id)arg1 hmiDisplayLanguage:(id)arg2 appName:(id)arg3 ttsName:(id)arg4 ngnMediaScreenAppName:(id)arg5 vrSynonyms:(id)arg6;
- (id)initWithLanguage:(id)arg1 hmiDisplayLanguage:(id)arg2;
- (id)init;

@end

