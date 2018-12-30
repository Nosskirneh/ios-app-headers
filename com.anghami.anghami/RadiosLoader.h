//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ContentSectionLoader.h"

@class NSSet;

@interface RadiosLoader : ContentSectionLoader
{
    unsigned long long _musicLanguage;
    NSSet *_supportedLangugaes;
}

@property(retain, nonatomic) NSSet *supportedLangugaes; // @synthesize supportedLangugaes=_supportedLangugaes;
@property(nonatomic) unsigned long long musicLanguage; // @synthesize musicLanguage=_musicLanguage;
- (void).cxx_destruct;
- (_Bool)didHandleParsingData:(id)arg1;
- (id)requestParams;
- (id)actionString;
- (int)type;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMusicLanguage:(unsigned long long)arg1 callbackBlock:(CDUnknownBlockType)arg2;

@end

