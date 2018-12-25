//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIChannelNameEditorFooterSupportedRenderers, YTIChannelNameErrorSupportedRenderers, YTIResponseContext;

@interface YTIEditChannelNameResponse : GPBMessage
{
}

+ (id)descriptor;
- (id)toastError;
- (id)familyNameFieldError;
- (id)givenNameFieldError;

// Remaining properties
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(retain, nonatomic) YTIChannelNameErrorSupportedRenderers *error; // @dynamic error;
@property(nonatomic) int errorFieldIdentifier; // @dynamic errorFieldIdentifier;
@property(nonatomic) _Bool hasDisplayName; // @dynamic hasDisplayName;
@property(nonatomic) _Bool hasError; // @dynamic hasError;
@property(nonatomic) _Bool hasErrorFieldIdentifier; // @dynamic hasErrorFieldIdentifier;
@property(nonatomic) _Bool hasNameEditorFooter; // @dynamic hasNameEditorFooter;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(retain, nonatomic) YTIChannelNameEditorFooterSupportedRenderers *nameEditorFooter; // @dynamic nameEditorFooter;
@property(retain, nonatomic) YTIResponseContext *responseContext; // @dynamic responseContext;

@end

