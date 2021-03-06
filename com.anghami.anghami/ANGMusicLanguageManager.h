//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ANGOptionsSelectorDelegate-Protocol.h"

@class ANGMusicLanguage, NSArray, NSString;

@interface ANGMusicLanguageManager : NSObject <ANGOptionsSelectorDelegate>
{
    ANGMusicLanguage *_currentLanguage;
    CDUnknownBlockType _completionBlock;
    NSArray *_allMusicLanguages;
    NSArray *_supportedMusicLanguages;
}

+ (id)insertOrUpdateMusicLanguagesFromJsonArray:(id)arg1;
@property(retain, nonatomic) NSArray *supportedMusicLanguages; // @synthesize supportedMusicLanguages=_supportedMusicLanguages;
@property(retain, nonatomic) NSArray *allMusicLanguages; // @synthesize allMusicLanguages=_allMusicLanguages;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain) ANGMusicLanguage *currentLanguage; // @synthesize currentLanguage=_currentLanguage;
- (void).cxx_destruct;
- (id)optionsForSection:(unsigned long long)arg1;
- (unsigned long long)optionsSelectorNumberOfRowsForSection:(unsigned long long)arg1;
- (id)optionsSelectorImageNameForSection:(unsigned long long)arg1;
- (id)optionsSelectorTitleForSection:(unsigned long long)arg1;
- (unsigned long long)optionsSelectorNumberOfSections;
- (void)optionSelected:(id)arg1 valueChanged:(unsigned long long)arg2;
- (void)optionSelectorDidCancel;
- (void)showWithCompletion:(CDUnknownBlockType)arg1 currentLanguage:(id)arg2;
- (void)initDefaultMusicLanguages;
- (id)getDefaultMusicLanguages;
- (id)getAvailableLanguagesIds;
- (id)getAvailableLanguages;
- (id)musicLanguageForId:(unsigned long long)arg1;
- (void)setSupportedLanguagesIds:(id)arg1;
- (id)initWithSupportedMusicLangaugesIds:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

