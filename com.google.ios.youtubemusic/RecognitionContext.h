//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface RecognitionContext : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *additionalCanonicalLanguageArray; // @dynamic additionalCanonicalLanguageArray;
@property(readonly, nonatomic) unsigned long long additionalCanonicalLanguageArray_Count; // @dynamic additionalCanonicalLanguageArray_Count;
@property(retain, nonatomic) NSMutableArray *additionalRawLanguageArray; // @dynamic additionalRawLanguageArray;
@property(readonly, nonatomic) unsigned long long additionalRawLanguageArray_Count; // @dynamic additionalRawLanguageArray_Count;
@property(copy, nonatomic) NSString *applicationName; // @dynamic applicationName;
@property(copy, nonatomic) NSString *canonicalLanguage; // @dynamic canonicalLanguage;
@property(copy, nonatomic) NSString *clientApplicationId; // @dynamic clientApplicationId;
@property(copy, nonatomic) NSString *clientId; // @dynamic clientId;
@property(copy, nonatomic) NSString *contextRequestCacheToken; // @dynamic contextRequestCacheToken;
@property(retain, nonatomic) NSMutableArray *enabledKeyboardLanguageArray; // @dynamic enabledKeyboardLanguageArray;
@property(readonly, nonatomic) unsigned long long enabledKeyboardLanguageArray_Count; // @dynamic enabledKeyboardLanguageArray_Count;
@property(copy, nonatomic) NSString *fieldId; // @dynamic fieldId;
@property(copy, nonatomic) NSString *fieldName; // @dynamic fieldName;
@property(copy, nonatomic) NSString *hardware; // @dynamic hardware;
@property(nonatomic) _Bool hasApplicationName; // @dynamic hasApplicationName;
@property(nonatomic) _Bool hasCanonicalLanguage; // @dynamic hasCanonicalLanguage;
@property(nonatomic) _Bool hasClientApplicationId; // @dynamic hasClientApplicationId;
@property(nonatomic) _Bool hasClientId; // @dynamic hasClientId;
@property(nonatomic) _Bool hasContextRequestCacheToken; // @dynamic hasContextRequestCacheToken;
@property(nonatomic) _Bool hasFieldId; // @dynamic hasFieldId;
@property(nonatomic) _Bool hasFieldName; // @dynamic hasFieldName;
@property(nonatomic) _Bool hasGrxmlGrammar; // @dynamic hasGrxmlGrammar;
@property(nonatomic) _Bool hasHardware; // @dynamic hasHardware;
@property(nonatomic) _Bool hasHasGrxmlGrammar; // @dynamic hasHasGrxmlGrammar;
@property(nonatomic) _Bool hasHint; // @dynamic hasHint;
@property(nonatomic) _Bool hasImeOptions; // @dynamic hasImeOptions;
@property(nonatomic) _Bool hasInputType; // @dynamic hasInputType;
@property(nonatomic) _Bool hasLabel; // @dynamic hasLabel;
@property(nonatomic) _Bool hasLanguage; // @dynamic hasLanguage;
@property(nonatomic) _Bool hasLanguageModel; // @dynamic hasLanguageModel;
@property(nonatomic) _Bool hasOriginalServiceName; // @dynamic hasOriginalServiceName;
@property(nonatomic) _Bool hasRawLanguage; // @dynamic hasRawLanguage;
@property(nonatomic) _Bool hasRecognizerMode; // @dynamic hasRecognizerMode;
@property(nonatomic) _Bool hasReferer; // @dynamic hasReferer;
@property(nonatomic) _Bool hasSelectedKeyboardLanguage; // @dynamic hasSelectedKeyboardLanguage;
@property(nonatomic) _Bool hasSingleLine; // @dynamic hasSingleLine;
@property(nonatomic) _Bool hasUseFollowonQueriesModels; // @dynamic hasUseFollowonQueriesModels;
@property(nonatomic) _Bool hasUserAgent; // @dynamic hasUserAgent;
@property(nonatomic) _Bool hasVoiceSearchLanguage; // @dynamic hasVoiceSearchLanguage;
@property(copy, nonatomic) NSString *hint; // @dynamic hint;
@property(nonatomic) int imeOptions; // @dynamic imeOptions;
@property(nonatomic) int inputType; // @dynamic inputType;
@property(copy, nonatomic) NSString *label; // @dynamic label;
@property(copy, nonatomic) NSString *language; // @dynamic language;
@property(copy, nonatomic) NSString *languageModel; // @dynamic languageModel;
@property(copy, nonatomic) NSString *originalServiceName; // @dynamic originalServiceName;
@property(copy, nonatomic) NSString *rawLanguage; // @dynamic rawLanguage;
@property(copy, nonatomic) NSString *recognizerMode; // @dynamic recognizerMode;
@property(copy, nonatomic) NSString *referer; // @dynamic referer;
@property(retain, nonatomic) NSMutableArray *requestContextArray; // @dynamic requestContextArray;
@property(readonly, nonatomic) unsigned long long requestContextArray_Count; // @dynamic requestContextArray_Count;
@property(copy, nonatomic) NSString *selectedKeyboardLanguage; // @dynamic selectedKeyboardLanguage;
@property(nonatomic) _Bool singleLine; // @dynamic singleLine;
@property(nonatomic) _Bool useFollowonQueriesModels; // @dynamic useFollowonQueriesModels;
@property(copy, nonatomic) NSString *userAgent; // @dynamic userAgent;
@property(copy, nonatomic) NSString *voiceSearchLanguage; // @dynamic voiceSearchLanguage;

@end

