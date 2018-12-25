//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GAIHitUtil : NSObject
{
}

+ (id)hashIdfa:(id)arg1 clientId:(id)arg2;
+ (id)generateClientId;
+ (unsigned int)gaHash:(id)arg1;
+ (long long)millisecondsElapsedFrom:(id)arg1 To:(id)arg2;
+ (id)systemScreenColorDepth;
+ (struct CGRect)swapDimensionsOfRect:(struct CGRect)arg1;
+ (id)systemScreenResolution;
+ (id)deviceModelVersion;
+ (id)systemCountry;
+ (id)systemLanguage;
+ (id)userAgentString;
+ (id)userAgentStringWithProduct:(id)arg1 version:(id)arg2 deviceModel:(id)arg3 systemName:(id)arg4 systemVersion:(id)arg5 systemLanguage:(id)arg6 systemCountry:(id)arg7;
+ (id)systemCountryFromLocale:(id)arg1;
+ (id)systemLanguageFromLanguages:(id)arg1;
- (id)init;

@end

