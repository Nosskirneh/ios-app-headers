//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ANGLanguageManager : NSObject
{
}

+ (unsigned long long)currentLanguage;
+ (unsigned long long)languageFromLanguageCode:(id)arg1;
+ (id)currentLanguageString;
+ (id)stringFromLanguage:(unsigned long long)arg1;
+ (id)codeFromLanguage:(unsigned long long)arg1;
+ (void)setLanguage:(unsigned long long)arg1;
+ (id)anghamiLanguages;
+ (id)supportedLanguages;
+ (void)updateLanguageCode;

@end

