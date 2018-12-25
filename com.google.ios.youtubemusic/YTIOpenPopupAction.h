//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIOpenPopupActionSupportedRenderers;

@interface YTIOpenPopupAction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool beReused; // @dynamic beReused;
@property(nonatomic) unsigned int durationHintMs; // @dynamic durationHintMs;
@property(nonatomic) _Bool hasBeReused; // @dynamic hasBeReused;
@property(nonatomic) _Bool hasDurationHintMs; // @dynamic hasDurationHintMs;
@property(nonatomic) _Bool hasPopup; // @dynamic hasPopup;
@property(nonatomic) _Bool hasPopupType; // @dynamic hasPopupType;
@property(nonatomic) _Bool hasReplacePopup; // @dynamic hasReplacePopup;
@property(nonatomic) _Bool hasReusePopup; // @dynamic hasReusePopup;
@property(nonatomic) _Bool hasUniqueId; // @dynamic hasUniqueId;
@property(nonatomic) _Bool hasUpdateAction; // @dynamic hasUpdateAction;
@property(retain, nonatomic) YTIOpenPopupActionSupportedRenderers *popup; // @dynamic popup;
@property(nonatomic) int popupType; // @dynamic popupType;
@property(nonatomic) _Bool replacePopup; // @dynamic replacePopup;
@property(nonatomic) _Bool reusePopup; // @dynamic reusePopup;
@property(copy, nonatomic) NSString *uniqueId; // @dynamic uniqueId;
@property(nonatomic) _Bool updateAction; // @dynamic updateAction;

@end

