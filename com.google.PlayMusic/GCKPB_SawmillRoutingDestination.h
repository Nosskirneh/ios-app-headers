//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCKPB_PBGeneratedMessage.h"

@class GCKPB_SawmillClearFields, NSString;

__attribute__((visibility("hidden")))
@interface GCKPB_SawmillRoutingDestination : GCKPB_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GCKPB_SawmillClearFields *clearFields; // @dynamic clearFields;
@property(nonatomic) _Bool hasClearFields; // @dynamic hasClearFields;
@property(nonatomic) _Bool hasIncludeTimezoneOffsetSeconds; // @dynamic hasIncludeTimezoneOffsetSeconds;
@property(nonatomic) _Bool hasLogSource; // @dynamic hasLogSource;
@property(nonatomic) _Bool hasLogType; // @dynamic hasLogType;
@property(nonatomic) _Bool hasPersonalOrphanedPrivacyApproved; // @dynamic hasPersonalOrphanedPrivacyApproved;
@property(nonatomic) _Bool hasPreferTmpIds; // @dynamic hasPreferTmpIds;
@property(nonatomic) _Bool hasTranslatorClass; // @dynamic hasTranslatorClass;
@property(nonatomic) _Bool includeTimezoneOffsetSeconds; // @dynamic includeTimezoneOffsetSeconds;
@property(retain, nonatomic) NSString *logSource; // @dynamic logSource;
@property(retain, nonatomic) NSString *logType; // @dynamic logType;
@property(nonatomic) _Bool personalOrphanedPrivacyApproved; // @dynamic personalOrphanedPrivacyApproved;
@property(nonatomic) int preferTmpIds; // @dynamic preferTmpIds;
@property(retain, nonatomic) NSString *translatorClass; // @dynamic translatorClass;

@end

