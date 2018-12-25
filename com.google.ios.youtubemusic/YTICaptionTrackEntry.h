//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIFormattedString;

@interface YTICaptionTrackEntry : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *baseURL; // @dynamic baseURL;
@property(nonatomic) int captionsAsrPolicy; // @dynamic captionsAsrPolicy;
@property(nonatomic) int captionsFormats; // @dynamic captionsFormats;
@property(nonatomic) _Bool hasBaseURL; // @dynamic hasBaseURL;
@property(nonatomic) _Bool hasCaptionsAsrPolicy; // @dynamic hasCaptionsAsrPolicy;
@property(nonatomic) _Bool hasCaptionsFormats; // @dynamic hasCaptionsFormats;
@property(nonatomic) _Bool hasIsTranslatable; // @dynamic hasIsTranslatable;
@property(nonatomic) _Bool hasKind; // @dynamic hasKind;
@property(nonatomic) _Bool hasLanguageCode; // @dynamic hasLanguageCode;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasRtl; // @dynamic hasRtl;
@property(nonatomic) _Bool hasVssId; // @dynamic hasVssId;
@property(nonatomic) _Bool isTranslatable; // @dynamic isTranslatable;
@property(copy, nonatomic) NSString *kind; // @dynamic kind;
@property(copy, nonatomic) NSString *languageCode; // @dynamic languageCode;
@property(retain, nonatomic) YTIFormattedString *name; // @dynamic name;
@property(nonatomic) _Bool rtl; // @dynamic rtl;
@property(copy, nonatomic) NSString *vssId; // @dynamic vssId;

@end

