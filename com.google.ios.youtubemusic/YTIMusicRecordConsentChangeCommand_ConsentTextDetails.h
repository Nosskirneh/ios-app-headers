//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface YTIMusicRecordConsentChangeCommand_ConsentTextDetails : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasI18NDumptime; // @dynamic hasI18NDumptime;
@property(nonatomic) _Bool hasLanguageCode; // @dynamic hasLanguageCode;
@property(nonatomic) long long i18NDumptime; // @dynamic i18NDumptime;
@property(retain, nonatomic) NSMutableArray *innertubeTemplateStringArray; // @dynamic innertubeTemplateStringArray;
@property(readonly, nonatomic) unsigned long long innertubeTemplateStringArray_Count; // @dynamic innertubeTemplateStringArray_Count;
@property(copy, nonatomic) NSString *languageCode; // @dynamic languageCode;

@end

