//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCKPB_PBGeneratedMessage.h"

@class GCKPB_PlayStoreBackgroundActionEvent, GCKPB_PlayStoreClickEvent, GCKPB_PlayStoreDeepLinkEvent, GCKPB_PlayStoreImpressionEvent, GCKPB_PlayStoreSearchEvent, GCKPB_PlayStoreSurveyEvent;

__attribute__((visibility("hidden")))
@interface GCKPB_PlayStoreLogEvent : GCKPB_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GCKPB_PlayStoreBackgroundActionEvent *backgroundAction; // @dynamic backgroundAction;
@property(retain, nonatomic) GCKPB_PlayStoreClickEvent *click; // @dynamic click;
@property(retain, nonatomic) GCKPB_PlayStoreDeepLinkEvent *deepLink; // @dynamic deepLink;
@property(nonatomic) _Bool hasBackgroundAction; // @dynamic hasBackgroundAction;
@property(nonatomic) _Bool hasClick; // @dynamic hasClick;
@property(nonatomic) _Bool hasDeepLink; // @dynamic hasDeepLink;
@property(nonatomic) _Bool hasImpression; // @dynamic hasImpression;
@property(nonatomic) _Bool hasSearch; // @dynamic hasSearch;
@property(nonatomic) _Bool hasSurvey; // @dynamic hasSurvey;
@property(retain, nonatomic) GCKPB_PlayStoreImpressionEvent *impression; // @dynamic impression;
@property(retain, nonatomic) GCKPB_PlayStoreSearchEvent *search; // @dynamic search;
@property(retain, nonatomic) GCKPB_PlayStoreSurveyEvent *survey; // @dynamic survey;

@end

