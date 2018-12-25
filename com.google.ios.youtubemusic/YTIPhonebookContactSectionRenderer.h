//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTIPhonebookContactSectionHeaderSupportedRenderers, YTIPhonebookContactSectionTemplateSupportedRenderers, YTIPhonebookContactSectionTokenSupportedDatas;

@interface YTIPhonebookContactSectionRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *contactsArray; // @dynamic contactsArray;
@property(readonly, nonatomic) unsigned long long contactsArray_Count; // @dynamic contactsArray_Count;
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(nonatomic) _Bool hasTemplate_p; // @dynamic hasTemplate_p;
@property(nonatomic) _Bool hasToken; // @dynamic hasToken;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIPhonebookContactSectionHeaderSupportedRenderers *header; // @dynamic header;
@property(retain, nonatomic) YTIPhonebookContactSectionTemplateSupportedRenderers *template_p; // @dynamic template_p;
@property(retain, nonatomic) YTIPhonebookContactSectionTokenSupportedDatas *token; // @dynamic token;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end
